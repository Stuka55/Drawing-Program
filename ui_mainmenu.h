/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "canvas.h"

QT_BEGIN_NAMESPACE

class Ui_mainmenu
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
    QWidget *CentralWidget;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QPushButton *Move;
    QPushButton *Remove;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidget;
    canvas *Canvas;
    QPushButton *contactButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QPushButton *Line;
    QPushButton *Polyline;
    QPushButton *Polygon;
    QPushButton *Rect;
    QPushButton *Square;
    QPushButton *Ellipse;
    QPushButton *Circle;
    QPushButton *Text;
    QPushButton *Testimonials;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuReports;
    QMenu *menuHelo;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *mainmenu)
    {
        if (mainmenu->objectName().isEmpty())
            mainmenu->setObjectName(QStringLiteral("mainmenu"));
        mainmenu->resize(1481, 1000);
        mainmenu->setMaximumSize(QSize(1500, 1000));
        actionNew = new QAction(mainmenu);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(mainmenu);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(mainmenu);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionUndo = new QAction(mainmenu);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(mainmenu);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionCut = new QAction(mainmenu);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCopy = new QAction(mainmenu);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(mainmenu);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        CentralWidget = new QWidget(mainmenu);
        CentralWidget->setObjectName(QStringLiteral("CentralWidget"));
        CentralWidget->setMaximumSize(QSize(1500, 1000));
        frame = new QFrame(CentralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setEnabled(true);
        frame->setGeometry(QRect(1040, 0, 421, 961));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);

        verticalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(true);

        verticalLayout_2->addWidget(comboBox);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(true);

        verticalLayout_2->addWidget(label_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(frame);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setEnabled(true);

        verticalLayout->addWidget(treeWidget);

        Move = new QPushButton(frame);
        Move->setObjectName(QStringLiteral("Move"));
        Move->setEnabled(true);

        verticalLayout->addWidget(Move);

        Remove = new QPushButton(frame);
        Remove->setObjectName(QStringLiteral("Remove"));
        Remove->setEnabled(true);

        verticalLayout->addWidget(Remove);


        verticalLayout_2->addLayout(verticalLayout);

        scrollArea = new QScrollArea(CentralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setEnabled(true);
        scrollArea->setGeometry(QRect(49, 6, 961, 911));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidget = new QWidget();
        scrollAreaWidget->setObjectName(QStringLiteral("scrollAreaWidget"));
        scrollAreaWidget->setGeometry(QRect(0, 0, 959, 909));
        Canvas = new canvas(scrollAreaWidget);
        Canvas->setObjectName(QStringLiteral("Canvas"));
        Canvas->setEnabled(true);
        Canvas->setGeometry(QRect(-1, -1, 961, 1000));
        scrollArea->setWidget(scrollAreaWidget);
        contactButton = new QPushButton(CentralWidget);
        contactButton->setObjectName(QStringLiteral("contactButton"));
        contactButton->setEnabled(true);
        contactButton->setGeometry(QRect(340, 920, 141, 41));
        layoutWidget = new QWidget(CentralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setEnabled(true);
        layoutWidget->setGeometry(QRect(0, 0, 61, 371));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Line = new QPushButton(layoutWidget);
        Line->setObjectName(QStringLiteral("Line"));
        Line->setEnabled(true);
        Line->setMaximumSize(QSize(41, 41));
        Line->setStyleSheet(QLatin1String("#Line{\n"
"background-color:transparent;\n"
"border-image:url(:line.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#Line:pressed{\n"
"border-image:url(:linep.png);\n"
"}"));

        verticalLayout_4->addWidget(Line);

        Polyline = new QPushButton(layoutWidget);
        Polyline->setObjectName(QStringLiteral("Polyline"));
        Polyline->setEnabled(true);
        Polyline->setMaximumSize(QSize(41, 41));
        Polyline->setStyleSheet(QLatin1String("#Polyline{\n"
"background-color:transparent;\n"
"border-image:url(:polyline.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#Polyline:pressed{\n"
"border-image:url(:polylinep.png);\n"
"}"));

        verticalLayout_4->addWidget(Polyline);

        Polygon = new QPushButton(layoutWidget);
        Polygon->setObjectName(QStringLiteral("Polygon"));
        Polygon->setEnabled(true);
        Polygon->setMaximumSize(QSize(41, 41));
        Polygon->setStyleSheet(QLatin1String("#Polygon{\n"
"background-color:transparent;\n"
"border-image:url(:polygon.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#Polygon:pressed{\n"
"border-image:url(:polygonp.png);\n"
"}"));

        verticalLayout_4->addWidget(Polygon);

        Rect = new QPushButton(layoutWidget);
        Rect->setObjectName(QStringLiteral("Rect"));
        Rect->setEnabled(true);
        Rect->setMaximumSize(QSize(41, 41));
        Rect->setStyleSheet(QLatin1String("#Rect{\n"
"background-color:transparent;\n"
"border-image:url(:rect.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#Rect:pressed{\n"
"border-image:url(:rectp.png);\n"
"}"));

        verticalLayout_4->addWidget(Rect);

        Square = new QPushButton(layoutWidget);
        Square->setObjectName(QStringLiteral("Square"));
        Square->setEnabled(true);
        Square->setMaximumSize(QSize(41, 41));
        Square->setStyleSheet(QLatin1String("#Square{\n"
"background-color:transparent;\n"
"border-image:url(:square.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#Square:pressed{\n"
"border-image:url(:squarep.png);\n"
"}"));

        verticalLayout_4->addWidget(Square);

        Ellipse = new QPushButton(layoutWidget);
        Ellipse->setObjectName(QStringLiteral("Ellipse"));
        Ellipse->setEnabled(true);
        Ellipse->setMaximumSize(QSize(41, 41));
        Ellipse->setStyleSheet(QLatin1String("#Ellipse{\n"
"background-color:transparent;\n"
"border-image:url(:ellipse.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#Ellipse:pressed{\n"
"border-image:url(:ellipsep.png);\n"
"}"));

        verticalLayout_4->addWidget(Ellipse);

        Circle = new QPushButton(layoutWidget);
        Circle->setObjectName(QStringLiteral("Circle"));
        Circle->setEnabled(true);
        Circle->setMaximumSize(QSize(41, 41));
        Circle->setStyleSheet(QLatin1String("#Circle{\n"
"background-color:transparent;\n"
"border-image:url(:circle.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#Circle:pressed{\n"
"border-image:url(:circlep.png);\n"
"}"));

        verticalLayout_4->addWidget(Circle);

        Text = new QPushButton(layoutWidget);
        Text->setObjectName(QStringLiteral("Text"));
        Text->setEnabled(true);
        Text->setMaximumSize(QSize(41, 41));
        Text->setStyleSheet(QLatin1String("#Text{\n"
"background-color:transparent;\n"
"border-image:url(:T.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#Text:pressed{\n"
"border-image:url(:Tp.png);\n"
"brightness:(50%);\n"
"}"));

        verticalLayout_4->addWidget(Text);

        Testimonials = new QPushButton(CentralWidget);
        Testimonials->setObjectName(QStringLiteral("Testimonials"));
        Testimonials->setEnabled(true);
        Testimonials->setGeometry(QRect(490, 920, 141, 41));
        mainmenu->setCentralWidget(CentralWidget);
        layoutWidget->raise();
        frame->raise();
        scrollArea->raise();
        contactButton->raise();
        Testimonials->raise();
        menubar = new QMenuBar(mainmenu);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1481, 21));
        menubar->setMaximumSize(QSize(1500, 21));
        menubar->setContextMenuPolicy(Qt::PreventContextMenu);
        menubar->setAutoFillBackground(false);
        menubar->setDefaultUp(true);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFile->setAutoFillBackground(false);
        menuFile->setTearOffEnabled(true);
        menuFile->setSeparatorsCollapsible(false);
        menuFile->setToolTipsVisible(false);
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuEdit->setMaximumSize(QSize(121, 161));
        menuReports = new QMenu(menubar);
        menuReports->setObjectName(QStringLiteral("menuReports"));
        menuHelo = new QMenu(menubar);
        menuHelo->setObjectName(QStringLiteral("menuHelo"));
        menuHelo->setMaximumSize(QSize(121, 46));
        mainmenu->setMenuBar(menubar);
        toolBar = new QToolBar(mainmenu);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        mainmenu->addToolBar(Qt::LeftToolBarArea, toolBar);
        toolBar_2 = new QToolBar(mainmenu);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        mainmenu->addToolBar(Qt::BottomToolBarArea, toolBar_2);

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

        retranslateUi(mainmenu);

        QMetaObject::connectSlotsByName(mainmenu);
    } // setupUi

    void retranslateUi(QMainWindow *mainmenu)
    {
        mainmenu->setWindowTitle(QApplication::translate("mainmenu", "MainWindow", Q_NULLPTR));
        actionNew->setText(QApplication::translate("mainmenu", "New", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionNew->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionNew->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        actionOpen->setText(QApplication::translate("mainmenu", "Open", Q_NULLPTR));
        actionSave->setText(QApplication::translate("mainmenu", "Save", Q_NULLPTR));
        actionUndo->setText(QApplication::translate("mainmenu", "Undo", Q_NULLPTR));
        actionRedo->setText(QApplication::translate("mainmenu", "Redo", Q_NULLPTR));
        actionCut->setText(QApplication::translate("mainmenu", "Cut", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("mainmenu", "Copy", Q_NULLPTR));
        actionPaste->setText(QApplication::translate("mainmenu", "Paste", Q_NULLPTR));
        label->setText(QApplication::translate("mainmenu", "Property Editor", Q_NULLPTR));
        label_2->setText(QApplication::translate("mainmenu", "Shapes", Q_NULLPTR));
        label_3->setText(QApplication::translate("mainmenu", "Property", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("mainmenu", "Value", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("mainmenu", "Property", Q_NULLPTR));
        Move->setText(QApplication::translate("mainmenu", "Move", Q_NULLPTR));
        Remove->setText(QApplication::translate("mainmenu", "Remove", Q_NULLPTR));
        contactButton->setText(QApplication::translate("mainmenu", "Contact Information", Q_NULLPTR));
        Line->setText(QString());
        Polyline->setText(QString());
        Polygon->setText(QString());
        Rect->setText(QString());
        Square->setText(QString());
        Ellipse->setText(QString());
        Circle->setText(QString());
        Text->setText(QString());
        Testimonials->setText(QApplication::translate("mainmenu", "Testimonials", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("mainmenu", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("mainmenu", "Edit", Q_NULLPTR));
        menuReports->setTitle(QApplication::translate("mainmenu", "Reports", Q_NULLPTR));
        menuHelo->setTitle(QApplication::translate("mainmenu", "Help", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("mainmenu", "toolBar", Q_NULLPTR));
        toolBar_2->setWindowTitle(QApplication::translate("mainmenu", "toolBar_2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainmenu: public Ui_mainmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
