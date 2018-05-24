namespace Lab1
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.openGLControl1 = new SharpGL.OpenGLControl();
            this.panel_top = new System.Windows.Forms.Panel();
            this.button_exit = new System.Windows.Forms.Button();
            this.panel_bar = new System.Windows.Forms.Panel();
            this.groupBox_figure = new System.Windows.Forms.GroupBox();
            this.radioButton_cone = new System.Windows.Forms.RadioButton();
            this.radioButton_cylinder = new System.Windows.Forms.RadioButton();
            this.label_b = new System.Windows.Forms.Label();
            this.textBox_b = new System.Windows.Forms.TextBox();
            this.trackBar_b = new System.Windows.Forms.TrackBar();
            this.label_a = new System.Windows.Forms.Label();
            this.textBox_a = new System.Windows.Forms.TextBox();
            this.trackBar_a = new System.Windows.Forms.TrackBar();
            this.label_z = new System.Windows.Forms.Label();
            this.textBox_z = new System.Windows.Forms.TextBox();
            this.trackBar_z = new System.Windows.Forms.TrackBar();
            this.label_y = new System.Windows.Forms.Label();
            this.textBox_y = new System.Windows.Forms.TextBox();
            this.trackBar_y = new System.Windows.Forms.TrackBar();
            this.label_x = new System.Windows.Forms.Label();
            this.textBox_x = new System.Windows.Forms.TextBox();
            this.trackBar_x = new System.Windows.Forms.TrackBar();
            this.panel_setting = new System.Windows.Forms.Panel();
            this.numericUpDown_perspective = new System.Windows.Forms.NumericUpDown();
            this.trackBar_perspective = new System.Windows.Forms.TrackBar();
            this.label_perspective = new System.Windows.Forms.Label();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.colorDialog1 = new System.Windows.Forms.ColorDialog();
            this.button_color_gr = new System.Windows.Forms.Button();
            this.button_color_sn = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.openGLControl1)).BeginInit();
            this.panel_top.SuspendLayout();
            this.panel_bar.SuspendLayout();
            this.groupBox_figure.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar_b)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar_a)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar_z)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar_y)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar_x)).BeginInit();
            this.panel_setting.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown_perspective)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar_perspective)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // openGLControl1
            // 
            this.openGLControl1.DrawFPS = true;
            this.openGLControl1.FrameRate = 30;
            this.openGLControl1.Location = new System.Drawing.Point(0, 48);
            this.openGLControl1.Name = "openGLControl1";
            this.openGLControl1.OpenGLVersion = SharpGL.Version.OpenGLVersion.OpenGL4_4;
            this.openGLControl1.RenderContextType = SharpGL.RenderContextType.DIBSection;
            this.openGLControl1.RenderTrigger = SharpGL.RenderTrigger.TimerBased;
            this.openGLControl1.Size = new System.Drawing.Size(1080, 720);
            this.openGLControl1.TabIndex = 0;
            this.openGLControl1.OpenGLDraw += new SharpGL.RenderEventHandler(this.openGLControl1_OpenGLDraw);
            this.openGLControl1.GDIDraw += new SharpGL.RenderEventHandler(this.openGLControl1_GDIDraw);
            this.openGLControl1.Load += new System.EventHandler(this.openGLControl1_Load);
            // 
            // panel_top
            // 
            this.panel_top.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(39)))), ((int)(((byte)(55)))), ((int)(((byte)(70)))));
            this.panel_top.Controls.Add(this.button_exit);
            this.panel_top.Location = new System.Drawing.Point(0, 0);
            this.panel_top.Name = "panel_top";
            this.panel_top.Size = new System.Drawing.Size(1366, 50);
            this.panel_top.TabIndex = 2;
            // 
            // button_exit
            // 
            this.button_exit.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("button_exit.BackgroundImage")));
            this.button_exit.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Zoom;
            this.button_exit.FlatAppearance.BorderSize = 0;
            this.button_exit.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.button_exit.Location = new System.Drawing.Point(1316, 3);
            this.button_exit.Name = "button_exit";
            this.button_exit.Size = new System.Drawing.Size(47, 41);
            this.button_exit.TabIndex = 1;
            this.button_exit.TextImageRelation = System.Windows.Forms.TextImageRelation.ImageAboveText;
            this.button_exit.UseVisualStyleBackColor = true;
            this.button_exit.Click += new System.EventHandler(this.button1_Click);
            // 
            // panel_bar
            // 
            this.panel_bar.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(46)))), ((int)(((byte)(64)))), ((int)(((byte)(83)))));
            this.panel_bar.Controls.Add(this.button_color_sn);
            this.panel_bar.Controls.Add(this.button_color_gr);
            this.panel_bar.Controls.Add(this.groupBox_figure);
            this.panel_bar.Controls.Add(this.label_b);
            this.panel_bar.Controls.Add(this.textBox_b);
            this.panel_bar.Controls.Add(this.trackBar_b);
            this.panel_bar.Controls.Add(this.label_a);
            this.panel_bar.Controls.Add(this.textBox_a);
            this.panel_bar.Controls.Add(this.trackBar_a);
            this.panel_bar.Controls.Add(this.label_z);
            this.panel_bar.Controls.Add(this.textBox_z);
            this.panel_bar.Controls.Add(this.trackBar_z);
            this.panel_bar.Controls.Add(this.label_y);
            this.panel_bar.Controls.Add(this.textBox_y);
            this.panel_bar.Controls.Add(this.trackBar_y);
            this.panel_bar.Controls.Add(this.label_x);
            this.panel_bar.Controls.Add(this.textBox_x);
            this.panel_bar.Controls.Add(this.trackBar_x);
            this.panel_bar.Location = new System.Drawing.Point(1080, 50);
            this.panel_bar.Name = "panel_bar";
            this.panel_bar.Size = new System.Drawing.Size(286, 718);
            this.panel_bar.TabIndex = 3;
            // 
            // groupBox_figure
            // 
            this.groupBox_figure.Controls.Add(this.radioButton_cone);
            this.groupBox_figure.Controls.Add(this.radioButton_cylinder);
            this.groupBox_figure.ForeColor = System.Drawing.Color.White;
            this.groupBox_figure.Location = new System.Drawing.Point(7, 179);
            this.groupBox_figure.Name = "groupBox_figure";
            this.groupBox_figure.Size = new System.Drawing.Size(267, 41);
            this.groupBox_figure.TabIndex = 16;
            this.groupBox_figure.TabStop = false;
            this.groupBox_figure.Text = "Фігура";
            // 
            // radioButton_cone
            // 
            this.radioButton_cone.AutoSize = true;
            this.radioButton_cone.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.radioButton_cone.Location = new System.Drawing.Point(182, 14);
            this.radioButton_cone.Name = "radioButton_cone";
            this.radioButton_cone.Size = new System.Drawing.Size(70, 24);
            this.radioButton_cone.TabIndex = 1;
            this.radioButton_cone.Text = "Конус";
            this.radioButton_cone.UseVisualStyleBackColor = true;
            // 
            // radioButton_cylinder
            // 
            this.radioButton_cylinder.AutoSize = true;
            this.radioButton_cylinder.Checked = true;
            this.radioButton_cylinder.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.radioButton_cylinder.Location = new System.Drawing.Point(25, 14);
            this.radioButton_cylinder.Name = "radioButton_cylinder";
            this.radioButton_cylinder.Size = new System.Drawing.Size(99, 24);
            this.radioButton_cylinder.TabIndex = 0;
            this.radioButton_cylinder.TabStop = true;
            this.radioButton_cylinder.Text = "Циліндер";
            this.radioButton_cylinder.UseVisualStyleBackColor = true;
            // 
            // label_b
            // 
            this.label_b.AutoSize = true;
            this.label_b.Font = new System.Drawing.Font("Arial", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_b.ForeColor = System.Drawing.SystemColors.Control;
            this.label_b.Location = new System.Drawing.Point(4, 158);
            this.label_b.Name = "label_b";
            this.label_b.Size = new System.Drawing.Size(30, 18);
            this.label_b.TabIndex = 15;
            this.label_b.Text = "b =";
            this.label_b.UseMnemonic = false;
            // 
            // textBox_b
            // 
            this.textBox_b.Location = new System.Drawing.Point(32, 157);
            this.textBox_b.Name = "textBox_b";
            this.textBox_b.Size = new System.Drawing.Size(52, 20);
            this.textBox_b.TabIndex = 14;
            this.textBox_b.Text = "0";
            this.textBox_b.TextChanged += new System.EventHandler(this.textBox_b_TextChanged);
            // 
            // trackBar_b
            // 
            this.trackBar_b.Cursor = System.Windows.Forms.Cursors.Hand;
            this.trackBar_b.LargeChange = 10;
            this.trackBar_b.Location = new System.Drawing.Point(82, 148);
            this.trackBar_b.Maximum = 180;
            this.trackBar_b.Minimum = -180;
            this.trackBar_b.Name = "trackBar_b";
            this.trackBar_b.Size = new System.Drawing.Size(200, 45);
            this.trackBar_b.SmallChange = 2;
            this.trackBar_b.TabIndex = 13;
            this.trackBar_b.TabStop = false;
            this.trackBar_b.TickFrequency = 2;
            this.trackBar_b.TickStyle = System.Windows.Forms.TickStyle.TopLeft;
            this.trackBar_b.Scroll += new System.EventHandler(this.trackBar_b_Scroll);
            // 
            // label_a
            // 
            this.label_a.AutoSize = true;
            this.label_a.Font = new System.Drawing.Font("Arial", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_a.ForeColor = System.Drawing.SystemColors.Control;
            this.label_a.Location = new System.Drawing.Point(4, 129);
            this.label_a.Name = "label_a";
            this.label_a.Size = new System.Drawing.Size(29, 18);
            this.label_a.TabIndex = 12;
            this.label_a.Text = "a =";
            this.label_a.UseMnemonic = false;
            // 
            // textBox_a
            // 
            this.textBox_a.Location = new System.Drawing.Point(32, 128);
            this.textBox_a.Name = "textBox_a";
            this.textBox_a.Size = new System.Drawing.Size(52, 20);
            this.textBox_a.TabIndex = 11;
            this.textBox_a.Text = "0";
            this.textBox_a.TextChanged += new System.EventHandler(this.textBox_a_TextChanged);
            // 
            // trackBar_a
            // 
            this.trackBar_a.Cursor = System.Windows.Forms.Cursors.Hand;
            this.trackBar_a.LargeChange = 10;
            this.trackBar_a.Location = new System.Drawing.Point(82, 119);
            this.trackBar_a.Maximum = 180;
            this.trackBar_a.Minimum = -180;
            this.trackBar_a.Name = "trackBar_a";
            this.trackBar_a.Size = new System.Drawing.Size(200, 45);
            this.trackBar_a.SmallChange = 2;
            this.trackBar_a.TabIndex = 10;
            this.trackBar_a.TabStop = false;
            this.trackBar_a.TickFrequency = 2;
            this.trackBar_a.TickStyle = System.Windows.Forms.TickStyle.TopLeft;
            this.trackBar_a.Scroll += new System.EventHandler(this.trackBar_a_Scroll);
            // 
            // label_z
            // 
            this.label_z.AutoSize = true;
            this.label_z.Font = new System.Drawing.Font("Arial", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_z.ForeColor = System.Drawing.SystemColors.Control;
            this.label_z.Location = new System.Drawing.Point(4, 83);
            this.label_z.Name = "label_z";
            this.label_z.Size = new System.Drawing.Size(29, 18);
            this.label_z.TabIndex = 9;
            this.label_z.Text = "z =";
            this.label_z.UseMnemonic = false;
            // 
            // textBox_z
            // 
            this.textBox_z.Location = new System.Drawing.Point(32, 82);
            this.textBox_z.Name = "textBox_z";
            this.textBox_z.Size = new System.Drawing.Size(52, 20);
            this.textBox_z.TabIndex = 8;
            this.textBox_z.Text = "0";
            this.textBox_z.TextChanged += new System.EventHandler(this.textBox_z_TextChanged);
            // 
            // trackBar_z
            // 
            this.trackBar_z.Cursor = System.Windows.Forms.Cursors.Hand;
            this.trackBar_z.LargeChange = 10;
            this.trackBar_z.Location = new System.Drawing.Point(82, 73);
            this.trackBar_z.Maximum = 400;
            this.trackBar_z.Name = "trackBar_z";
            this.trackBar_z.Size = new System.Drawing.Size(200, 45);
            this.trackBar_z.SmallChange = 2;
            this.trackBar_z.TabIndex = 7;
            this.trackBar_z.TabStop = false;
            this.trackBar_z.TickFrequency = 2;
            this.trackBar_z.TickStyle = System.Windows.Forms.TickStyle.TopLeft;
            this.trackBar_z.Scroll += new System.EventHandler(this.trackBar_z_Scroll);
            // 
            // label_y
            // 
            this.label_y.AutoSize = true;
            this.label_y.Font = new System.Drawing.Font("Arial", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_y.ForeColor = System.Drawing.SystemColors.Control;
            this.label_y.Location = new System.Drawing.Point(4, 54);
            this.label_y.Name = "label_y";
            this.label_y.Size = new System.Drawing.Size(28, 18);
            this.label_y.TabIndex = 6;
            this.label_y.Text = "y =";
            this.label_y.UseMnemonic = false;
            // 
            // textBox_y
            // 
            this.textBox_y.Location = new System.Drawing.Point(32, 53);
            this.textBox_y.Name = "textBox_y";
            this.textBox_y.Size = new System.Drawing.Size(52, 20);
            this.textBox_y.TabIndex = 5;
            this.textBox_y.Text = "0";
            this.textBox_y.TextChanged += new System.EventHandler(this.textBox_y_TextChanged);
            // 
            // trackBar_y
            // 
            this.trackBar_y.Cursor = System.Windows.Forms.Cursors.Hand;
            this.trackBar_y.LargeChange = 10;
            this.trackBar_y.Location = new System.Drawing.Point(82, 44);
            this.trackBar_y.Maximum = 100;
            this.trackBar_y.Minimum = -100;
            this.trackBar_y.Name = "trackBar_y";
            this.trackBar_y.Size = new System.Drawing.Size(200, 45);
            this.trackBar_y.SmallChange = 2;
            this.trackBar_y.TabIndex = 4;
            this.trackBar_y.TabStop = false;
            this.trackBar_y.TickFrequency = 2;
            this.trackBar_y.TickStyle = System.Windows.Forms.TickStyle.TopLeft;
            this.trackBar_y.Value = 1;
            this.trackBar_y.Scroll += new System.EventHandler(this.trackBar_y_Scroll);
            // 
            // label_x
            // 
            this.label_x.AutoSize = true;
            this.label_x.Font = new System.Drawing.Font("Arial", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_x.ForeColor = System.Drawing.SystemColors.Control;
            this.label_x.Location = new System.Drawing.Point(4, 25);
            this.label_x.Name = "label_x";
            this.label_x.Size = new System.Drawing.Size(29, 18);
            this.label_x.TabIndex = 3;
            this.label_x.Text = "x =";
            this.label_x.UseMnemonic = false;
            // 
            // textBox_x
            // 
            this.textBox_x.Location = new System.Drawing.Point(32, 24);
            this.textBox_x.Name = "textBox_x";
            this.textBox_x.Size = new System.Drawing.Size(52, 20);
            this.textBox_x.TabIndex = 2;
            this.textBox_x.Text = "0";
            this.textBox_x.TextChanged += new System.EventHandler(this.textBox_x_TextChanged);
            // 
            // trackBar_x
            // 
            this.trackBar_x.Cursor = System.Windows.Forms.Cursors.Hand;
            this.trackBar_x.LargeChange = 10;
            this.trackBar_x.Location = new System.Drawing.Point(82, 15);
            this.trackBar_x.Maximum = 150;
            this.trackBar_x.Minimum = -150;
            this.trackBar_x.Name = "trackBar_x";
            this.trackBar_x.Size = new System.Drawing.Size(200, 45);
            this.trackBar_x.SmallChange = 2;
            this.trackBar_x.TabIndex = 1;
            this.trackBar_x.TabStop = false;
            this.trackBar_x.TickFrequency = 2;
            this.trackBar_x.TickStyle = System.Windows.Forms.TickStyle.TopLeft;
            this.trackBar_x.Value = 1;
            this.trackBar_x.Scroll += new System.EventHandler(this.trackBar_x_Scroll);
            // 
            // panel_setting
            // 
            this.panel_setting.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(46)))), ((int)(((byte)(64)))), ((int)(((byte)(83)))));
            this.panel_setting.Controls.Add(this.numericUpDown_perspective);
            this.panel_setting.Controls.Add(this.trackBar_perspective);
            this.panel_setting.Controls.Add(this.label_perspective);
            this.panel_setting.Location = new System.Drawing.Point(0, 50);
            this.panel_setting.Name = "panel_setting";
            this.panel_setting.Size = new System.Drawing.Size(280, 718);
            this.panel_setting.TabIndex = 4;
            // 
            // numericUpDown_perspective
            // 
            this.numericUpDown_perspective.Location = new System.Drawing.Point(6, 44);
            this.numericUpDown_perspective.Maximum = new decimal(new int[] {
            400,
            0,
            0,
            0});
            this.numericUpDown_perspective.Name = "numericUpDown_perspective";
            this.numericUpDown_perspective.Size = new System.Drawing.Size(60, 20);
            this.numericUpDown_perspective.TabIndex = 2;
            this.numericUpDown_perspective.Value = new decimal(new int[] {
            200,
            0,
            0,
            0});
            this.numericUpDown_perspective.ValueChanged += new System.EventHandler(this.numericUpDown_perspective_ValueChanged);
            // 
            // trackBar_perspective
            // 
            this.trackBar_perspective.Location = new System.Drawing.Point(72, 41);
            this.trackBar_perspective.Maximum = 40;
            this.trackBar_perspective.Name = "trackBar_perspective";
            this.trackBar_perspective.Size = new System.Drawing.Size(205, 45);
            this.trackBar_perspective.TabIndex = 1;
            this.trackBar_perspective.Value = 20;
            this.trackBar_perspective.Scroll += new System.EventHandler(this.trackBar_perspective_Scroll);
            // 
            // label_perspective
            // 
            this.label_perspective.AutoSize = true;
            this.label_perspective.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.label_perspective.Location = new System.Drawing.Point(3, 6);
            this.label_perspective.Name = "label_perspective";
            this.label_perspective.Size = new System.Drawing.Size(74, 13);
            this.label_perspective.TabIndex = 0;
            this.label_perspective.Text = "Перспектива";
            // 
            // pictureBox1
            // 
            this.pictureBox1.BackColor = System.Drawing.Color.Black;
            this.pictureBox1.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("pictureBox1.BackgroundImage")));
            this.pictureBox1.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Zoom;
            this.pictureBox1.Location = new System.Drawing.Point(280, 377);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(64, 64);
            this.pictureBox1.TabIndex = 5;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.Click += new System.EventHandler(this.pictureBox1_Click);
            this.pictureBox1.MouseDown += new System.Windows.Forms.MouseEventHandler(this.pictureBox1_MouseDown);
            // 
            // button_color_gr
            // 
            this.button_color_gr.BackColor = System.Drawing.Color.White;
            this.button_color_gr.FlatAppearance.BorderSize = 3;
            this.button_color_gr.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.button_color_gr.Font = new System.Drawing.Font("Arial Narrow", 15.75F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_color_gr.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(40)))), ((int)(((byte)(40)))), ((int)(((byte)(40)))));
            this.button_color_gr.Location = new System.Drawing.Point(7, 226);
            this.button_color_gr.Name = "button_color_gr";
            this.button_color_gr.Size = new System.Drawing.Size(267, 46);
            this.button_color_gr.TabIndex = 17;
            this.button_color_gr.Text = "Колір основи";
            this.button_color_gr.UseVisualStyleBackColor = false;
            this.button_color_gr.Click += new System.EventHandler(this.button_color_gr_Click);
            // 
            // button_color_sn
            // 
            this.button_color_sn.BackColor = System.Drawing.Color.White;
            this.button_color_sn.FlatAppearance.BorderSize = 3;
            this.button_color_sn.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.button_color_sn.Font = new System.Drawing.Font("Arial Narrow", 15.75F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_color_sn.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(40)))), ((int)(((byte)(40)))), ((int)(((byte)(40)))));
            this.button_color_sn.Location = new System.Drawing.Point(7, 278);
            this.button_color_sn.Name = "button_color_sn";
            this.button_color_sn.Size = new System.Drawing.Size(267, 46);
            this.button_color_sn.TabIndex = 18;
            this.button_color_sn.Text = "Бічна поверхня";
            this.button_color_sn.UseVisualStyleBackColor = false;
            this.button_color_sn.Click += new System.EventHandler(this.button_color_sn_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.ClientSize = new System.Drawing.Size(1366, 768);
            this.ControlBox = false;
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.panel_setting);
            this.Controls.Add(this.panel_bar);
            this.Controls.Add(this.panel_top);
            this.Controls.Add(this.openGLControl1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "Form1";
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized;
            ((System.ComponentModel.ISupportInitialize)(this.openGLControl1)).EndInit();
            this.panel_top.ResumeLayout(false);
            this.panel_bar.ResumeLayout(false);
            this.panel_bar.PerformLayout();
            this.groupBox_figure.ResumeLayout(false);
            this.groupBox_figure.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar_b)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar_a)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar_z)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar_y)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar_x)).EndInit();
            this.panel_setting.ResumeLayout(false);
            this.panel_setting.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown_perspective)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar_perspective)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private SharpGL.OpenGLControl openGLControl1;
        private System.Windows.Forms.Button button_exit;
        private System.Windows.Forms.Panel panel_top;
        private System.Windows.Forms.Panel panel_bar;
        private System.Windows.Forms.TrackBar trackBar_x;
        private System.Windows.Forms.Panel panel_setting;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.NumericUpDown numericUpDown_perspective;
        private System.Windows.Forms.TrackBar trackBar_perspective;
        private System.Windows.Forms.Label label_perspective;
        private System.Windows.Forms.TextBox textBox_x;
        private System.Windows.Forms.Label label_x;
        private System.Windows.Forms.Label label_y;
        private System.Windows.Forms.TextBox textBox_y;
        private System.Windows.Forms.TrackBar trackBar_y;
        private System.Windows.Forms.Label label_z;
        private System.Windows.Forms.TextBox textBox_z;
        private System.Windows.Forms.TrackBar trackBar_z;
        private System.Windows.Forms.Label label_b;
        private System.Windows.Forms.TextBox textBox_b;
        private System.Windows.Forms.TrackBar trackBar_b;
        private System.Windows.Forms.Label label_a;
        private System.Windows.Forms.TextBox textBox_a;
        private System.Windows.Forms.TrackBar trackBar_a;
        private System.Windows.Forms.GroupBox groupBox_figure;
        private System.Windows.Forms.RadioButton radioButton_cone;
        private System.Windows.Forms.RadioButton radioButton_cylinder;
        private System.Windows.Forms.ColorDialog colorDialog1;
        private System.Windows.Forms.Button button_color_sn;
        private System.Windows.Forms.Button button_color_gr;
    }
}

