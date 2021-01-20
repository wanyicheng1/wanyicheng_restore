/********************************************************************************
** Form generated from reading UI file 'dele.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELE_H
#define UI_DELE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dele
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_dele;
    QPushButton *pushButton_exit;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dele)
    {
        if (dele->objectName().isEmpty())
            dele->setObjectName(QString::fromUtf8("dele"));
        dele->resize(457, 301);
        centralwidget = new QWidget(dele);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_dele = new QPushButton(centralwidget);
        pushButton_dele->setObjectName(QString::fromUtf8("pushButton_dele"));
        pushButton_dele->setGeometry(QRect(90, 200, 75, 23));
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(270, 200, 75, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 100, 54, 12));
        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(210, 100, 113, 20));
        dele->setCentralWidget(centralwidget);
        menubar = new QMenuBar(dele);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 457, 23));
        dele->setMenuBar(menubar);
        statusbar = new QStatusBar(dele);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        dele->setStatusBar(statusbar);

        retranslateUi(dele);

        QMetaObject::connectSlotsByName(dele);
    } // setupUi

    void retranslateUi(QMainWindow *dele)
    {
        dele->setWindowTitle(QApplication::translate("dele", "\345\210\240\351\231\244\345\255\246\347\224\237", nullptr));
        pushButton_dele->setText(QApplication::translate("dele", "\345\210\240\351\231\244", nullptr));
        pushButton_exit->setText(QApplication::translate("dele", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("dele", "\345\247\223\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dele: public Ui_dele {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELE_H
