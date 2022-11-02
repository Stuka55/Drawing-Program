/********************************************************************************
** Form generated from reading UI file 'editscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSCREEN_H
#define UI_EDITSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EditScreen
{
public:
    QGridLayout *gridLayout;
    QPushButton *cancelButton;
    QLabel *label;
    QLineEdit *xLine;
    QPushButton *saveButton;
    QLineEdit *yLine;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *EditScreen)
    {
        if (EditScreen->objectName().isEmpty())
            EditScreen->setObjectName(QString::fromUtf8("EditScreen"));
        EditScreen->resize(315, 167);
        gridLayout = new QGridLayout(EditScreen);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cancelButton = new QPushButton(EditScreen);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 4, 2, 1, 1);

        label = new QLabel(EditScreen);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        xLine = new QLineEdit(EditScreen);
        xLine->setObjectName(QString::fromUtf8("xLine"));

        gridLayout->addWidget(xLine, 2, 1, 1, 2);

        saveButton = new QPushButton(EditScreen);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        gridLayout->addWidget(saveButton, 4, 1, 1, 1);

        yLine = new QLineEdit(EditScreen);
        yLine->setObjectName(QString::fromUtf8("yLine"));

        gridLayout->addWidget(yLine, 3, 1, 1, 2);

        label_2 = new QLabel(EditScreen);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_3 = new QLabel(EditScreen);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 3);


        retranslateUi(EditScreen);

        QMetaObject::connectSlotsByName(EditScreen);
    } // setupUi

    void retranslateUi(QDialog *EditScreen)
    {
        EditScreen->setWindowTitle(QCoreApplication::translate("EditScreen", "Dialog", nullptr));
        cancelButton->setText(QCoreApplication::translate("EditScreen", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("EditScreen", "X:", nullptr));
        saveButton->setText(QCoreApplication::translate("EditScreen", "Save", nullptr));
        label_2->setText(QCoreApplication::translate("EditScreen", "Y:", nullptr));
        label_3->setText(QCoreApplication::translate("EditScreen", "Insert dimension for object", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditScreen: public Ui_EditScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSCREEN_H
