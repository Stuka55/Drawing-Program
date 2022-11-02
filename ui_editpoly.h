/********************************************************************************
** Form generated from reading UI file 'editpoly.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPOLY_H
#define UI_EDITPOLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_EditPoly
{
public:
    QGridLayout *gridLayout;
    QPushButton *Done;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *yVal;
    QPushButton *Add;
    QLabel *label;
    QSpinBox *xVal;

    void setupUi(QDialog *EditPoly)
    {
        if (EditPoly->objectName().isEmpty())
            EditPoly->setObjectName(QStringLiteral("EditPoly"));
        EditPoly->resize(317, 163);
        gridLayout = new QGridLayout(EditPoly);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Done = new QPushButton(EditPoly);
        Done->setObjectName(QStringLiteral("Done"));

        gridLayout->addWidget(Done, 4, 3, 1, 1);

        label_2 = new QLabel(EditPoly);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_3 = new QLabel(EditPoly);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 4);

        yVal = new QSpinBox(EditPoly);
        yVal->setObjectName(QStringLiteral("yVal"));
        yVal->setMaximum(900);

        gridLayout->addWidget(yVal, 3, 1, 1, 3);

        Add = new QPushButton(EditPoly);
        Add->setObjectName(QStringLiteral("Add"));

        gridLayout->addWidget(Add, 4, 2, 1, 1);

        label = new QLabel(EditPoly);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        xVal = new QSpinBox(EditPoly);
        xVal->setObjectName(QStringLiteral("xVal"));
        xVal->setMaximum(900);

        gridLayout->addWidget(xVal, 1, 1, 1, 3);


        retranslateUi(EditPoly);

        QMetaObject::connectSlotsByName(EditPoly);
    } // setupUi

    void retranslateUi(QDialog *EditPoly)
    {
        EditPoly->setWindowTitle(QApplication::translate("EditPoly", "Dialog", Q_NULLPTR));
        Done->setText(QApplication::translate("EditPoly", "Done", Q_NULLPTR));
        label_2->setText(QApplication::translate("EditPoly", "yValue", Q_NULLPTR));
        label_3->setText(QApplication::translate("EditPoly", "Insert Points", Q_NULLPTR));
        Add->setText(QApplication::translate("EditPoly", "Add", Q_NULLPTR));
        label->setText(QApplication::translate("EditPoly", "xValue", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditPoly: public Ui_EditPoly {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPOLY_H
