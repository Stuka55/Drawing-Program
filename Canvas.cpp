#include "Canvas.h"
#include "ui_canvas.h"
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QSpinBox>

canvas::canvas(QWidget *parent) :
    QWidget(parent)
{
}

canvas::~canvas()
{
    //delete ui;
}
void canvas::loadShape(myStd::vector<Shape *> &source)
{
    canvasShape = &source;
}

void canvas::setSelected(int i)
{
    selected = i;
    update();

}
void canvas::paintEvent(QPaintEvent *)
{
    for (unsigned int i = 0; i < canvasShape->size(); i++)
    {
        canvasShape->operator[](i)->getQPainter().begin(this);
        canvasShape->operator[](i)->draw();
        canvasShape->operator[](i)->getQPainter().end();
    }
}

/*const myStd::vector<Shape*>& canvas::getShape()const
{
    return canvasShape;
}*/
