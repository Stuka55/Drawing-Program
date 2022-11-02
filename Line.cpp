#include"Line.h"

Line::Line(int id, ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor, int width, Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle,
     Qt::PenJoinStyle pJoinStyle, int x, int y, int x2, int y2)
     : Shape(id, sh, bColor, bStyle, pColor, width, pStyle, pCapStyle, pJoinStyle, x, y)
{
    endPoint.setX(x2);
    endPoint.setY(y2);
}

void Line::draw()
{
    getQPainter().setPen(getPen());
    getQPainter().setBrush(getBrush());
    (getQPainter()).drawLine(getInitialPoint(), getEndPoint());
}

void Line::move(int x, int y)
{
    int distanceX = x - getInitialPoint().x();
    int distanceY = y - getInitialPoint().y();
    setInitialPoint(x,y);
    setEndPoint(endPoint.x() + distanceX, endPoint.y() + distanceY);
}

float Line::perimeter()const
{
    return 0.0;
}

float Line::area()const
{
    return 0.0;
}

void Line::shapeDimensions(const vector<int>& source)
{
    Shape::shapeDimensions(source);
    setEndPoint(source[2],source[3]);
}

void Line::print()
{
    cout << "Line:" << endl;
    Shape::print();
    cout << "\tpoint 2: (" << endPoint.x() << "," << endPoint.y() << ")" << endl;
}

void Line::setEndPoint(int x, int y)
{
    endPoint.setX(x);
    endPoint.setY(y);
}

bool Line::operator==(const Line& other)const{
    if(this->getInitialPoint() != other.getInitialPoint()){
        return false;
    }
    if(this->getID() != other.getID()){
        return false;
    }
    if(this->getPen() != other.getPen()){
        return false;
    }
    if(this->getBrush() != other.getBrush()){
        return false;
    }
    if(this->getShape() != other.getShape()){
        return false;
    }
    if(this->endPoint != other.endPoint){
        return false;
    }
}
