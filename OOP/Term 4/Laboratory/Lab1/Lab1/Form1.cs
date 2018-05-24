using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using SharpGL;

namespace Lab1
{
    public partial class Form1 : Form
    {
        public OpenGL gl;
        public MyGl mgl = new MyGl();

        public figure testone = new figure();

        public void SetMaterial(float[] color)
        {
            gl.Material(OpenGL.GL_FRONT_AND_BACK, OpenGL.GL_AMBIENT, color);
            gl.Material(OpenGL.GL_FRONT_AND_BACK, OpenGL.GL_DIFFUSE, color);
            gl.Material(OpenGL.GL_FRONT_AND_BACK, OpenGL.GL_SPECULAR, color);
        }

        public void DrawRoom()
        {
            SetMaterial(new float[4] { 0.9f, 0.9f, 0.9f, 1 });
            //back
            gl.Begin(OpenGL.GL_POLYGON);
            gl.Vertex(15.0f, -10.0f, -40.0f);
            gl.Vertex(15.0f, 10.0f, -40.0f);
            gl.Vertex(-15.0f, 10.0f, -40.0f);
            gl.Vertex(-15.0f, -10.0f, -40.0f);
            gl.End();

            SetMaterial(new float[4] { 0.85f, 0.85f, 0.85f, 1 });
            //right
            gl.Begin(OpenGL.GL_POLYGON);
            gl.Vertex(15.0f, -10.0f, 0.0f);
            gl.Vertex(15.0f, 10.0f, 0.0f);
            gl.Vertex(15.0f, 10.0f, -40.0f);
            gl.Vertex(15.0f, -10.0f, -40.0f);
            gl.End();

            //left
            gl.Begin(OpenGL.GL_POLYGON);
            gl.Vertex(-15.0f, -10.0f, 0.0f);
            gl.Vertex(-15.0f, 10.0f, 0.0f);
            gl.Vertex(-15.0f, 10.0f, -40.0f);
            gl.Vertex(-15.0f, -10.0f, -40.0f);
            gl.End();

            SetMaterial(new float[4] { 0.8f, 0.8f, 0.8f, 1 });
            //top
            gl.Begin(OpenGL.GL_POLYGON);
            gl.Vertex(15.0f, 10.0f, 0.0f);
            gl.Vertex(15.0f, 10.0f, -40.0f);
            gl.Vertex(-15.0f, 10.0f, -40.0f);
            gl.Vertex(-15.0f, 10.0f, 0.0f);
            gl.End();

            //bottom
            gl.Begin(OpenGL.GL_POLYGON);
            gl.Vertex(15.0f, -10.0f, 0.0f);
            gl.Vertex(15.0f, -10.0f, -40.0f);
            gl.Vertex(-15.0f, -10.0f, -40.0f);
            gl.Vertex(-15.0f, -10.0f, 0.0f);
            gl.End();
        } 


        public Form1()
        {
            InitializeComponent();
            gl = openGLControl1.OpenGL;
            mgl.gl = openGLControl1.OpenGL;

            testone.name = "cylinder";
            testone.x = -1.0f;
            testone.y = 1.0f;
            testone.z = 0.0f;

            testone.height = 2.0f;
            testone.width = 2.5f;
            testone.csurface = Color.FromArgb(255, 244, 122, 255);

        }
        
        private void openGLControl1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void openGLControl1_GDIDraw(object sender, RenderEventArgs args)
        {

        }

        public void DrawAll()
        {
            //Установка проекційної матриці
            gl.MatrixMode(OpenGL.GL_PROJECTION);

            //Очистка Матриці
            gl.LoadIdentity();

            //Установка перспективи
            gl.Perspective(45, (float)openGLControl1.Width / (float)openGLControl1.Height, 0.1,200);
         
            gl.MatrixMode(OpenGL.GL_MODELVIEW);
            gl.LoadIdentity();
            
            //Установка глибини, освітлення
            gl.Enable(OpenGL.GL_DEPTH_TEST);

            //Очищення 
            gl.Clear(OpenGL.GL_COLOR_BUFFER_BIT | OpenGL.GL_DEPTH_BUFFER_BIT);

            //Установка пера далі
            gl.Translate(0.0f, 0.0f, -11.0f);


            // СВЕТ, КАМЕРА, БЛЕТ БУНД
            gl.Enable(OpenGL.GL_LIGHTING);
            gl.Enable(OpenGL.GL_LIGHT0);

            float[] ambient = { 0.2f, 0.2f, 0.2f, 1.0f };
            float[] diffuse = { 1.0f, 1.0f, 1.0f, 1.0f };
            float[] specular = { 1.0f, 1.0f, 1.0f, 1.0f };
            float[] position = { 200.0f, 300.0f, 100.0f, 0.0f };

            gl.Light(OpenGL.GL_LIGHT0, OpenGL.GL_AMBIENT, ambient);
            gl.Light(OpenGL.GL_LIGHT0, OpenGL.GL_DIFFUSE, diffuse);
            gl.Light(OpenGL.GL_LIGHT0, OpenGL.GL_SPECULAR, specular);
            gl.Light(OpenGL.GL_LIGHT0, OpenGL.GL_POSITION, position);

            float[] shininess = new float[1] {90};
            gl.Material(OpenGL.GL_FRONT_AND_BACK, OpenGL.GL_SHININESS, shininess);

            // Боль клаустрофоба
            DrawRoom();

            // think about it
            testone.x = (float)System.Convert.ToDouble(textBox_x.Text);
            testone.y = (float)System.Convert.ToDouble(textBox_y.Text);
            testone.z = -(float)System.Convert.ToDouble(textBox_z.Text);

            testone.alpha = (float)System.Convert.ToDouble(textBox_a.Text);
            testone.beta = (float)System.Convert.ToDouble(textBox_b.Text);

            testone.csurface = button_color_sn.BackColor;
            testone.cbase = button_color_gr.BackColor;

            if (radioButton_cylinder.Checked == true)
                testone.name = "cylinder";
            if (radioButton_cone.Checked == true)
                testone.name = "cone";

            mgl.DrawFigure(testone);
            gl.End();
        }
        private void openGLControl1_OpenGLDraw(object sender, RenderEventArgs args)
        {
            DrawAll();
        }


        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void pictureBox1_MouseDown(object sender, MouseEventArgs e)
        {
            if (pictureBox1.Left == 280)
            {
                panel_setting.Left = -280;
                pictureBox1.Left = 0;
            }
            else
            if (pictureBox1.Left == 0)
            {
                panel_setting.Left = 0;
                pictureBox1.Left = 280;
            }
        }

        bool isfloat()
        {
            bool res = true;

            return res;
        }

        private void trackBar_perspective_Scroll(object sender, EventArgs e)
        {
            numericUpDown_perspective.Value = trackBar_perspective.Value * 10;
        }

        private void numericUpDown_perspective_ValueChanged(object sender, EventArgs e)
        {
            trackBar_perspective.Value = (int)numericUpDown_perspective.Value / 10;
        }

        private void trackBar_x_Scroll(object sender, EventArgs e)
        {
            textBox_x.Text = ((float)trackBar_x.Value / 10.0f).ToString();
        }

        private void textBox_x_TextChanged(object sender, EventArgs e)
        {
            trackBar_x.Value = (int)(System.Convert.ToDouble(textBox_x.Text) * 10.0);
        }



        private void trackBar_y_Scroll(object sender, EventArgs e)
        {
            textBox_y.Text = ((float)trackBar_y.Value / 10.0f).ToString();
        }
        private void textBox_y_TextChanged(object sender, EventArgs e)
        {
            trackBar_y.Value = (int)(System.Convert.ToDouble(textBox_y.Text) * 10.0);
        }

        private void trackBar_z_Scroll(object sender, EventArgs e)
        {
            textBox_z.Text = ((float)trackBar_z.Value / 10.0f).ToString();
        }
        private void textBox_z_TextChanged(object sender, EventArgs e)
        {
            trackBar_z.Value = (int)(System.Convert.ToDouble(textBox_z.Text) * 10.0);
        }

        private void trackBar_a_Scroll(object sender, EventArgs e)
        {
            textBox_a.Text = ((float)trackBar_a.Value).ToString();
        }

        private void trackBar_b_Scroll(object sender, EventArgs e)
        {
            textBox_b.Text = ((float)trackBar_b.Value).ToString();
        }


        private void textBox_a_TextChanged(object sender, EventArgs e)
        {
            trackBar_a.Value = (int)(System.Convert.ToDouble(textBox_a.Text));
        }

        private void textBox_b_TextChanged(object sender, EventArgs e)
        {
            trackBar_b.Value = (int)(System.Convert.ToDouble(textBox_b.Text));
        }

        private void button_color_gr_Click(object sender, EventArgs e)
        {
            colorDialog1.ShowDialog();
            button_color_gr.BackColor = colorDialog1.Color;
        }

        private void button_color_sn_Click(object sender, EventArgs e)
        {
            colorDialog1.ShowDialog();
            button_color_sn.BackColor = colorDialog1.Color;
        }
    }
}
