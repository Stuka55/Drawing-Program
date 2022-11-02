//!  A WriteFile class.
/*!
  This is the class where the WriteFile is made. It writes to the .txt files.
*/

#ifndef WRITEFILE_H_
#define WRITEFILE_H_

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
//! WriteFile Class.
/*!
      This is the WriteFile class.
*/
class WriteFile
{
public:
    //! A constructor.
    /*!
        This is a default constructor.
    */   
    /*! Constructor takes no arguments */
	WriteFile();
	
    //! A normal member function taking two arguments.    
    /*! 
   	 \param shapesFile the first argument
   	 \param vShape the second argument       
    */	
    void write(string shapesFile, const myStd::vector<Shape*>& vShape);
};


#endif

