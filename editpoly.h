//!  A EditPoly class.
/*!
  This is the class where the edits to polys are made.
*/

#ifndef EDITPOLY_H
#define EDITPOLY_H

#include <QDialog>
#include"Vector.h"
#include<QPoint>

namespace Ui {
class EditPoly;
}
//! EditPoly Class.
/*!
      This is the EditPoly class.
*/
class EditPoly : public QDialog
{
    Q_OBJECT

public:
    //! A constructor.
    /*!
        This is an overload constructor.
        \param parent the passed argument
    */
    explicit EditPoly(QWidget *parent = nullptr);
    //! A destructor.
    /*!
        This is the destructor for the class.
    */
    ~EditPoly();
    //! A normal member function.
    /*!
      \return A vector of QPoints
    */
    myStd::vector<QPoint>& getVec();

private slots:
    //! A normal member function.
    /*!
    */
    void on_Add_clicked();
    //! A normal member function.
    /*!
    */
    void on_Done_clicked();

private:
    Ui::EditPoly *ui;
    //! A normal, private member function.
    /*!
      \return A vector of QPoints
    */
    myStd::vector<QPoint> pointVec = myStd::vector<QPoint>();
};

#endif // EDITPOLY_H
