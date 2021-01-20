/********************************************************************************
** Form generated from reading UI file 'admin_change.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_CHANGE_H
#define UI_ADMIN_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_change
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_number;
    QLabel *label_5;
    QLineEdit *lineEdit_time;
    QLineEdit *lineEdit_class;
    QLineEdit *lineEdit_GPA;
    QLineEdit *lineEdit_name;
    QPushButton *pushButton_enter;
    QPushButton *pushButton_exit;
    QLabel *label_6;
    QLineEdit *lineEdit_passowrd;
    QRadioButton *radioButton_add;
    QRadioButton *radioButton_change;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin_change)
    {
        if (admin_change->objectName().isEmpty())
            admin_change->setObjectName(QString::fromUtf8("admin_change"));
        admin_change->resize(568, 351);
        centralwidget = new QWidget(admin_change);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 40, 54, 12));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 70, 54, 12));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 100, 54, 12));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 130, 54, 12));
        lineEdit_number = new QLineEdit(centralwidget);
        lineEdit_number->setObjectName(QString::fromUtf8("lineEdit_number"));
        lineEdit_number->setGeometry(QRect(200, 40, 113, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 10, 54, 12));
        lineEdit_time = new QLineEdit(centralwidget);
        lineEdit_time->setObjectName(QString::fromUtf8("lineEdit_time"));
        lineEdit_time->setGeometry(QRect(200, 100, 113, 20));
        lineEdit_class = new QLineEdit(centralwidget);
        lineEdit_class->setObjectName(QString::fromUtf8("lineEdit_class"));
        lineEdit_class->setGeometry(QRect(200, 70, 113, 20));
        lineEdit_GPA = new QLineEdit(centralwidget);
        lineEdit_GPA->setObjectName(QString::fromUtf8("lineEdit_GPA"));
        lineEdit_GPA->setGeometry(QRect(200, 130, 113, 20));
        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(200, 10, 113, 20));
        pushButton_enter = new QPushButton(centralwidget);
        pushButton_enter->setObjectName(QString::fromUtf8("pushButton_enter"));
        pushButton_enter->setGeometry(QRect(120, 210, 75, 23));
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(290, 210, 75, 23));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 160, 54, 12));
        lineEdit_passowrd = new QLineEdit(centralwidget);
        lineEdit_passowrd->setObjectName(QString::fromUtf8("lineEdit_passowrd"));
        lineEdit_passowrd->setGeometry(QRect(200, 160, 113, 20));
        radioButton_add = new QRadioButton(centralwidget);
        radioButton_add->setObjectName(QString::fromUtf8("radioButton_add"));
        radioButton_add->setGeometry(QRect(420, 40, 89, 16));
        radioButton_change = new QRadioButton(centralwidget);
        radioButton_change->setObjectName(QString::fromUtf8("radioButton_change"));
        radioButton_change->setGeometry(QRect(420, 90, 89, 16));
        admin_change->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin_change);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 568, 23));
        admin_change->setMenuBar(menubar);
        statusbar = new QStatusBar(admin_change);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        admin_change->setStatusBar(statusbar);

        retranslateUi(admin_change);

        QMetaObject::connectSlotsByName(admin_change);
    } // setupUi

    void retranslateUi(QMainWindow *admin_change)
    {
        admin_change->setWindowTitle(QApplication::translate("admin_change", "MainWindow", nullptr));
        label->setText(QApplication::translate("admin_change", "\345\255\246\345\217\267", nullptr));
        label_2->setText(QApplication::translate("admin_change", "\344\270\223\344\270\232", nullptr));
        label_3->setText(QApplication::translate("admin_change", "\345\205\245\345\255\246\346\227\266\351\227\264", nullptr));
        label_4->setText(QApplication::translate("admin_change", "\347\273\251\347\202\271", nullptr));
        label_5->setText(QApplication::translate("admin_change", "\345\247\223\345\220\215", nullptr));
        pushButton_enter->setText(QApplication::translate("admin_change", "\347\241\256\345\256\232", nullptr));
        pushButton_exit->setText(QApplication::translate("admin_change", "\351\200\200\345\207\272", nullptr));
        label_6->setText(QApplication::translate("admin_change", "\345\257\206\347\240\201", nullptr));
        radioButton_add->setText(QApplication::translate("admin_change", "\346\267\273\345\212\240", nullptr));
        radioButton_change->setText(QApplication::translate("admin_change", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_change: public Ui_admin_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_CHANGE_H
