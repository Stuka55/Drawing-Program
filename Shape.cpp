#include "Shape.h"

Shape::Shape(QPaintDevice* device, int id, ShapeType inputShape)
    :shapeID{id},shape{inputShape}
{
    if (device != nullptr)
        qpainter.begin(device);
}

Shape::Shape(int id, ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor,
    int width, Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle, Qt::PenJoinStyle pJoinStyle, int x, int y)
    : shapeID{id}, initialPoint{x,y}, shape{sh}
{
    pen = QPen(pColor, width, pStyle, pCapStyle, pJoinStyle);
    pen.setBrush(QBrush(bColor, bStyle));
}

Shape::~Shape(){}
//No pointed to data so no need to delete anything

void Shape::print()
{
    cout << "\tInitial Point: (" << initialPoint.x() << "," << initialPoint.y() << ")" << endl;
}

void Shape::shapeDimensions(const vector<int> &source)
{
    setInitialPoint(source[0],source[1]);
}

void Shape::setPen(Qt::GlobalColor color, int width, Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle,
        Qt::PenJoinStyle pJoinStyle)
{
    pen.setColor(color);
    pen.setWidth(width);
    pen.setStyle(pStyle);
    pen.setCapStyle(pCapStyle);
    pen.setJoinStyle(pJoinStyle);
}

void Shape::setBrush(Qt::GlobalColor color,Qt::BrushStyle bStyle)
{
    brush.setStyle(bStyle);
    brush.setColor(color);
}

void Shape::setInitialPoint(int x, int y)
{
    initialPoint.setX(x);
    initialPoint.setY(y);
}

void Shape::setShape(ShapeType source)
{
    shape = source;
}

const QPen& Shape::getPen()const
{
    return pen;
}

const QBrush& Shape::getBrush()const
{
    return brush;
}

void Shape::setPenColor(QColor color)
{
    pen.setColor(color);
}

void Shape::setPenWidth(int width)
{
    pen.setWidth(width);
}

void Shape::setPenStyle(Qt::PenStyle pStyle)
{
    pen.setStyle(pStyle);
}

void Shape::setPenCapStyle(Qt::PenCapStyle pCapStyle)
{
    pen.setCapStyle(pCapStyle);
}

void Shape::setPenJoinStyle(Qt::PenJoinStyle pJoinStyle)
{
    pen.setJoinStyle(pJoinStyle);
}

void Shape::setBrushColor(QColor color)
{
    brush.setColor(color);
}

void Shape::setBrushStyle(Qt::BrushStyle bStyle)
{
    brush.setStyle(bStyle);
}

ShapeType Shape::getShape()const
{
    return shape;
}

QPainter& Shape::getQPainter()
{
    return qpainter;
}

const QPoint& Shape::getInitialPoint()const
{
    return initialPoint;
}

void Shape::setID(int id)
{
    shapeID = id;
}

int Shape::getID()const
{
    return shapeID;
}
