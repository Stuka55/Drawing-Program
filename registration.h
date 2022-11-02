//!  A Registration class.
/*!
  This is the class that supports the Register window.
*/

#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QDialog>

namespace Ui {
class Canvas;
class registration;
};

class registration : public QDialog
{
    Q_OBJECT

public:
    //! A explicit function/construction member.
    /*!
      Takes in a Qwidget pointer called parent and sets it to nullptr.
      \param parent is the passed argument and set to nullptr
    */
    explicit registration(QWidget *parent = nullptr);
    //! A destructor.
    /*!
      Deallocates memory for registration.
    */
    ~registration();

private:
    //! A private pointer.
    /*!
      Makes a pointer called ui passed in from Ui registration.
    */
    Ui::registration *ui;
};

#endif // REGISTRATION_H
