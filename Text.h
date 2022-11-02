//!  A Text class.
/*!
  This is the class where the Text type is made.
*/

#ifndef TEXT_H_
#define TEXT_H_

#include"Shape.h"
//! Text Class
/*!
      This is the Text class.
*/
class Text: public Shape
{
private:
	int length;	//bounding rectangle for text box
	int width;
    	QString string;
    	QColor color {Qt::blue};
    	Qt::AlignmentFlag align {Qt::AlignCenter};
    	int pointSize {12};
    	QString family {"Comic Sans MS"};
    	QFont::Style style {QFont::StyleNormal};
    	QFont::Weight weight {QFont::Normal};
public:

   	//! A constructor.
    	/*!
        This is the default constructor.
    	*/
   	 Text(QPaintDevice* device = nullptr, int id = -1) : Shape {device, id, ShapeType::text} {}
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
    	Text(int id, ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor, int width,
		Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle, Qt::PenJoinStyle pJoinStyle, int x, int y, int l, int w);
  	//! A destructor.
  	/*!
        This is the destructor for the class.
   	 */
    	~Text() override {};
   	//! A normal member function.
    	/*!
    	*/
	void draw() override;
	//! A normal, constant member function.
	/*!
	 	\return The perimeter
	*/
    	float perimeter()const override;
    	//! A normal, constant member function.
	/*!
	 	\return The area
	*/
    	float area()const override;
    	//! A normal member function.
	/*!
	 	\param x the first argument
		\param y the second argument
	*/
    	void move(int x,int y) override;
	//! A normal member function.
	/*!
	 	\param source this is the first argument
	*/
    	void shapeDimensions(const vector<int>& source) override;
	//! A normal member function.
	/*!
	*/
    	void print() override;
	//! A normal member function.
	/*!
	 	\param l this is the first argument
		\param x this is the second argument
	*/
    	void setRect(int l, int w);
	//! A normal member function.
	/*!
	 	\param source this is the first argument
	*/
    	void setAlignment(Qt::AlignmentFlag source);
	//! A normal member function.
	/*!
	 	\param source this is the first argument
	*/
    	void setString(const QString& source);
	//! A normal member function.
	/*!
	 	\param source this is the first argument
	*/
    	void setColor(QColor source);
	//! A normal member function.
	/*!
	 	\param source this is the first argument
	*/
    	void setFamily(const QString& source);
	//! A normal member function.
	/*!
	 	\param size this is the first argument
	*/
    	void setPointSize(const int& size);
	//! A normal member function.
	/*!
	 	\param source this is the first argument
	*/
    	void setStyle(QFont::Style source);
	//! A normal member function.
	/*!
	 	\param source this is the first argument
	*/
    	void setWeight(QFont::Weight source);
	//! A normal, constant member function.
	/*!
	 	\return Returns the length
	*/
        int getLength()const;
	//! A normal, constant member function.
	/*!
	 	\return Returns the width
	*/
        int getWidth()const;
	//! A normal, constant member function.
	/*!
	 	\return Returns the alignment
	*/
        Qt::AlignmentFlag getAlignment()const;
	//! A normal, constant member function.
	/*!
	 	\return Returns a QString
	*/
        QString getString()const;
	//! A normal, constant member function.
	/*!
	 	\return Returns a QColor
	*/
        QColor getColor()const;
	//! A normal, constant member function.
	/*!
	 	\return Returns a QString
	*/
        QString getFamily()const;
	//! A normal, constant member function.
	/*!
	 	\return Returns the point size
	*/
        int getPointSize()const;
	//! A normal, constant member function.
	/*!
	 	\return Returns the style
	*/
        QFont::Style getStyle()const;
	//! A normal, constant member function.
	/*!
	 	\return Returns the weight
	*/
        QFont::Weight getWeight()const;
};

#endif
