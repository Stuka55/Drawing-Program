#include "Square.h"

Square::Square(int id, ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor, int width,
	Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle, Qt::PenJoinStyle pJoinStyle, int x, int y, int lengthIn)
	: Shape(id, sh, bColor, bStyle, pColor, width, pStyle, pCapStyle, pJoinStyle, x, y)
{
	length 	= lengthIn;
    	setShape(ShapeType::square);
}

void Square::draw()
{
    	getQPainter().setPen(getPen());
    	getQPainter().setBrush(getBrush());
    	getQPainter().drawRect(getInitialPoint().x(), getInitialPoint().y(), length, length);
}

float Square::perimeter()const
{
    	return 4*length;
}

float Square::area()const
{	
    	return length*length;
}

void Square::move(int x, int y)
{
    setInitialPoint(x,y);
}

void Square::shapeDimensions(const vector<int> &source)
{
    	Shape::shapeDimensions(source);
    	length = source[2];
}

void Square::print(){
    	cout << "Square:" << endl;
    	cout << "\tLength: " << length << endl;
}

void Square::setLength(int l)
{
	length = l;
}

const int& Square::getLength()const
{
	return length;
}
