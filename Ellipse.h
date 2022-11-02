//!  A Ellipse class.
/*!
  This is the class where the Ellipse shape type is made.
*/

#ifndef ELLIPSE_H_
#define ELLIPSE_H_

#include"Shape.h"

class Ellipse: public Shape
{
private:
	int semiMajorAxis;
	int semiMinorAxis;
public:
    //! A constructor.    
    /*! Constructor could take up to 2 arguments
      \param device a QPaintDevice pointer argument
      \param id an integer argument
    */
	Ellipse(QPaintDevice* device = nullptr, int id = -1) : Shape{device, id, ShapeType::ellipse} {}
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
      \param major an integer argument
      \param minor an integer argument
    */		
        Ellipse(int id, ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor, int width,
	Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle, Qt::PenJoinStyle pJoinStyle, int x, int y,int major, int minor);
	//! A destructor.	
	~Ellipse() override{};
	 //! A member without any argument  
	 /*!      
	 	Function to draw the ellipse
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
      	   \return The perimeter of the ellipse 	
	 */
    	float perimeter()const override;
	 //! A member without any argument  
	 /*!      
      	   \return The area of the ellipse 	
	 */
    	float area()const override;
	//! A member taking 2 arguments to set the axises of the shape
	 /*!      
      	   \param major an integer argument
      	   \param major an integer argument
      	 */
	void setAxises(int major, int minor);
	//! A member without argument to get the major axis of the shape
	 /*!      
      	   \return The major axis of the ellipse
      	 */
    	const int& getMajorAxis()const;
	//! A member without argument to get the minor axis of the shape
	 /*!      
      	   \return The minor axis of the ellipse
      	 */
   	const int& getMinorAxis()const;
	 //! A member taking 1 argument to load the dimensions of the shape
	 /*!      
      	   \param source a const vector<int> reference argument
      	 */
	void shapeDimensions(const vector<int>& source)override;
	//! A member without argument to print the shape data
	void print() override;
};

#endif
