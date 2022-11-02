//!  A contact class.
/*!
  This is the class that supports our contact page.
*/

#ifndef CONTACT_H
#define CONTACT_H

#include <QDialog>

#include"Vector.h"

namespace Ui {
class Contact;
}
//! Contact Class.
/*!
      This is the Contact class.
*/
class Contact : public QDialog
{
    Q_OBJECT

public:
    //! A constructor.
    /*!
        This is an overload constructor.
        \param parent the passed argument
    */
    explicit Contact(QWidget *parent = nullptr);
    //! A destructor.
    /*!
        This is the destructor for the class.
    */
    ~Contact();

private slots:
    //! A normal member function.
    /*!
    */
    void on_pushButton_clicked();

private:
    Ui::Contact *ui;
};


#endif // CONTACT_H
