#include "editscreen.h"
#include "mainmenu.h"
#include "ui_editscreen.h"

EditScreen::EditScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditScreen)
{
    ui->setupUi(this);
}

EditScreen::~EditScreen()
{
    delete ui;
}



void EditScreen::on_xLine_textEdited(const QString &arg1)
{

}

void EditScreen::on_yLine_textEdited(const QString &arg1)
{

}

void EditScreen::on_saveButton_clicked()
{
    xString = ui->xLine->text();
    yString = ui->yLine->text();
    buttonClicked = true;
    close();
}

void EditScreen::on_cancelButton_clicked()
{
    close();
}

bool EditScreen::getClicked()
{
    return buttonClicked;
}

void EditScreen::setClicked()
{
    buttonClicked = false;
}

QString EditScreen::getX()const
{
    return xString;
}

QString EditScreen::getY()const
{
    return yString;
}
