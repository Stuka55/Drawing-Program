/********************************************************************************
** Form generated from reading UI file 'edittext.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTEXT_H
#define UI_EDITTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_EditText
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *textString;
    QLabel *label_2;
    QComboBox *textColor;
    QLabel *label_3;
    QComboBox *textAlignment;
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QSpinBox *textPointSize;
    QComboBox *textFontFamily;
    QLabel *label_5;
    QComboBox *textFontStyle;
    QLabel *label_6;
    QComboBox *textFontWeight;
    QLabel *label_7;

    void setupUi(QDialog *EditText)
    {
        if (EditText->objectName().isEmpty())
            EditText->setObjectName(QStringLiteral("EditText"));
        EditText->resize(434, 307);
        formLayout = new QFormLayout(EditText);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(EditText);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        textString = new QLineEdit(EditText);
        textString->setObjectName(QStringLiteral("textString"));

        formLayout->setWidget(0, QFormLayout::FieldRole, textString);

        label_2 = new QLabel(EditText);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        textColor = new QComboBox(EditText);
        textColor->setObjectName(QStringLiteral("textColor"));

        formLayout->setWidget(1, QFormLayout::FieldRole, textColor);

        label_3 = new QLabel(EditText);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        textAlignment = new QComboBox(EditText);
        textAlignment->setObjectName(QStringLiteral("textAlignment"));

        formLayout->setWidget(2, QFormLayout::FieldRole, textAlignment);

        buttonBox = new QDialogButtonBox(EditText);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(7, QFormLayout::FieldRole, buttonBox);

        label_4 = new QLabel(EditText);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        textPointSize = new QSpinBox(EditText);
        textPointSize->setObjectName(QStringLiteral("textPointSize"));
        textPointSize->setMaximum(50);

        formLayout->setWidget(3, QFormLayout::FieldRole, textPointSize);

        textFontFamily = new QComboBox(EditText);
        textFontFamily->setObjectName(QStringLiteral("textFontFamily"));

        formLayout->setWidget(4, QFormLayout::FieldRole, textFontFamily);

        label_5 = new QLabel(EditText);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        textFontStyle = new QComboBox(EditText);
        textFontStyle->setObjectName(QStringLiteral("textFontStyle"));

        formLayout->setWidget(5, QFormLayout::FieldRole, textFontStyle);

        label_6 = new QLabel(EditText);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        textFontWeight = new QComboBox(EditText);
        textFontWeight->setObjectName(QStringLiteral("textFontWeight"));

        formLayout->setWidget(6, QFormLayout::FieldRole, textFontWeight);

        label_7 = new QLabel(EditText);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);


        retranslateUi(EditText);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditText, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditText, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditText);
    } // setupUi

    void retranslateUi(QDialog *EditText)
    {
        EditText->setWindowTitle(QApplication::translate("EditText", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("EditText", "Text String", Q_NULLPTR));
        label_2->setText(QApplication::translate("EditText", "Text  Color", Q_NULLPTR));
        textColor->clear();
        textColor->insertItems(0, QStringList()
         << QApplication::translate("EditText", "white", Q_NULLPTR)
         << QApplication::translate("EditText", "black", Q_NULLPTR)
         << QApplication::translate("EditText", "red", Q_NULLPTR)
         << QApplication::translate("EditText", "green", Q_NULLPTR)
         << QApplication::translate("EditText", "blue", Q_NULLPTR)
         << QApplication::translate("EditText", "cyan", Q_NULLPTR)
         << QApplication::translate("EditText", "magenta", Q_NULLPTR)
         << QApplication::translate("EditText", "yellow", Q_NULLPTR)
         << QApplication::translate("EditText", "gray", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("EditText", "Text Alignment", Q_NULLPTR));
        textAlignment->clear();
        textAlignment->insertItems(0, QStringList()
         << QApplication::translate("EditText", "AlignLeft", Q_NULLPTR)
         << QApplication::translate("EditText", "AlignRight", Q_NULLPTR)
         << QApplication::translate("EditText", "AlignTop", Q_NULLPTR)
         << QApplication::translate("EditText", "AlignBottom", Q_NULLPTR)
         << QApplication::translate("EditText", "AlignCenter", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("EditText", "Text Point Size", Q_NULLPTR));
        textFontFamily->clear();
        textFontFamily->insertItems(0, QStringList()
         << QApplication::translate("EditText", "Comic Sans MS", Q_NULLPTR)
         << QApplication::translate("EditText", "Courier", Q_NULLPTR)
         << QApplication::translate("EditText", "Helvetica", Q_NULLPTR)
         << QApplication::translate("EditText", "Times", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("EditText", "Text Font Family", Q_NULLPTR));
        textFontStyle->clear();
        textFontStyle->insertItems(0, QStringList()
         << QApplication::translate("EditText", "StyleNormal", Q_NULLPTR)
         << QApplication::translate("EditText", "StyleItalic", Q_NULLPTR)
         << QApplication::translate("EditText", "StyleOblique", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("EditText", "Text Font Style", Q_NULLPTR));
        textFontWeight->clear();
        textFontWeight->insertItems(0, QStringList()
         << QApplication::translate("EditText", "Thin", Q_NULLPTR)
         << QApplication::translate("EditText", "Light", Q_NULLPTR)
         << QApplication::translate("EditText", "Normal", Q_NULLPTR)
         << QApplication::translate("EditText", "Bold", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("EditText", "Text Font Weight", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditText: public Ui_EditText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTEXT_H
