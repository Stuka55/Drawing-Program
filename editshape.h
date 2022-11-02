//!  A editshape class.
/*!
  This is the class where the edits to shapes are made.
*/

#ifndef EDITSHAPE_H
#define EDITSHAPE_H

#include <QDialog>
#include"Shape.h"
#include "Line.h"
#include "Polyline.h"
#include "Polygon.h"
#include "Rectangle.h"
#include "Square.h"
#include "Ellipse.h"
#include "Circle.h"
#include "Text.h"
#include"editpoly.h"
#include"edittext.h"

namespace Ui {
class editshape;
}
//! editshape Class.
/*!
      This is the editshape class.
*/
class editshape : public QDialog
{
    Q_OBJECT

public:
    //! A constructor.
    /*!
        This is an overload constructor.
        \param parent the passed argument
    */
    explicit editshape(QWidget *parent = nullptr);
    //! A destructor.
    /*!
        This is the destructor for the class.
    */
    ~editshape();
    //! A normal member function.
    /*!
      \param shapeEnum the first argument
    */
    void setShape(ShapeType shapeEnum);
    //! A normal member function.
    /*!
      \param source the first argument
    */
    void loadShape(myStd::vector<Shape*>& source);

private slots:
    //! A normal, private member function.
    /*!
      \param index the first argument
    */
    void on_shape_activated(int index);
    //! A normal, private member function.
    /*!
    */
    void on_buttonBox_accepted();

private:
    Ui::editshape *ui;
    myStd::vector<Shape*>* pEditVec;
    EditPoly* polyScreen;
    EditText* textScreen;
};

#endif // EDITSHAPE_H
