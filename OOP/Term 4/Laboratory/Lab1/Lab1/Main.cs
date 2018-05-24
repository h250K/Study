using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;
using SharpGL;
using SharpGL.OpenGLAttributes;

namespace Lab1
{   
    
    //фігура
    public struct figure
    {
        public string name;

        public float x;
        public float y;
        public float z;

        public float height;
        public float width;

        public float alpha;
        public float beta;

        public Color cbase;
        public Color csurface;


    }

    public class MyGl
    {
        public OpenGL gl;
        //open GL
        public void DrawFigure(figure now)
        {
            int countsegments = 50;

            IntPtr q = gl.NewQuadric();
            gl.Translate(now.x, now.y, now.z);
            gl.Rotate(now.alpha, now.beta, 0.0f);

            gl.QuadricDrawStyle(q, OpenGL.GLU_FILL);

            float[] dif = { (float)now.csurface.R / 256f, (float)now.csurface.G / 256f, (float)now.csurface.B / 256f, (float)now.csurface.A / 256f };
            gl.Material(OpenGL.GL_FRONT_AND_BACK, OpenGL.GL_AMBIENT, dif);
            gl.Material(OpenGL.GL_FRONT_AND_BACK, OpenGL.GL_DIFFUSE, dif);
            gl.Material(OpenGL.GL_FRONT_AND_BACK, OpenGL.GL_SPECULAR, dif);

            float second_oval = 0;
            if (now.name == "cylinder")
                second_oval = now.width / 2;

            gl.Cylinder(q, now.width / 2, second_oval, now.height, countsegments, countsegments);

            float[] dif2 = { (float)now.cbase.R / 256f, (float)now.cbase.G / 256f, (float)now.cbase.B / 256f, (float)now.cbase.A / 256f };
            gl.Material(OpenGL.GL_FRONT_AND_BACK, OpenGL.GL_AMBIENT, dif2);
            gl.Material(OpenGL.GL_FRONT_AND_BACK, OpenGL.GL_DIFFUSE, dif2);
            gl.Material(OpenGL.GL_FRONT_AND_BACK, OpenGL.GL_SPECULAR, dif2);

            gl.Begin(OpenGL.GL_POLYGON);
                gl.Normal(0, 0, 1.0f);
                 for (int i = 0; i <= countsegments; i++)
                 {
                     float angle = 2.0f * (float)Math.PI * (float)i / (float)countsegments;
                     float dx = now.width * (float)Math.Cos(angle) / 2f;
                     float dy = now.width * (float)Math.Sin(angle) / 2f;
                     gl.Vertex(dx, dy, 0.0f);
                 }
                 gl.End();
            if (now.name == "cylinder")
            {
                gl.Begin(OpenGL.GL_POLYGON);
                for (int i = 0; i <= countsegments; i++)
                {
                    float angle = 2.0f * (float)Math.PI * (float)i / (float)countsegments;
                    float dx = now.width * (float)Math.Cos(angle) / 2f;
                    float dy = now.width * (float)Math.Sin(angle) / 2f;
                    gl.Vertex(dx, dy, now.height);
                }
                gl.End();
            }
            
            gl.End();
            gl.DeleteQuadric(q);

        }
       
    }

    class Main
    {
    }
}
