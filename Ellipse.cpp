#include "Ellipse.h"

Ellipse::Ellipse(int id, ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor, int width,
	Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle, Qt::PenJoinStyle pJoinStyle, int x, int y, int major, int minor)
        : Shape(id, sh, bColor, bStyle, pColor,width,pStyle,pCapStyle,pJoinStyle,x,y)
{
  semiMinorAxis = minor;
  semiMajorAxis = major;
  setShape(ShapeType::ellipse);
}

void Ellipse::draw()
{
  getQPainter().setPen(getPen());
  getQPainter().setBrush(getBrush());
  getQPainter().drawEllipse(getInitialPoint(), semiMajorAxis, semiMinorAxis);
}

void Ellipse::move(int x, int y)
{
    setInitialPoint(x,y);
}

float Ellipse::perimeter()const
{
  float formula1;
  float formula2;
  formula1 = (2 * 3.14159);
  formula2 = ((semiMinorAxis*semiMinorAxis) + (semiMajorAxis*semiMajorAxis)) / 2;
 
 float perimeter = formula1*sqrt(formula2); 
 // formula for ellipse is wacky so I broke it down into multiple parts to make it
 // more readable also there are lots of different ways to calculate its perimeter
 return perimeter;
}

float Ellipse::area()const
{
  float area = 3.14159 * semiMinorAxis * semiMajorAxis;;
  return area;
}

//int Ellipse::shapeDimensions(int x, int y) override

void Ellipse::setAxises(int major, int minor)
{
	semiMajorAxis = major;
	semiMinorAxis = minor;
}

const int& Ellipse::getMajorAxis()const
{
	return semiMajorAxis;
}
const int& Ellipse::getMinorAxis()const
{
	return semiMinorAxis;
}

void Ellipse::shapeDimensions(const vector<int>&source)
{
    Shape::shapeDimensions(source);
    setAxises(source[2],source[3]);
}

void Ellipse::print()
{
    cout << "Ellipse:" << endl;
    Shape::print();
    cout << "\tSemi-minor axis: " << semiMinorAxis << endl;
    cout << "\tSemi major axis: " << semiMajorAxis << endl;
}
