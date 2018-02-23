#include "stdafx.h"
#include "Visualizer.h"

void Visualizer::Clear()
{
	gs->Clear(mbackgroung);
}
void Visualizer::Create(Graphics^ graphics, int width, int height, Color background, Color Line, Color select, Color linecircle, Color incircle, Color text)
{
	gs = graphics;

	x_max = width;
	y_max = height;

	mbackgroung = background;
	mline = Line;
	mselect = select;
	mlinecircle = linecircle;
	mincircle = incircle;
	mtext = text;

	pen_line = gcnew Pen(mline);
	pen_line->Width =3;
	pen_select = gcnew Pen(mselect);
	pen_select->Width = 3;
	pen_linecircle = gcnew Pen(mlinecircle);
	pen_linecircle->Width = 3;
	brush_incircle = gcnew SolidBrush(incircle);
	brush_text = gcnew SolidBrush(text);
	ftext = gcnew Font("Arial", 13);
	findex = gcnew Font("Arial", 6);
}

Tree::Node *Visualizer::recursion_selected(Tree::Node *now, int height, int center, int x0, int y0)
{
	Tree::Node *res = NULL;

	if (now != NULL)
	{
		int x, y;
		y = height * y_max / 6 - y_max / 12;
		x = x_max / Math::Pow(2, height) * center;

		if (x0 > x - 20 && x0 < x + 20 && y0 > y - 20 && y0 < y + 20)
			res = now;

		if (now->left != NULL && res == NULL)
			res = recursion_selected(now->left, height + 1, center * 2 - 1, x0, y0);
		if (now->right != NULL && res == NULL)
			res = recursion_selected(now->right, height + 1, center * 2 + 1, x0, y0);
	};
	return res;
};
Tree::Node * Visualizer::Select(Tree* t, int x, int y)
{
	Tree::Node *res = recursion_selected(t->head, 1, 1, x, y);
	selected = res;
	draw_node(t->head, 1, 1);
	return res;
}
void Visualizer::draw_line(Tree::Node *now, int height, int center)
{
	if (now != NULL && ((now->right != NULL) || (now->left != NULL)))
	{
		int x1, x2, y1, y2;
		y1 = height * y_max / 6 - y_max / 12;
		y2 = (height + 1) * y_max / 6 - y_max / 12;
		x1 = x_max / Math::Pow(2, height) * center;
		if (now->left != NULL)
		{
			x2 = x_max / Math::Pow(2, height + 1) * (center * 2 - 1);
			draw_line(now->left, height + 1, center * 2 - 1);
			gs->DrawLine(pen_line, x1, y1, x2, y2);
		};
		if (now->right != NULL)
		{
			x2 = x_max / Math::Pow(2, height + 1) * (center * 2 + 1);
			draw_line(now->right, height + 1, center * 2 + 1);
			gs->DrawLine(pen_line, x1, y1, x2, y2);
		}
	}
}
void Visualizer::draw_node(Tree::Node *now, int height, int center)
{
	if (now != NULL)
	{
		int x, y;
		y = height * y_max / 6 - y_max / 12;
		x = x_max / Math::Pow(2, height) * center;

		if (now->left != NULL)
			draw_node(now->left, height + 1, center * 2 - 1);
		if (now->right != NULL)
			draw_node(now->right, height + 1, center * 2 + 1);
		gs->FillEllipse(brush_incircle, x - 20, y - 20, 40, 40);
		if (now == selected)
			gs->DrawEllipse(pen_select, x - 20, y - 20, 40, 40);
		else
			gs->DrawEllipse(pen_linecircle, x - 20, y - 20, 40, 40);

		gs->DrawString(now->data.ToString(), ftext, brush_text, x - 12, y - 8);
		gs->DrawString(now->height.ToString(), findex, brush_text, x + 10, y - 10);
	}
}
void Visualizer::Draw(Tree* now)
{
	selected = now->selected;
	Clear();
	draw_line(now->head, 1, 1);
	draw_node(now->head, 1, 1);
}
