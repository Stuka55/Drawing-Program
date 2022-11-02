#ifndef SHAPE_H_
#define SHAPE_H_

#include<iostream>
#include<string>
#include<algorithm>
#include "Vector.h"
#include<ctime>
#include<cstdlib>
#include<QPainter>
#include<math.h>

using namespace std;

// The Following are listed as [Qt::---- enums]
// i have made them global enums here for testing use as i was unsure how to
// implement the Qt:: enums at the molment.

//! An enum.
/*! More detailed enum description.
*/
//Pen, Brush, and Shape Colors
enum color {white, /*!< Enum value white. */black, /*!< Enum value black. */red, /*!< Enum value red. */green,
            /*!< Enum value green. */blue, /*!< Enum value blue. */cyan, /*!< Enum value cyan. */magenta,
            /*!< Enum value magenta. */yellow, /*!< Enum value yellow. */gray/*!< Enum value gray. */};  // [Qt::GlobalColor enum]
enum penstyle{NoPen, /*!< Enum value NoPen. */SolidLine, /*!< Enum value SolidLine. */DashLine, /*!< Enum value DashLine. */DotLine,
              /*!< Enum value DotLine. */DashDotLine, /*!< Enum value DashDotLine. */DashDotDotLine/*!< Enum value DashDotDotLine. */}; // [Qt::PenStyle enum]
enum pencapstyle {FlatCap, /*!< Enum value FlatCap. */SquareCap, /*!< Enum value SquareCap. */RoundCap/*!< Enum value RoundCap. */};  //  [Qt::PenCapStyle enum]
enum penjoinstyle {MiterJoin, /*!< Enum value MiterJoin. */BevelJoin, /*!< Enum value BevelJoin. */RoundJoin/*!< Enum value RoundJoin. */}; // [Qt::PenJoinStyle enum]
enum brushstyle {SolidPattern, /*!< Enum value SolidPattern. */HorPattern, /*!< Enum value HorPattern. */VerPattern, /*!< Enum value VerPattern. */NoBrush/*!< Enum value NoBrush. */};  //[Qt::BrushStyle enum]
enum textalignment {AlignLeft, /*!< Enum value AlignLeft. */AlignRight, /*!< Enum value AlignRight. */AlignTop,
                    /*!< Enum value AlignTop. */AlignBottom, /*!< Enum value AlignBottom. */AlignCenter/*!< Enum value AlignCenter. */};  //  [Qt::AlignmentFlag enum]
enum textfontstyle {StyleNormal, /*!< Enum value StyleNormal. */StyleItalic, /*!< Enum value StyleItalic. */StyleOblique/*!< Enum value StyleOblique. */};  //  [QFont::Style enum]
enum textfontweight{Thin,/*!< Enum value Thin. */Light,/*!< Enum value Light. */Normal,
                    /*!< Enum value Normal. */Bold/*!< Enum value Bold. */};
enum ShapeType {noShape, /*!< Enum value noShape. */line, /*!< Enum value line. */polyline, /*!< Enum value polyline. */polygon,
                /*!< Enum value polygon. */rectangle, /*!< Enum value rectangle. */square, /*!< Enum value square. */ellipse,
                /*!< Enum value ellipse. */circle, /*!< Enum value circle. */text/*!< Enum value text. */}; // enum for expression of shapeType as a string

//! Shape Class.
/*!
      This is the Shape class.
*/
class Shape
{

private:
    //! A private variable.
    /*!
        Stores the shape ID.
    */
    int shapeID;  		// Note Unique required possible need to adapt to template to apply Unique algorithm.
    //! A private variable.
    /*!
        Stores the initial points
    */
    QPoint initialPoint; // x & y variable for shape 1st point
    //! A private variable.
    /*!
        Stores the pen
    */
    QPen pen;
    //! A private variable.
    /*!
        Stores the brush
    */
    QBrush brush;
    //! A private variable.
    /*!
        Stores the type of shape
    */
    enum ShapeType shape;
    //! A private variable.
    /*!
        Stores the QPainter
    */
    QPainter qpainter;


public:
    //Default constructor.
    //! A constructor.
    /*!
        This is the default constructor..
    */
    Shape(QPaintDevice* device = nullptr, int id = -1, enum ShapeType inputShape = ShapeType::noShape);
         
    // Overload constructor.
    // shapeID, ShapeType, brushColor, brushStyle, pencolor, penWidth,
    // PenStyle, PenCapStyle, PenJoinStyle
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
    */	
    Shape(int shapeID, enum ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor,
          int width, Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle, Qt::PenJoinStyle pJoinStyle, int x, int y);

    // Copy constructor.
    //! A constructor.
    /*!
        This is a copy constructor.
        \param otherShape the passed Shape to be copied
    */
   Shape(const Shape& otherShape)=delete;

   //Destructor.
    //! A Destructor.
    /*!
        This is the destructor.
    */
    virtual ~Shape();

    // Pure Virtual Functions
    //! A pure virtual function
    /*!
    */
    virtual void draw() = 0;
    //! A pure virtual function
    /*!
        \param x the first argument
        \param y the second argument
    /*!
    */
    virtual void move(int x, int y) = 0;
    //! A constant pure virtual function
    /*!
    */
    virtual float perimeter()const = 0;
    //! A constant pure virtual function
    /*!
        \return The perimeter
    */
    virtual float area()const = 0;
    
    // Virtual Functions
    // Virtual functions declared in Shapes but not implemented.
    // Declared to be used in inherited classes
    //! A virtual function
    /*!
        \return The area
    */
    virtual void print();
    //! A virtual function
    /*!
        \param source the first argument
    */
    virtual void shapeDimensions(const vector<int>& source);
     //! A normal member function.
    /*!
        \param color the first argument
        \param width the second argument
        \param pStyle the third argument
        \param pCapStyle the fourth argument
        \param pJoinStyle the fifth argument
    */
    void setPen(Qt::GlobalColor color, int width, Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle,
                Qt::PenJoinStyle pJoinStyle); 
    //! A normal member function.
    /*!
        \param color the first argument
        \param bStyle the second argument
    */
    void setBrush(Qt::GlobalColor color,Qt::BrushStyle bStyle);
    //! A normal member function.
    /*!
        \param x the first argument
        \param y the second argument
    */
    void setInitialPoint(int x, int y);
    //! A normal member function.
    /*!
        \param source the first argument
    */
    void setShape(enum ShapeType source);
    //! A normal, constant member function.
    /*!
        \return The QPen
    */
    const QPen& getPen()const;
    //! A normal, constant member function.
    /*!
        \return The QBrush
    */
    const QBrush& getBrush()const;
    //! A normal member function.
    /*!
        \param color the first argument
    */
    void setPenColor(QColor color);
    //! A normal member function.
    /*!
        \param width the first argument
    */
    void setPenWidth(int width);
    //! A normal member function.
    /*!
        \param pStyle the first argument
    */
    void setPenStyle(Qt::PenStyle pStyle);
    //! A normal member function.
    /*!
        \param pCapStyle the first argument
    */
    void setPenCapStyle(Qt::PenCapStyle pCapStyle);
    //! A normal member function.
    /*!
        \param pJoinStyle the first argument
    */
    void setPenJoinStyle(Qt::PenJoinStyle pJoinStyle);
    //! A normal member function.
    /*!
        \param color the first argument
    */
    void setBrushColor(QColor color);
    //! A normal member function.
    /*!
        \param bStyle the first argument
    */
    void setBrushStyle(Qt::BrushStyle bStyle);
    //! A normal, constant member function.
    /*!
        \return The type of shape
    */
    ShapeType getShape()const;
    //! A normal member function.
    /*!
        \return The QPainter
    */
    QPainter& getQPainter();
    //! A normal, constant member function.
    /*!
        \return The QPoint
    */
    const QPoint& getInitialPoint()const;
    //! A normal member function.
    /*!
        \param id the first argument
    */
    void setID(int id);
    //! A normal, constant member function.
    /*!
        \return The Shape ID
    */
    int getID()const;
    
};

struct Cmp_by_id
{
    bool operator()(const Shape* s1, const Shape* s2) const
    {  return s1->getID() < s2->getID(); } // dereference pointer, compare ids
};

struct Cmp_by_perimeter
{
    bool operator()(const Shape* s1, const Shape* s2) const
    {  return s1->perimeter() < s2->perimeter(); }
};

struct Cmp_by_area
{
    bool operator()(const Shape* s1, const Shape* s2) const
    {  return s1->area() < s2->area(); }
};

template <class InputIterator,class Predicate>
void selectionSort(InputIterator first, InputIterator last, Predicate pred)
{
        InputIterator smallestValueIterator; // input iterator == shape**
        InputIterator parser;

        while(first!=(last - 1))
        {
            smallestValueIterator = first;

            for (parser = first + 1; parser != last; parser++)
            {
                if (pred(*parser,*smallestValueIterator))
                {
                    smallestValueIterator = parser;
                }
            }

            std::iter_swap(smallestValueIterator,first);
            first++;
        }
}

#endif // SHAPE_H
