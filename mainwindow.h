//!  A mainwindow class.
/*!
  This is the class that supports our mainwindow.
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "registration.h"
#include "canvas.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
//! MainWindow Class.
/*!
      This is the MainWindow class.
*/
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //! A constructor.
    /*!
      \param parent is passed and set to nullptr.
    */
    MainWindow(QWidget *parent = nullptr);
    //! A destructor.
    /*!
      Deallocates memory..
    */
    ~MainWindow();
    //! A void function
    /*!
      Loads in shape
      \param reference Shape pointer of myStd vector
    */
    void loadShape(myStd::vector<Shape*>&);


private slots:
    //! A private member.    
    /*!      
      Interactive takes on button clicked.         
    */
    void on_pushButton_2_clicked();

    //! A private member.    
    /*!      
      Interactive takes on button clicked.         
    */
    void on_pushButton_login_clicked();


private:
    //! A function pointer variable.
    /*!
      Takes in from MainWindow from Ui.
    */
    Ui::MainWindow *ui;
    //! A function pointer variable.
    /*!
      Is of type registration.
    */
    registration *regist;
    //! A function vector pointer of shape pointer..
    /*!
      Takes in from vector from myStd
    */
    myStd::vector<Shape*> *windowShape;
    //! A pointer
    /*!
      A pointer of type vector (from myStd) of Shape pointer.
    */
};

#endif // MAINWINDOW_H
