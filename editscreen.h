//!  A editscreen class.
/*!
  This is the class where the edits to our screen are made.
*/

#ifndef EDITSCREEN_H
#define EDITSCREEN_H

#include <QDialog>

namespace Ui {
class EditScreen;
}
//! EditScreen Class.
/*!
      This is the EditScreen class.
*/
class EditScreen : public QDialog
{
    Q_OBJECT

public:
    //! A constructor.
    /*!
        This is an overload constructor.
        \param parent the passed argument
    */
    explicit EditScreen(QWidget *parent = nullptr);
    //! A destructor.
    /*!
        This is the destructor for the class.
    */
    ~EditScreen();
    //! A normal member function.
    /*!
      \return The click status
    */
    bool getClicked();
    //! A normal, constant member function.
    /*!
      \return The X value as a QString
    */
    QString getX()const;
    //! A normal, constant member function.
    /*!
      \return The Y value as a QString
    */
    QString getY()const;
    //! A normal member function.
    /*!
    */
    void setClicked();
public slots:
    //! A normal member function.
    /*!
    */
    void on_saveButton_clicked();


private slots:
    //! A normal, private member function.
    /*!
    */
    void on_cancelButton_clicked();
    //! A normal, private member function.
    /*!
      \param arg1 the first argument
    */
    void on_xLine_textEdited(const QString &arg1);
    //! A normal, private member function.
    /*!
      \param arg2 the first argument
    */
    void on_yLine_textEdited(const QString &arg1);



private:
    Ui::EditScreen *ui;
    QString xString;
    QString yString;
    bool buttonClicked = false;
};

#endif // EDITSCREEN_H
