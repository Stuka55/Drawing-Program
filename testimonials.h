//!  A testimonials class.
/*!
  This is the class where that supports the testimonials.
*/

#ifndef TESTIMONIALS_H
#define TESTIMONIALS_H

#include <QWidget>

namespace Ui {
class Testimonials;
}
//! Testimonials Class.
/*!
      This is the Testimonials class.
*/
class Testimonials : public QWidget
{
    Q_OBJECT

public:
    //! An explicit function.
    /*!
      \param parent the pointer parent and sets equal to nullptr.
    */
    explicit Testimonials(QWidget *parent = nullptr);
    //! A destructor.
    /*!
      Deallocates memory for registration.
    */
    ~Testimonials();

private:
    //! A pointer.
    /*!
      A pointer name ui of Ui Testimonials.
    */
    Ui::Testimonials *ui;
};

#endif // TESTIMONIALS_H
