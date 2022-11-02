//!  A Circle class.
/*!
  This is the class where the Circle shape type is made.
*/

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include"Shape.h"

class Circle: public Shape
{
private:
	int radius;
public:
    //! A constructor.    
    /*! Constructor could take up to 2 arguments
      \param device a QPaintDevice pointer argument
      \param id an integer argument
    */
	Circle(QPaintDevice* device = nullptr, int id = -1) : Shape{device, id, ShapeType::circle}{}
    //! An alternative constructor.    
    /*! Constructor that takes 12 arguments
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
      \param radiusIn an integer argument
    */	
	Circle(int id, ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor, int width,
		Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle, Qt::PenJoinStyle pJoinStyle, int x, int y, int radiusIn);
	//! A destructor.
	~Circle() override{};
	
	 //! A member without any argument  
	 /*!      
	 	Function to draw the circle
	 */
	void draw() override;
	 //! A member without any argument  
	 /*!      
      	   \return The perimeter of the circle 	
	 */
    	float perimeter()const override;
	 //! A member without any argument  
	 /*!      
      	   \return The area of the circle 	
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
  	void shapeDimensions(const vector<int> &source)override;
	//! A member taking 1 argument to set the radius of the shape
	 /*!      
      	   \param r an integer argument
      	 */
   	void setRadius(int r);
	//! A member without argument to print the shape data
   	void print() override;
	//! A member without argument to get the radius of the shape
	 /*!      
      	   \return The radius of the circle
      	 */
    	int  getRadius()const;

};

#endif
