#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registration.h"
#include "mainmenu.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui-> lineEdit_username->text();
    QString password = ui-> lineEdit_password->text();

    if(username=="test" && password =="test")
    {
        QMessageBox::information(this,"Login","Username and password is correct");
        hide();
        mainmenu* menu = new mainmenu();
        menu->loadShape(*windowShape);
        menu->loadPropertyBar(*windowShape);
        menu->loadTreeWidget(*windowShape,0);
        menu -> show();
    }
    else{
        QMessageBox::warning(this,"Login","Username or password is not correct");
        hide();
        mainmenu* menu = new mainmenu();
        menu->loadShape(*windowShape);
        menu->loadPropertyBar(*windowShape);
        menu->loadTreeWidget(*windowShape,0);
        menu -> show();
        menu->visitorView();

    }
}


void MainWindow::on_pushButton_2_clicked()
{
   //registration registration;
   //registration.setModal(true);
   //registration.exec();
    regist = new registration(this);
    regist->show();

}

void MainWindow::loadShape(myStd::vector<Shape *> &source)
{
    windowShape = &source;

}
