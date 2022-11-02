/********************************************************************************
** Form generated from reading UI file 'editshape.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSHAPE_H
#define UI_EDITSHAPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_editshape
{
public:
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_12;
    QLabel *label_4;
    QSpinBox *length;
    QLabel *label_18;
    QSpinBox *width;
    QComboBox *Penjoin;
    QLabel *label_17;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_3;
    QSpinBox *radius;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *label_19;
    QSpinBox *initialY;
    QComboBox *PenStyle;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *Brushstyle;
    QSpinBox *majorAxis;
    QLabel *label_15;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_16;
    QLabel *label_13;
    QComboBox *Pencap;
    QLabel *label_5;
    QSpinBox *minorAxis;
    QSpinBox *endX;
    QComboBox *PenColor;
    QComboBox *shape;
    QSpinBox *Penwidth;
    QComboBox *BrushColor;
    QSpinBox *initialX;
    QSpinBox *endY;
    QDialogButtonBox *buttonBox;
    QLabel *label_20;

    void setupUi(QDialog *editshape)
    {
        if (editshape->objectName().isEmpty())
            editshape->setObjectName(QStringLiteral("editshape"));
        editshape->resize(508, 589);
        gridLayout = new QGridLayout(editshape);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(editshape);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_12 = new QLabel(editshape);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 20, 0, 1, 1);

        label_4 = new QLabel(editshape);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        length = new QSpinBox(editshape);
        length->setObjectName(QStringLiteral("length"));
        length->setMaximum(900);

        gridLayout->addWidget(length, 12, 2, 1, 1);

        label_18 = new QLabel(editshape);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout->addWidget(label_18, 17, 0, 1, 1);

        width = new QSpinBox(editshape);
        width->setObjectName(QStringLiteral("width"));
        width->setMaximum(900);

        gridLayout->addWidget(width, 13, 2, 1, 1);

        Penjoin = new QComboBox(editshape);
        Penjoin->setObjectName(QStringLiteral("Penjoin"));

        gridLayout->addWidget(Penjoin, 5, 2, 1, 1);

        label_17 = new QLabel(editshape);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout->addWidget(label_17, 16, 0, 1, 1);

        label_7 = new QLabel(editshape);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        label_8 = new QLabel(editshape);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        label_3 = new QLabel(editshape);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        radius = new QSpinBox(editshape);
        radius->setObjectName(QStringLiteral("radius"));
        radius->setMaximum(900);

        gridLayout->addWidget(radius, 17, 2, 1, 1);

        label_14 = new QLabel(editshape);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 12, 0, 1, 1);

        label_11 = new QLabel(editshape);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 9, 0, 1, 1);

        label_19 = new QLabel(editshape);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout->addWidget(label_19, 10, 0, 1, 1);

        initialY = new QSpinBox(editshape);
        initialY->setObjectName(QStringLiteral("initialY"));
        initialY->setMaximum(900);

        gridLayout->addWidget(initialY, 9, 2, 1, 1);

        PenStyle = new QComboBox(editshape);
        PenStyle->setObjectName(QStringLiteral("PenStyle"));

        gridLayout->addWidget(PenStyle, 3, 2, 1, 1);

        label_9 = new QLabel(editshape);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 21, 0, 1, 1);

        label_10 = new QLabel(editshape);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 8, 0, 1, 1);

        Brushstyle = new QComboBox(editshape);
        Brushstyle->setObjectName(QStringLiteral("Brushstyle"));

        gridLayout->addWidget(Brushstyle, 6, 2, 1, 1);

        majorAxis = new QSpinBox(editshape);
        majorAxis->setObjectName(QStringLiteral("majorAxis"));
        majorAxis->setMaximum(900);

        gridLayout->addWidget(majorAxis, 15, 2, 1, 1);

        label_15 = new QLabel(editshape);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 13, 0, 1, 1);

        label_2 = new QLabel(editshape);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label = new QLabel(editshape);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_16 = new QLabel(editshape);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout->addWidget(label_16, 15, 0, 1, 1);

        label_13 = new QLabel(editshape);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 18, 0, 1, 1);

        Pencap = new QComboBox(editshape);
        Pencap->setObjectName(QStringLiteral("Pencap"));

        gridLayout->addWidget(Pencap, 4, 2, 1, 1);

        label_5 = new QLabel(editshape);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        minorAxis = new QSpinBox(editshape);
        minorAxis->setObjectName(QStringLiteral("minorAxis"));
        minorAxis->setMaximum(900);

        gridLayout->addWidget(minorAxis, 16, 2, 1, 1);

        endX = new QSpinBox(editshape);
        endX->setObjectName(QStringLiteral("endX"));
        endX->setMaximum(900);

        gridLayout->addWidget(endX, 10, 2, 1, 1);

        PenColor = new QComboBox(editshape);
        PenColor->setObjectName(QStringLiteral("PenColor"));

        gridLayout->addWidget(PenColor, 1, 2, 1, 1);

        shape = new QComboBox(editshape);
        shape->setObjectName(QStringLiteral("shape"));

        gridLayout->addWidget(shape, 0, 2, 1, 1);

        Penwidth = new QSpinBox(editshape);
        Penwidth->setObjectName(QStringLiteral("Penwidth"));
        Penwidth->setMaximum(20);

        gridLayout->addWidget(Penwidth, 2, 2, 1, 1);

        BrushColor = new QComboBox(editshape);
        BrushColor->setObjectName(QStringLiteral("BrushColor"));

        gridLayout->addWidget(BrushColor, 7, 2, 1, 1);

        initialX = new QSpinBox(editshape);
        initialX->setObjectName(QStringLiteral("initialX"));
        initialX->setMaximum(900);

        gridLayout->addWidget(initialX, 8, 2, 1, 1);

        endY = new QSpinBox(editshape);
        endY->setObjectName(QStringLiteral("endY"));
        endY->setMaximum(900);

        gridLayout->addWidget(endY, 11, 2, 1, 1);

        buttonBox = new QDialogButtonBox(editshape);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 20, 2, 1, 1);

        label_20 = new QLabel(editshape);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout->addWidget(label_20, 11, 0, 1, 1);


        retranslateUi(editshape);
        QObject::connect(buttonBox, SIGNAL(accepted()), editshape, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), editshape, SLOT(reject()));

        QMetaObject::connectSlotsByName(editshape);
    } // setupUi

    void retranslateUi(QDialog *editshape)
    {
        editshape->setWindowTitle(QApplication::translate("editshape", "Dialog", Q_NULLPTR));
        label_6->setText(QApplication::translate("editshape", "Shape", Q_NULLPTR));
        label_12->setText(QString());
        label_4->setText(QApplication::translate("editshape", "Pen Join", Q_NULLPTR));
        label_18->setText(QApplication::translate("editshape", "Radius", Q_NULLPTR));
        Penjoin->clear();
        Penjoin->insertItems(0, QStringList()
         << QApplication::translate("editshape", "MiterJoin", Q_NULLPTR)
         << QApplication::translate("editshape", "BevelJoin", Q_NULLPTR)
         << QApplication::translate("editshape", "RoundJoin", Q_NULLPTR)
        );
        label_17->setText(QApplication::translate("editshape", "Minor Axis", Q_NULLPTR));
        label_7->setText(QApplication::translate("editshape", "Pen Color", Q_NULLPTR));
        label_8->setText(QApplication::translate("editshape", "Brush Color", Q_NULLPTR));
        label_3->setText(QApplication::translate("editshape", "Pen Cap", Q_NULLPTR));
        label_14->setText(QApplication::translate("editshape", "Length", Q_NULLPTR));
        label_11->setText(QApplication::translate("editshape", "Initial point Y", Q_NULLPTR));
        label_19->setText(QApplication::translate("editshape", "End point X", Q_NULLPTR));
        PenStyle->clear();
        PenStyle->insertItems(0, QStringList()
         << QApplication::translate("editshape", "SolidLine", Q_NULLPTR)
         << QApplication::translate("editshape", "DashLine", Q_NULLPTR)
         << QApplication::translate("editshape", "DotLine", Q_NULLPTR)
         << QApplication::translate("editshape", "DashDotLine", Q_NULLPTR)
         << QApplication::translate("editshape", "DashDotDotLine", Q_NULLPTR)
        );
        label_9->setText(QString());
        label_10->setText(QApplication::translate("editshape", "Initial point X", Q_NULLPTR));
        Brushstyle->clear();
        Brushstyle->insertItems(0, QStringList()
         << QApplication::translate("editshape", "SolidPattern", Q_NULLPTR)
         << QApplication::translate("editshape", "HorPattern", Q_NULLPTR)
         << QApplication::translate("editshape", "VerPattern", Q_NULLPTR)
         << QApplication::translate("editshape", "NoBrush", Q_NULLPTR)
        );
        label_15->setText(QApplication::translate("editshape", "Width", Q_NULLPTR));
        label_2->setText(QApplication::translate("editshape", "Pen Style", Q_NULLPTR));
        label->setText(QApplication::translate("editshape", "Pen Width", Q_NULLPTR));
        label_16->setText(QApplication::translate("editshape", "Major Axis", Q_NULLPTR));
        label_13->setText(QString());
        Pencap->clear();
        Pencap->insertItems(0, QStringList()
         << QApplication::translate("editshape", "FlatCap", Q_NULLPTR)
         << QApplication::translate("editshape", "SquareCap", Q_NULLPTR)
         << QApplication::translate("editshape", "RoundCap", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("editshape", "Brush Style", Q_NULLPTR));
        PenColor->clear();
        PenColor->insertItems(0, QStringList()
         << QApplication::translate("editshape", "white", Q_NULLPTR)
         << QApplication::translate("editshape", "black", Q_NULLPTR)
         << QApplication::translate("editshape", "red", Q_NULLPTR)
         << QApplication::translate("editshape", "green", Q_NULLPTR)
         << QApplication::translate("editshape", "blue", Q_NULLPTR)
         << QApplication::translate("editshape", "cyan", Q_NULLPTR)
         << QApplication::translate("editshape", "magenta", Q_NULLPTR)
         << QApplication::translate("editshape", "yellow", Q_NULLPTR)
         << QApplication::translate("editshape", "gray", Q_NULLPTR)
        );
        shape->clear();
        shape->insertItems(0, QStringList()
         << QApplication::translate("editshape", "Line", Q_NULLPTR)
         << QApplication::translate("editshape", "Polyline", Q_NULLPTR)
         << QApplication::translate("editshape", "Polygon", Q_NULLPTR)
         << QApplication::translate("editshape", "Rectangle", Q_NULLPTR)
         << QApplication::translate("editshape", "Square", Q_NULLPTR)
         << QApplication::translate("editshape", "Ellipse", Q_NULLPTR)
         << QApplication::translate("editshape", "Circle", Q_NULLPTR)
         << QApplication::translate("editshape", "Text", Q_NULLPTR)
        );
        BrushColor->clear();
        BrushColor->insertItems(0, QStringList()
         << QApplication::translate("editshape", "white", Q_NULLPTR)
         << QApplication::translate("editshape", "black", Q_NULLPTR)
         << QApplication::translate("editshape", "red", Q_NULLPTR)
         << QApplication::translate("editshape", "green", Q_NULLPTR)
         << QApplication::translate("editshape", "blue", Q_NULLPTR)
         << QApplication::translate("editshape", "cyan", Q_NULLPTR)
         << QApplication::translate("editshape", "magenta", Q_NULLPTR)
         << QApplication::translate("editshape", "yellow", Q_NULLPTR)
         << QApplication::translate("editshape", "gray", Q_NULLPTR)
        );
        label_20->setText(QApplication::translate("editshape", "End point Y", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class editshape: public Ui_editshape {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSHAPE_H
