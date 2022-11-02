/********************************************************************************
** Form generated from reading UI file 'contact.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACT_H
#define UI_CONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Contact
{
public:
    QPushButton *pushButton;
    QLabel *contact;
    QLabel *logo;

    void setupUi(QDialog *Contact)
    {
        if (Contact->objectName().isEmpty())
            Contact->setObjectName(QStringLiteral("Contact"));
        Contact->resize(429, 320);
        pushButton = new QPushButton(Contact);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 270, 101, 23));
        contact = new QLabel(Contact);
        contact->setObjectName(QStringLiteral("contact"));
        contact->setGeometry(QRect(20, 10, 391, 91));
        QFont font;
        font.setPointSize(15);
        contact->setFont(font);
        contact->setAlignment(Qt::AlignCenter);
        logo = new QLabel(Contact);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(130, 90, 141, 141));

        retranslateUi(Contact);

        QMetaObject::connectSlotsByName(Contact);
    } // setupUi

    void retranslateUi(QDialog *Contact)
    {
        Contact->setWindowTitle(QApplication::translate("Contact", "Contact Us", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Contact", "Close", Q_NULLPTR));
        contact->setText(QApplication::translate("Contact", "Contact Us: JJJSHAK@gmail.com", Q_NULLPTR));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Contact: public Ui_Contact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACT_H
