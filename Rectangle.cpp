#include "Rectangle.h"

Rectangle::Rectangle(int id, ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor, int width,
	Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle, Qt::PenJoinStyle pJoinStyle, int x, int y, int l, int w)
        : Shape(id, sh, bColor, bStyle, pColor, width, pStyle, pCapStyle, pJoinStyle, x, y)
{
	width = w;
	length = l;
    	setShape(ShapeType::rectangle);
}

void Rectangle::draw()
{
	getQPainter().setPen(getPen());
    	getQPainter().setBrush(getBrush());
        getQPainter().drawRect(getInitialPoint().x(), getInitialPoint().y(), length, width);
}

float Rectangle::perimeter()const
{
	float perimeter;
	perimeter = 2* (width + length);
	
	return perimeter;
}

float Rectangle::area()const
{
	float area;
	area = width * length;
	
	return area;
}

void Rectangle::move(int x, int y)
{
    setInitialPoint(x,y);
}

void Rectangle::shapeDimensions(const vector<int> &source)
{
    	Shape::shapeDimensions(source);
    	setRect(source[2],source[3]);
}

void Rectangle::print()
{
    	cout << "Rectangle:" << endl;
    	Shape::print();
    	cout << "\tLength: " << length << endl;
    	cout << "\tLength: " << width << endl;
}

void Rectangle::setRect(int l, int w)
{
	length = l;
	width = w;
}

const int& Rectangle::getLength()const
{
	return length;
}

const int& Rectangle::getWidth()const
{
	return width;
}
