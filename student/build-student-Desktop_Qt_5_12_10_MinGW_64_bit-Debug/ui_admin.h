/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_show;
    QPushButton *pushButton_change;
    QPushButton *pushButton_del;
    QLabel *label;
    QLineEdit *lineEdit_findname;
    QComboBox *comboBox;
    QPushButton *pushButton_order;
    QCheckBox *checkBox_desc;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QString::fromUtf8("admin"));
        admin->resize(732, 555);
        centralwidget = new QWidget(admin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 100, 711, 311));
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(330, 480, 75, 23));
        pushButton_show = new QPushButton(centralwidget);
        pushButton_show->setObjectName(QString::fromUtf8("pushButton_show"));
        pushButton_show->setGeometry(QRect(180, 60, 75, 23));
        pushButton_change = new QPushButton(centralwidget);
        pushButton_change->setObjectName(QString::fromUtf8("pushButton_change"));
        pushButton_change->setGeometry(QRect(270, 60, 75, 23));
        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setGeometry(QRect(360, 60, 75, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 54, 12));
        lineEdit_findname = new QLineEdit(centralwidget);
        lineEdit_findname->setObjectName(QString::fromUtf8("lineEdit_findname"));
        lineEdit_findname->setGeometry(QRect(60, 70, 113, 20));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(450, 60, 81, 22));
        pushButton_order = new QPushButton(centralwidget);
        pushButton_order->setObjectName(QString::fromUtf8("pushButton_order"));
        pushButton_order->setGeometry(QRect(630, 60, 75, 23));
        checkBox_desc = new QCheckBox(centralwidget);
        checkBox_desc->setObjectName(QString::fromUtf8("checkBox_desc"));
        checkBox_desc->setGeometry(QRect(540, 60, 71, 16));
        admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 732, 23));
        admin->setMenuBar(menubar);
        statusbar = new QStatusBar(admin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        admin->setStatusBar(statusbar);

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QMainWindow *admin)
    {
        admin->setWindowTitle(QApplication::translate("admin", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", nullptr));
        pushButton_exit->setText(QApplication::translate("admin", "\351\200\200\345\207\272", nullptr));
        pushButton_show->setText(QApplication::translate("admin", "\346\230\276\347\244\272\344\277\241\346\201\257", nullptr));
        pushButton_change->setText(QApplication::translate("admin", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        pushButton_del->setText(QApplication::translate("admin", "\345\210\240\351\231\244\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("admin", "\346\220\234\347\264\242\345\247\223\345\220\215", nullptr));
        comboBox->setItemText(0, QApplication::translate("admin", "\345\255\246\345\217\267", nullptr));
        comboBox->setItemText(1, QApplication::translate("admin", "\345\205\245\345\255\246\346\227\266\351\227\264", nullptr));
        comboBox->setItemText(2, QApplication::translate("admin", "\347\273\251\347\202\271", nullptr));

        pushButton_order->setText(QApplication::translate("admin", "\346\216\222\345\272\217", nullptr));
        checkBox_desc->setText(QApplication::translate("admin", "\351\231\215\345\272\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
