//!  A edittext class.
/*!
  This is the class where the edits to text are made.
*/

#ifndef EDITTEXT_H
#define EDITTEXT_H

#include <QDialog>
#include"Shape.h"

namespace Ui {
class EditText;
}
struct textData
{
    QString textString = "";
    Qt::GlobalColor textColor;
    Qt::AlignmentFlag textFlag;
    int pointSize;
    QString textFamily;
    QFont::Style textFontStyle;
    QFont::Weight textFontWeight;

};

//! EditText Class.
/*!
      This is the EditText class.
*/
class EditText : public QDialog
{
    Q_OBJECT

public:
    //! A constructor.
    /*!
        This is an overload constructor.
    */
    explicit EditText(QWidget *parent = nullptr);
    //! A destructor.
    /*!
        This is the destructor for the class.
    */
    ~EditText();
    //! A normal, constant member function.
    /*!
      \return textData object
    */
    const textData& getTextData()const;

private slots:
    //! A normal, private member function.
    /*!
    */
    void on_buttonBox_accepted();

private:
    Ui::EditText *ui;
    textData editTextData;
};

#endif // EDITTEXT_H
