//!  A Line class.
/*!
  This is the class where the Line shape type is made.
*/

#ifndef LINE_H_
#define LINE_H_

#include "Shape.h"

class Line: public Shape
{
private:
    QPoint endPoint;
public:
    //! A constructor.    
    /*! Constructor could take up to 2 arguments
      \param device a QPaintDevice pointer argument
      \param id an integer argument
    */
    Line(QPaintDevice* device = nullptr, int id = -1): Shape{device, id, ShapeType::line}{}
    //! An alternative constructor.    
    /*! Constructor that takes 13 arguments
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
      \param x2 an integer argument
      \param y2 an integer argument
    */	
    Line(int id, ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor, int width,
        Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle, Qt::PenJoinStyle pJoinStyle, int x, int y, int x2, int y2);
	//! A destructor.
    ~Line()override{};
	 //! A member without any argument  
	 /*!      
	 	Function to draw the line
	 */
    void draw() override;
	 //! A member taking 2 integer arguments to move the shape
	 /*!      
      \param x an integer argument.
	    \param y an integer argument.
     */
    void move(int x, int y) override;
	 //! A member without any argument  
	 /*!      
     \return The perimeter of the line 	
	 */
    float perimeter()const override;
	 //! A member without any argument  
	 /*!      
      	   \return The area of the line 	
	 */
    float area()const override;
	 //! A member taking 1 argument to load the dimensions of the shape
	 /*!      
      \param source a const vector<int> reference argument
    */
    void shapeDimensions(const vector<int>& source)override;
	//! A member without argument to print the shape data
    void print() override;
	//! A member taking 2 arguments to set the end point of the shape
	 /*!      
      \param x an integer argument
      \param y an integer argument
    */
    void setEndPoint(int x, int y);
	//! A member without argument to get the endpoint of the shape
	 /*!      
     \return The endpoint of the line
    */
    const QPoint& getEndPoint(){return endPoint;}
  	//! An overloaded operator taking 1 Line argument to compare two lines
	 /*!      
     \param other a const Line reference argument
     \return whether the two lines are equal
    */  
    bool operator==(const Line& other)const;
};

#endif
