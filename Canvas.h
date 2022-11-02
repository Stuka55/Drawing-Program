

#ifndef CANVAS_H
#define CANVAS_H

#include <QMainWindow>
#include <QBrush>
#include <QPen>
#include "Vector.h"
#include "Shape.h"
#include "registration.h"

namespace Ui {
class canvas;
}

//!  A Canvas class.
/*!
  This is where the shapes are displayed.
*/
class canvas : public QWidget
{
    Q_OBJECT

public:
    //! A constructor.    
    /*! Constructor takes 1 argument or none */
    explicit canvas(QWidget *parent = nullptr);
    //! A destructor.    
    /*! Clear off the dynamically allocated memory on the heap */
    ~canvas();
    //! A normal member taking one argument.    
    /*!      
    \param v a vector<Shape*> reference argument.         
    */
    void loadShape(myStd::vector<Shape*>& v);
  //  const myStd::vector<Shape*>& getShape()const;
signals:

public slots:
    //! A normal member taking one argument.    
    /*!      
    \param i an integer argument.         
    */
    void setSelected(int i);

protected:
    //! A protected member taking one argument.    
    /*!      
    \param event QPaintEvent argument.         
    */
    void paintEvent(QPaintEvent *event) override;
private:
    myStd::vector<Shape*>* canvasShape;
    int selected;
    //Ui::canvas *ui;
};

#endif // CANVAS_H
