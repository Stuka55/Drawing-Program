#include "contact.h"
#include "ui_contact.h"
#include <QPixmap>

Contact::Contact(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Contact)
{
    ui->setupUi(this);
    QPixmap logo("logo.png");
    ui->logo->setPixmap(logo.scaled(141, 141, Qt::KeepAspectRatio));
}

Contact::~Contact()
{
    delete ui;
}

void Contact::on_pushButton_clicked()
{
    close();
}
