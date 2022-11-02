#include "Circle.h"

Circle::Circle(int id, ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor, int width,
	Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle, Qt::PenJoinStyle pJoinStyle, int x, int y, int radiusIn)
	: Shape(id, sh, bColor, bStyle, pColor,width,pStyle,pCapStyle,pJoinStyle,x,y)
{
	radius = radiusIn;
	setShape(ShapeType::circle);
}

void Circle::draw()
{
    getQPainter().setPen(getPen());
    getQPainter().setBrush(getBrush());
    getQPainter().drawEllipse(getInitialPoint(), radius, radius);
	
}

float Circle::perimeter()const
{
	
	float circumference;
	
	circumference = 2*3.14*radius;
	
	return circumference;
	
}

float Circle::area()const
{	
	float area;

	area = 3.14*radius*radius;
	
	return area;
}
	
	
void Circle::move(int x, int y)
{
    setInitialPoint(x,y);
}

void Circle::shapeDimensions(const vector<int> &source)
{
    Shape::shapeDimensions(source);
    radius = source[2];
}

void Circle::setRadius(int r)
{
    radius = r;
}

void Circle::print(){
    cout << "Circle:" << endl;
    Shape::print();
    cout << "\tRadius: " << radius << endl;
}

int Circle::getRadius() const
{
    return radius;
}
