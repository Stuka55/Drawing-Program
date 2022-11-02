//!  A Rectangle class.
/*!
  This is the class where the Rectangle shape type is made.
*/

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle: public Shape
{
private:
	int length;
    	int width;
public:
    //! A constructor.    
    /*! Constructor could take up to 2 arguments
      \param device a QPaintDevice pointer argument
      \param id an integer argument
    */
    	Rectangle(QPaintDevice* device = nullptr, int id = -1) : Shape{device, id, ShapeType::rectangle}{}
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
      \param l an integer argument
      \param w an integer argument
    */	
    	Rectangle(int id, ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor, int width,
		Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle, Qt::PenJoinStyle pJoinStyle, int x, int y, int l, int w);
	//! A destructor.
    	~Rectangle() override{};
	 //! A member without any argument  
	 /*!      
	 	Function to draw the rectangle
	 */
	void draw() override;
	 //! A member without any argument  
	 /*!      
      	   \return The perimeter of the rectangle 	
	 */
    	float perimeter()const override;
	 //! A member without any argument  
	 /*!      
      	   \return The area of the rectangle 	
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
    	void shapeDimensions(const vector<int>& source)override;
	//! A member without argument to print the shape data
    	void print() override;
	//! A member taking 2 arguments to set the dimension of the shape
	 /*!      
      	   \param l an integer argument
      	   \param w an integer argument
      	 */
    	void setRect(int l, int w);
	//! A member without argument to get the length of the shape
	 /*!      
      	   \return The Length of the rectangle
      	 */
    	const int& getLength()const;
	//! A member without argument to get the width of the shape
	 /*!      
      	   \return The Width of the rectangle
      	 */
    	const int& getWidth()const;	
};

#endif
