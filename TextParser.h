//!  A TextParser class.
/*!
  This is the class where the shapes.txt file is parsed.
*/

#ifndef TEXTPARSER_H
#define TEXTPARSER_H

#include <QApplication>
#include <QCoreApplication>
#include <fstream>
#include "Vector.h"
#include "Shape.h"
#include "Line.h"

#include "Polyline.h"
#include "Polygon.h"
#include "Rectangle.h"
#include "Square.h"
#include "Ellipse.h"
#include "Circle.h"
#include "Text.h"

enum shapeAttributes{ShapeId, ShapeType, ShapeDimensions, PenColor, PenWidth, PenStyle, PenCapStyle, PenJoinStyle, BrushColor, BrushStyle,
            /* Beginning of text attributes*/ TextString, TextColor, TextAlignment, TextPointSize, TextFontFamily, TextFontStyle, TextFontWeight};
//Strings of all the attributes available to all the shapes
string attributes[] = {"ShapeId: ", "ShapeType: ", "ShapeDimensions: ", "PenColor: ", "PenWidth: ", "PenStyle: ", "PenCapStyle: ", "PenJoinStyle: ", "BrushColor: ", "BrushStyle: ",
        /* Beginning of text attributes*/ "TextString: ", "TextColor: ", "TextAlignment: ", "TextPointSize: ", "TextFontFamily: ", "TextFontStyle: ", "TextFontWeight: "};
string penStyle[] = {"NoPen", "SolidLine", "DashLine", "DotLine", "DashDotLine", "DashDotDotLine"}; // [Qt::PenStyle enum]
string penCapStyle[] = {"FlatCap", "SquareCap", "RoundCap"};  //  [Qt::PenCapStyle enum]
string penJoinStyle[] = {"MiterJoin", "BevelJoin", "RoundJoin"}; // [Qt::PenJoinStyle enum]
string brushStyle[] = {"SolidPattern", "HorPattern", "VerPattern", "NoBrush"};  //[Qt::BrushStyle enum]
string textAlignment[] = {"AlignLeft", "AlignRight", "AlignTop", "AlignBottom", "AlignCenter"};  //  [Qt::AlignmentFlag enum]
string textFontStyle[] = {"StyleNormal", "StyleItalic", "StyleOblique"};  //  [QFont::Style enum]
string textFontWeight[] = {"Thin", "Light", "Normal", "Bold"};
string types[] = {"NoShape", "Line", "Polyline", "Polygon", "Rectangle", "Square", "Ellipse", "Circle", "Text"};



//! TextParser Class.
/*!
      This is the TextParser class.
*/
class TextParser{
public:
    //! A constructor.
    /*!
        This is a default constructor.
    */
    TextParser();

    //! A normal member function.
    /*!
      \return The shapes stored in shapes.txt as a vector of Shape pointers
      \param shapesFile The text file to parse for shape objects
    */
    myStd::vector<Shape *> parse(string shapesFile);

private:
    int id;
    Shape * currentShape;

};

#endif // TEXTPARSER_H
