#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <QTimer>
#include <QGLWidget>
#include <GL/gl.h>

class WOpengl: public QGLWidget { public: WOpengl(); };

void initializeGL();
void resizeGL(int nWidth, int nHeight);
void paintGL();

void WOpengl::initializeGL()
{
    qglClearColor(Qt::black);
    glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
}
void WOpengl::resizeGL(int nWidth, int nHeight) {
    glViewport(0, 0, nHeight, nHeight);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Button_clicked()
{
    ui->label->setText("123");
    QMessageBox::StandardButton question = QMessageBox::question(this, "hello","12312",QMessageBox::Yes | QMessageBox::No);
    if(question == QMessageBox::Yes)
        ui->label->setText("Yes  ++++++");
    else
        ui->label->setText("No  -----");
}
