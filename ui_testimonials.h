/********************************************************************************
** Form generated from reading UI file 'testimonials.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTIMONIALS_H
#define UI_TESTIMONIALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Testimonials
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit;
    QSplitter *splitter;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *Testimonials)
    {
        if (Testimonials->objectName().isEmpty())
            Testimonials->setObjectName(QStringLiteral("Testimonials"));
        Testimonials->resize(648, 545);
        gridLayout = new QGridLayout(Testimonials);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scrollArea = new QScrollArea(Testimonials);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 624, 521));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        plainTextEdit = new QPlainTextEdit(scrollAreaWidgetContents);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(560, 380));
        plainTextEdit->setReadOnly(true);

        gridLayout_2->addWidget(plainTextEdit, 0, 0, 1, 1);

        splitter = new QSplitter(scrollAreaWidgetContents);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        textEdit = new QTextEdit(splitter);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        splitter->addWidget(textEdit);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        splitter->addWidget(pushButton);

        gridLayout_2->addWidget(splitter, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Testimonials);

        QMetaObject::connectSlotsByName(Testimonials);
    } // setupUi

    void retranslateUi(QWidget *Testimonials)
    {
        Testimonials->setWindowTitle(QApplication::translate("Testimonials", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Testimonials", "Submit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Testimonials: public Ui_Testimonials {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTIMONIALS_H
