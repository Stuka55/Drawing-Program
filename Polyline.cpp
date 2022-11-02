#include "Polyline.h"

Polyline::Polyline(int id, ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor, int width,
  Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle, Qt::PenJoinStyle pJoinStyle, int x, int y)
  : Shape(id, sh, bColor, bStyle, pColor, width, pStyle, pCapStyle, pJoinStyle, x, y)
{
  pointCount = 0;
  setShape(ShapeType::polyline);
}

void Polyline::draw()
{
    getQPainter().setPen(getPen());
    getQPainter().setBrush(getBrush());
    //(getQPainter()).drawPolyline(points, pointCount);
    QVector<QPoint> polyPoints;
    for (int i = 0; i < points.size(); i++)
    {
        polyPoints << points[i];
    }
    getQPainter().drawPolyline(polyPoints);
}

float Polyline::perimeter()const
{
  float perimeter = 0;
  float pseudoPerimeter = 0;
  int xCord1; 
  int xCord2;
  int yCord1;
  int yCord2;
  
  for (unsigned int i = 0; i < points.size() - 1; i++)
  {
   xCord1 = points[i].x();
   yCord1 = points[i].y();
   xCord2 = points[i+1].x();
   yCord2 = points[i+1].y();
   pseudoPerimeter = ((xCord2 - xCord1) * (xCord2 - xCord1)) + ((yCord2 - yCord1) * (yCord2 - yCord1));
   perimeter += sqrt(pseudoPerimeter);
  }
  
  return perimeter;
 }

float Polyline::area()const
{
  return 0.0;
}

void Polyline::move(int x, int y)
{
    int distanceX = x - getInitialPoint().x();
    int distanceY = y - getInitialPoint().y();
    for (int i = 0; i < points.size(); i++)
    {
        points[i] += QPoint(distanceX,distanceY);
    }
}

void Polyline::shapeDimensions(const vector<int> &source)
{
    Shape::shapeDimensions(source);
    addPoint(getInitialPoint());
    pointCount++;
    for(unsigned int i = 1; i < (source.size()/2); i++)
        addPoint(QPoint(source[2*i], source[2*i+1]));
}

void Polyline::print(){
    cout << "Polyline:" << endl;
    Shape::print();
            for(int i = 1; i < pointCount-1; i++){
                cout << "\tPoint " << i+1 << ": (" <<  points[i].x() << "," << points[i].y() << ")" << endl;
    }
}

const int& Polyline::getPointCount()const
{
  return pointCount;
}

void Polyline::addPoint(const QPoint& elem)
{
    //if there is no point yet => set initial point
    if (pointCount == 0)
        setInitialPoint(elem.x(),elem.y());

    points.push_back(elem);
    pointCount++;
}

const vector<QPoint>& Polyline::getPoints()const
{
    return points;
}
