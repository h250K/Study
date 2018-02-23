#pragma once

#include "Tree.h" 
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Visualizer
{
public:
	void Create(Graphics^ graphics,int width, int height,Color background, Color Line,Color select, Color linecircle, Color incircle, Color Text);
	void Draw(Tree* now);
	Tree::Node *Select(Tree* t, int x, int y);

private:
	Color mbackgroung;
	Color mline;
	Color mlinecircle;
	Color mincircle;
	Color mtext;
	Color mselect;

	Graphics^ gs;
	
	Pen ^pen_line;
	Pen ^pen_select;
	Pen ^pen_linecircle;
	Brush ^brush_incircle;
	Brush ^brush_text;

	Font ^ftext;
	Font ^findex;

	int x_max = 0;
	int y_max = 0;

	Tree::Node* selected = NULL;

	void Clear();
	void draw_line(Tree::Node *now, int height, int center);
	void draw_node(Tree::Node *now, int height, int center);
	Tree::Node* recursion_selected(Tree::Node *now, int height, int center, int x0, int y0);
};

