#include"Polygon.h"
#include<math.h>

Polygon::Polygon(int id, ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor, int width,
	Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle, Qt::PenJoinStyle pJoinStyle, int x, int y)
	: Shape(id, sh, bColor, bStyle, pColor,width,pStyle,pCapStyle,pJoinStyle,x,y)
{
	pointCount = 0;
    	setShape(ShapeType::polygon);
}

void Polygon::draw()
{

    	getQPainter().setPen(getPen());
    	getQPainter().setBrush(getBrush());
        QVector<QPoint> polyPoints;
        for (int i = 0; i < points.size(); i++)
        {
            polyPoints << points[i];
        }
        getQPainter().drawPolygon(polyPoints);
}

float Polygon::perimeter()const
{
	float total = 0.0;
	QPoint distance(0,0);
    	int j = pointCount - 1;
	for (int i = 0; i < pointCount; i++)
	{
        // first iteration is first point - last point; every other iteration is next point - previous point
		distance = points[i] - points[j];
		total += sqrt(distance.x()*distance.x() + distance.y()*distance.y());
		j = i;
	}
	return total;
}

float Polygon::area()const
{
	// Initialze area 
   	 float area = 0.0; 
  
    	// Calculate value of shoelace formula 
    	int j = pointCount - 1; 
   	 for (int i = 0; i < pointCount; i++) 
   	 { 
        	area += (points[j].x() + points[i].x()) * (points[j].y() - points[i].y()); 
        	j = i;  // j is previous vertex to i 
   	 } 
	area = abs(area / 2.0);
	return area;
}

void Polygon::move(int x, int y)
{
    int distanceX = x - getInitialPoint().x();
    int distanceY = y - getInitialPoint().y();
    for (int i = 0; i < points.size(); i++)
    {
        points[i] += QPoint(distanceX,distanceY);
    }
}

void Polygon::shapeDimensions(const vector<int> &source)
{
   	Shape::shapeDimensions(source);
    	addPoint(getInitialPoint());
   	for(unsigned int i = 1; i < (source.size()/2); i++)
       		addPoint(QPoint(source[2*i], source[2*i+1]));
}

void Polygon::print(){
 	   cout << "Polygon:" << endl ;
 	   Shape::print();
           for(int i = 1; i < pointCount-1; i++){
                cout << "\tPoint " << i+1 << ": (" <<  points[i].x() << "," << points[i].y() << ")" << endl;
    }
}

int Polygon::getPointCount()const
{
	return pointCount;
}

void Polygon::addPoint(const QPoint& elem)
{
   	 //if there is no point yet => set initial point
   	 if (pointCount == 0)
      		 setInitialPoint(elem.x(),elem.y());

   	 points.push_back(elem);
   	 pointCount++;
}

const vector<QPoint>& Polygon::getPoints()const
{
    return points;
}
