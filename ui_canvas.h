/********************************************************************************
** Form generated from reading UI file 'canvas.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANVAS_H
#define UI_CANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_canvas
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QWidget *centralwidget;
    QPushButton *Text;
    QPushButton *Line;
    QPushButton *Square;
    QPushButton *Sline;
    QPushButton *Triangle;
    QPushButton *Oval;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuReports;
    QMenu *menuHelo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *canvas)
    {
        if (canvas->objectName().isEmpty())
            canvas->setObjectName(QString::fromUtf8("canvas"));
        canvas->resize(800, 600);
        actionNew = new QAction(canvas);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(canvas);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(canvas);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionUndo = new QAction(canvas);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(canvas);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionCut = new QAction(canvas);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(canvas);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(canvas);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        centralwidget = new QWidget(canvas);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Text = new QPushButton(centralwidget);
        Text->setObjectName(QString::fromUtf8("Text"));
        Text->setGeometry(QRect(0, 0, 41, 41));
        Text->setStyleSheet(QString::fromUtf8("#Text{\n"
"background-color:transparent;\n"
"border-image:url(:T.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#Text:pressed\n"
"Text:checked{\n"
"border-image:url(:Tp.png);\n"
"brightness:(50%);\n"
"}"));
        Line = new QPushButton(centralwidget);
        Line->setObjectName(QString::fromUtf8("Line"));
        Line->setGeometry(QRect(0, 100, 41, 41));
        Line->setStyleSheet(QString::fromUtf8("#Line{\n"
"background-color:transparent;\n"
"border-image:url(:line.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#Line:pressed{\n"
"border-image:url(:linep.png);\n"
"}"));
        Square = new QPushButton(centralwidget);
        Square->setObjectName(QString::fromUtf8("Square"));
        Square->setGeometry(QRect(0, 50, 41, 41));
        Square->setStyleSheet(QString::fromUtf8("#Square{\n"
"background-color:transparent;\n"
"border-image:url(:square.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#Square:pressed{\n"
"border-image:url(:squarep.png);\n"
"}"));
        Sline = new QPushButton(centralwidget);
        Sline->setObjectName(QString::fromUtf8("Sline"));
        Sline->setGeometry(QRect(0, 200, 41, 41));
        Sline->setStyleSheet(QString::fromUtf8("#Sline{\n"
"background-color:transparent;\n"
"border-image:url(:sline.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#Sline:pressed{\n"
"border-image:url(:slinep.png);\n"
"}"));
        Triangle = new QPushButton(centralwidget);
        Triangle->setObjectName(QString::fromUtf8("Triangle"));
        Triangle->setGeometry(QRect(0, 150, 41, 41));
        Triangle->setStyleSheet(QString::fromUtf8("#Triangle{\n"
"background-color:transparent;\n"
"border-image:url(:tri.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#Triangle:pressed{\n"
"border-image:url(:trip.png);\n"
"}"));
        Oval = new QPushButton(centralwidget);
        Oval->setObjectName(QString::fromUtf8("Oval"));
        Oval->setGeometry(QRect(0, 250, 41, 41));
        Oval->setStyleSheet(QString::fromUtf8("#Oval{\n"
"background-color:transparent;\n"
"border-image:url(:oval.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#Oval:pressed{\n"
"border-image:url(:ovalp.png);\n"
"}"));
        canvas->setCentralWidget(centralwidget);
        menubar = new QMenuBar(canvas);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuReports = new QMenu(menubar);
        menuReports->setObjectName(QString::fromUtf8("menuReports"));
        menuHelo = new QMenu(menubar);
        menuHelo->setObjectName(QString::fromUtf8("menuHelo"));
        canvas->setMenuBar(menubar);
        statusbar = new QStatusBar(canvas);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        canvas->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuReports->menuAction());
        menubar->addAction(menuHelo->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);

        retranslateUi(canvas);

        QMetaObject::connectSlotsByName(canvas);
    } // setupUi

    void retranslateUi(QMainWindow *canvas)
    {
        canvas->setWindowTitle(QCoreApplication::translate("canvas", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("canvas", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("canvas", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("canvas", "Save", nullptr));
        actionUndo->setText(QCoreApplication::translate("canvas", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("canvas", "Redo", nullptr));
        actionCut->setText(QCoreApplication::translate("canvas", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("canvas", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("canvas", "Paste", nullptr));
        Text->setText(QString());
        Line->setText(QString());
        Square->setText(QString());
        Sline->setText(QString());
        Triangle->setText(QString());
        Oval->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("canvas", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("canvas", "Edit", nullptr));
        menuReports->setTitle(QCoreApplication::translate("canvas", "Reports", nullptr));
        menuHelo->setTitle(QCoreApplication::translate("canvas", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class canvas: public Ui_canvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANVAS_H
