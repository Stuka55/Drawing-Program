#include "editpoly.h"
#include "ui_editpoly.h"

EditPoly::EditPoly(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditPoly)
{
    ui->setupUi(this);
}

EditPoly::~EditPoly()
{
    delete ui;
}

void EditPoly::on_Add_clicked()
{
    pointVec.push_back(QPoint(ui->xVal->value(),ui->yVal->value()));
    ui->xVal->setValue(0);
    ui->yVal->setValue(0);
    this->exec();
}

void EditPoly::on_Done_clicked()
{
    close();
}

myStd::vector<QPoint>& EditPoly::getVec()
{
    return pointVec;
}
