//!  A Polyline class.
/*!
  This is the class where the Polyline shape type is made.
*/

#ifndef POLYLINE_H_
#define POLYLINE_H_

#include "Shape.h"

class Polyline: public Shape
{
private:
	int pointCount = 0;
	vector<QPoint> points;
public:
    //! A constructor.    
    /*! Constructor could take up to 2 arguments
      \param device a QPaintDevice pointer argument
      \param id an integer argument
    */
    Polyline(QPaintDevice* device = nullptr, int id = -1) : Shape{device, id, ShapeType::polyline}{pointCount = 0;}
    //! An alternative constructor.    
    /*! Constructor that takes 11 arguments
      \param id an integer argument
      \param sh a shapeType argument
      \param bColor a Qt::GlobalColor argument
      \param bStyle a Qt::BrushStyle argument
      \param pColor a Qt::GlobalColor argument
      \param width a int argument
      \param pStyle a Qt::PenStyle argument
      \param pCapStyle a Qt::PenCapStyle argument
      \param pJoinStyle a Qt::PenJoinStyle argument
      \param x an integer argument
      \param y an integer argument
    */	
    	Polyline(int id, ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor, int width,
		Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle, Qt::PenJoinStyle pJoinStyle, int x, int y);
	//! A destructor.	
	~Polyline() override {};	
	 //! A member without any argument  
	 /*!      
	 	Function to draw the polyline
	 */
	void draw() override;
	 //! A member without any argument  
	 /*!      
      	   \return The perimeter of the polyline 	
	 */
    	float perimeter()const override;
	 //! A member without any argument  
	 /*!      
      	   \return The area of the polyline 	
	 */
    	float area()const override;
	 //! A member taking 2 integer arguments to move the shape
	 /*!      
      	   \param x an integer argument.
	   \param y an integer argument.
      	 */
    	void move(int x, int y) override;
	 //! A member taking 1 argument to load the dimensions of the shape
	 /*!      
      	   \param source a const vector<int> reference argument
    	  */
    	void shapeDimensions(const vector<int>& source) override;
	//! A member without argument to print the shape data
    	void print() override;
	//! A member without argument to get the endpoint of the shape
	 /*!      
    	   \return The number of points of the polyline
    	 */
	const int& getPointCount()const;
	//! A member taking 1 argument to add points to the shape
	 /*!      
      	   \param elem a const QPoint reference argument
    	 */
	void addPoint(const QPoint& elem);
	//! A member without argument to get the vector<QPoint> of the shape
	 /*!      
     	   \return The vector<QPoint> of the polyline
          */
    	const vector<QPoint>& getPoints()const;
};

#endif
