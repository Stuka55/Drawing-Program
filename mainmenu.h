//!  A mainmenu class.
/*!
  This is the class where the edits to the main menu are made.
*/

#ifndef mainmenu_H
#define mainmenu_H

#include <QMainWindow>
#include <QBrush>
#include <QPen>
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
#include "registration.h"
#include <QTreeWidget>
#include "editscreen.h"
#include "editshape.h"
#include "edittext.h"
#include "contact.h"
#include "testimonials.h"

namespace Ui {
class mainmenu;
}
//! mainmenu Class.
/*!
      This is the mainmenu class.
*/
class mainmenu : public QMainWindow
{
    Q_OBJECT
public:
    explicit mainmenu(QWidget *parent = nullptr);
    ~mainmenu();
    void loadShape(myStd::vector<Shape*>&source);
    void loadPropertyBar(myStd::vector<Shape*>&source);
    void loadTreeWidget(myStd::vector<Shape*>&source, int id);
    bool isEditable(int column);
    //void keyPressEvent(QKeyEvent* keyEvent);
    void RemoveShape();
    void EditShape(const QString& x, const QString& y);
    void visitorView();

signals:

public slots:
//! A slots public void member.
/*!
  \param an integer
*/
    void setSelected(int i);

private slots:
    //! A void private slots function
    /*!
      Interactive for clicking on lines.
    */
    void on_Line_clicked();
    //! A void private slots function
    /*!
      Interactive for clicking on polylines.
    */
    void on_Polyline_clicked();
//! A void private slots function
    /*!
      Interactive for clicking on polygons.
    */
    void on_Polygon_clicked();
    //! A void private slots function
    /*!
      Interactive for clicking on rectangles.
    */
    void on_Rect_clicked();
    //! A void private slots function
    /*!
      Interactive for clicking on squares.
    */
    void on_Square_clicked();
    //! A void private slots function
    /*!
      Interactive for clicking on ellipses.
    */
    void on_Ellipse_clicked();
    //! A void private slots function
    /*!
      Interactive for clicking on circles.
    */
    void on_Circle_clicked();
    //! A void private slots function
    /*!
      Interactive for clicking on test.
    */
    void on_Text_clicked();
    //! A void private slots function
    /*!
      Interactive for clicking on the contact button.
    */
    void on_contactButton_clicked();
    //! A void private slots function
    /*!
      Interactive for clicking on move.
    */
    void on_Move_clicked();
    //! A void private slots function
    /*!
      Interactive for clicking on remove.
    */
    void on_Remove_clicked();
    //! A void private slots function
    /*!
      Interactive for comboBox being activated.
    */
    void on_comboBox_activated(int index);
    //! A void private slots function
    /*!
      Interactive for treeWidget being activated.
    */
    void on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);
    //! A void private slots function
    /*!
      Interactive for actionNew being activated.
    */
    void on_actionNew_triggered();
    //! A void private slots function
    /*!
      Interactive for testimonials being activated.
    */
    void on_Testimonials_clicked();

private:
    //! A private integer.
    /*!
      For selected.
    */
    int selected;
    //! A private pointer.
    /*!
      A private pointer of vector of Shape pointer type from myStd.
    */
    myStd::vector<Shape*> *menuShape;
    //! A private pointer.
    /*!
      A private pointer of EditScreen type.
    */
    EditScreen* pEdit;
    //! A private pointer.
    /*!
      A private pointer of mainmenu from Ui type.
    */
    Ui::mainmenu *ui;
    //! A private pointer.
    /*!
      A private pointer of editshape type.
    */
    editshape *pEditShape;
    //! A private pointer.
    /*!
      A private pointer of EditText type.
    */
    EditText *pEditText;
    //! A private pointer.
    /*!
      A private pointer of Testimonials type.
    */
    Testimonials *pTestimonial;
    //! A private pointer.
    /*!
      A private pointer of Contact type.
    */
    Contact * pContact;
};

#endif // mainmenu_H
