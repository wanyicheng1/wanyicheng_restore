#ifndef UI_H
#define UI_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *aboutsoftware;
    QAction *setdb;
    QAction *aboutdb;
    QAction *aboutAuthor;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *ip_label;
    QLabel *ipds_label;
    QLabel *title_label;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *account_label;
    QLineEdit *account_lineEdit;
    QLabel *password_label;
    QLineEdit *password_lineEdit;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QPushButton *login_pushButton;
    QPushButton *exit_pushButton;
    QLabel *notice_label;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_7;
    QCheckBox *admin_checkBox;
    QCheckBox *student_checkBox;
    QCheckBox *teacher_checkBox;
    QLabel *log_label;
    QWidget *page_2;
    QLabel *title_label_2;
    QPushButton *confirm_pushButton;
    QPushButton *return_pushButton;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_3;
    QLabel *ip_label_2;
    QLineEdit *ip_lineEdit;
    QGridLayout *gridLayout_4;
    QLabel *account_label_2;
    QLineEdit *account_lineEdit_2;
    QGridLayout *gridLayout_5;
    QLabel *password_label_2;
    QLineEdit *password_lineEdit_2;
    QWidget *page_3;
    QLabel *title_label_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *admin_tableView;
    QPushButton *cancel_pushButton_2;
    QPushButton *add_pushButton_2;
    QLineEdit *search_lineEdit_2;
    QPushButton *save_pushButton_2;
    QPushButton *delete_pushButton_2;
    QPushButton *search_pushButton_2;
    QWidget *tab_2;
    QTableView *student_tableView;
    QPushButton *add_pushButton_3;
    QPushButton *cancel_pushButton_3;
    QPushButton *delete_pushButton_3;
    QPushButton *save_pushButton_3;
    QLineEdit *search_lineEdit_3;
    QPushButton *search_pushButton_3;
    QWidget *tab_3;
    QTableView *teacher_tableView;
    QPushButton *add_pushButton;
    QPushButton *delete_pushButton;
    QLineEdit *search_lineEdit;
    QPushButton *search_pushButton;
    QPushButton *save_pushButton;
    QPushButton *cancel_pushButton;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_8;
    QLabel *label_2;
    QLabel *welcome_label;
    QLabel *show_admin_label;
    QWidget *page_4;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_9;
    QLabel *label;
    QLabel *show_student_label;
    QLabel *label_4;
    QTableView *student_self_tableView;
    QWidget *page_5;
    QTableView *teacherself_tableView;
    QPushButton *save_pushButton_4;
    QPushButton *delete_pushButton_4;
    QPushButton *search_pushButton_4;
    QPushButton *cancel_pushButton_4;
    QPushButton *add_pushButton_4;
    QLineEdit *search_lineEdit_4;
    QWidget *layoutWidget7;
    QGridLayout *gridLayout_10;
    QLabel *label_3;
    QLabel *show_teacher_label;
    QLabel *label_6;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(872, 655);
        aboutsoftware = new QAction(MainWindow);
        aboutsoftware->setObjectName(QStringLiteral("aboutsoftware"));
        setdb = new QAction(MainWindow);
        setdb->setObjectName(QStringLiteral("setdb"));
        aboutdb = new QAction(MainWindow);
        aboutdb->setObjectName(QStringLiteral("aboutdb"));
        aboutAuthor = new QAction(MainWindow);
        aboutAuthor->setObjectName(QStringLiteral("aboutAuthor"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 851, 611));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 540, 211, 16));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ip_label = new QLabel(layoutWidget);
        ip_label->setObjectName(QStringLiteral("ip_label"));

        horizontalLayout->addWidget(ip_label);

        ipds_label = new QLabel(layoutWidget);
        ipds_label->setObjectName(QStringLiteral("ipds_label"));

        horizontalLayout->addWidget(ipds_label);

        title_label = new QLabel(page);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setGeometry(QRect(280, 40, 321, 101));
        layoutWidget1 = new QWidget(page);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(520, 360, 177, 48));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        account_label = new QLabel(layoutWidget1);
        account_label->setObjectName(QStringLiteral("account_label"));

        gridLayout->addWidget(account_label, 0, 0, 1, 1);

        account_lineEdit = new QLineEdit(layoutWidget1);
        account_lineEdit->setObjectName(QStringLiteral("account_lineEdit"));

        gridLayout->addWidget(account_lineEdit, 0, 1, 1, 1);

        password_label = new QLabel(layoutWidget1);
        password_label->setObjectName(QStringLiteral("password_label"));

        gridLayout->addWidget(password_label, 1, 0, 1, 1);

        password_lineEdit = new QLineEdit(layoutWidget1);
        password_lineEdit->setObjectName(QStringLiteral("password_lineEdit"));

        gridLayout->addWidget(password_lineEdit, 1, 1, 1, 1);

        layoutWidget2 = new QWidget(page);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(530, 470, 158, 25));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        login_pushButton = new QPushButton(layoutWidget2);
        login_pushButton->setObjectName(QStringLiteral("login_pushButton"));

        gridLayout_2->addWidget(login_pushButton, 0, 0, 1, 1);

        exit_pushButton = new QPushButton(layoutWidget2);
        exit_pushButton->setObjectName(QStringLiteral("exit_pushButton"));

        gridLayout_2->addWidget(exit_pushButton, 0, 1, 1, 1);

        notice_label = new QLabel(page);
        notice_label->setObjectName(QStringLiteral("notice_label"));
        notice_label->setGeometry(QRect(60, 430, 261, 41));
        layoutWidget3 = new QWidget(page);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(120, 320, 61, 62));
        gridLayout_7 = new QGridLayout(layoutWidget3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        admin_checkBox = new QCheckBox(layoutWidget3);
        admin_checkBox->setObjectName(QStringLiteral("admin_checkBox"));

        gridLayout_7->addWidget(admin_checkBox, 0, 0, 1, 1);

        student_checkBox = new QCheckBox(layoutWidget3);
        student_checkBox->setObjectName(QStringLiteral("student_checkBox"));

        gridLayout_7->addWidget(student_checkBox, 1, 0, 1, 1);

        teacher_checkBox = new QCheckBox(layoutWidget3);
        teacher_checkBox->setObjectName(QStringLiteral("teacher_checkBox"));

        gridLayout_7->addWidget(teacher_checkBox, 2, 0, 1, 1);

        log_label = new QLabel(page);
        log_label->setObjectName(QStringLiteral("log_label"));
        log_label->setGeometry(QRect(240, 60, 361, 131));
        log_label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/\345\275\255\346\263\275\347\221\204/Desktop/logo.png")));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        title_label_2 = new QLabel(page_2);
        title_label_2->setObjectName(QStringLiteral("title_label_2"));
        title_label_2->setGeometry(QRect(340, 70, 141, 61));
        confirm_pushButton = new QPushButton(page_2);
        confirm_pushButton->setObjectName(QStringLiteral("confirm_pushButton"));
        confirm_pushButton->setGeometry(QRect(520, 520, 75, 23));
        return_pushButton = new QPushButton(page_2);
        return_pushButton->setObjectName(QStringLiteral("return_pushButton"));
        return_pushButton->setGeometry(QRect(660, 520, 75, 23));
        layoutWidget4 = new QWidget(page_2);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(530, 370, 215, 80));
        gridLayout_6 = new QGridLayout(layoutWidget4);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        ip_label_2 = new QLabel(layoutWidget4);
        ip_label_2->setObjectName(QStringLiteral("ip_label_2"));

        gridLayout_3->addWidget(ip_label_2, 0, 0, 1, 1);

        ip_lineEdit = new QLineEdit(layoutWidget4);
        ip_lineEdit->setObjectName(QStringLiteral("ip_lineEdit"));

        gridLayout_3->addWidget(ip_lineEdit, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        account_label_2 = new QLabel(layoutWidget4);
        account_label_2->setObjectName(QStringLiteral("account_label_2"));

        gridLayout_4->addWidget(account_label_2, 0, 0, 1, 1);

        account_lineEdit_2 = new QLineEdit(layoutWidget4);
        account_lineEdit_2->setObjectName(QStringLiteral("account_lineEdit_2"));

        gridLayout_4->addWidget(account_lineEdit_2, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 1, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        password_label_2 = new QLabel(layoutWidget4);
        password_label_2->setObjectName(QStringLiteral("password_label_2"));

        gridLayout_5->addWidget(password_label_2, 0, 0, 1, 1);

        password_lineEdit_2 = new QLineEdit(layoutWidget4);
        password_lineEdit_2->setObjectName(QStringLiteral("password_lineEdit_2"));

        gridLayout_5->addWidget(password_lineEdit_2, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 2, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        title_label_3 = new QLabel(page_3);
        title_label_3->setObjectName(QStringLiteral("title_label_3"));
        title_label_3->setGeometry(QRect(340, 0, 131, 71));
        tabWidget = new QTabWidget(page_3);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 30, 851, 551));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        admin_tableView = new QTableView(tab);
        admin_tableView->setObjectName(QStringLiteral("admin_tableView"));
        admin_tableView->setGeometry(QRect(10, 10, 831, 441));
        cancel_pushButton_2 = new QPushButton(tab);
        cancel_pushButton_2->setObjectName(QStringLiteral("cancel_pushButton_2"));
        cancel_pushButton_2->setGeometry(QRect(720, 490, 75, 23));
        add_pushButton_2 = new QPushButton(tab);
        add_pushButton_2->setObjectName(QStringLiteral("add_pushButton_2"));
        add_pushButton_2->setGeometry(QRect(60, 460, 75, 23));
        search_lineEdit_2 = new QLineEdit(tab);
        search_lineEdit_2->setObjectName(QStringLiteral("search_lineEdit_2"));
        search_lineEdit_2->setGeometry(QRect(180, 470, 391, 20));
        save_pushButton_2 = new QPushButton(tab);
        save_pushButton_2->setObjectName(QStringLiteral("save_pushButton_2"));
        save_pushButton_2->setGeometry(QRect(720, 460, 75, 23));
        delete_pushButton_2 = new QPushButton(tab);
        delete_pushButton_2->setObjectName(QStringLiteral("delete_pushButton_2"));
        delete_pushButton_2->setGeometry(QRect(60, 490, 75, 23));
        search_pushButton_2 = new QPushButton(tab);
        search_pushButton_2->setObjectName(QStringLiteral("search_pushButton_2"));
        search_pushButton_2->setGeometry(QRect(590, 470, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        student_tableView = new QTableView(tab_2);
        student_tableView->setObjectName(QStringLiteral("student_tableView"));
        student_tableView->setGeometry(QRect(0, 0, 841, 461));
        add_pushButton_3 = new QPushButton(tab_2);
        add_pushButton_3->setObjectName(QStringLiteral("add_pushButton_3"));
        add_pushButton_3->setGeometry(QRect(60, 470, 75, 23));
        cancel_pushButton_3 = new QPushButton(tab_2);
        cancel_pushButton_3->setObjectName(QStringLiteral("cancel_pushButton_3"));
        cancel_pushButton_3->setGeometry(QRect(720, 500, 75, 23));
        delete_pushButton_3 = new QPushButton(tab_2);
        delete_pushButton_3->setObjectName(QStringLiteral("delete_pushButton_3"));
        delete_pushButton_3->setGeometry(QRect(60, 500, 75, 23));
        save_pushButton_3 = new QPushButton(tab_2);
        save_pushButton_3->setObjectName(QStringLiteral("save_pushButton_3"));
        save_pushButton_3->setGeometry(QRect(720, 470, 75, 23));
        search_lineEdit_3 = new QLineEdit(tab_2);
        search_lineEdit_3->setObjectName(QStringLiteral("search_lineEdit_3"));
        search_lineEdit_3->setGeometry(QRect(180, 480, 391, 20));
        search_pushButton_3 = new QPushButton(tab_2);
        search_pushButton_3->setObjectName(QStringLiteral("search_pushButton_3"));
        search_pushButton_3->setGeometry(QRect(590, 480, 75, 23));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        teacher_tableView = new QTableView(tab_3);
        teacher_tableView->setObjectName(QStringLiteral("teacher_tableView"));
        teacher_tableView->setGeometry(QRect(5, 1, 831, 431));
        add_pushButton = new QPushButton(tab_3);
        add_pushButton->setObjectName(QStringLiteral("add_pushButton"));
        add_pushButton->setGeometry(QRect(20, 450, 75, 23));
        delete_pushButton = new QPushButton(tab_3);
        delete_pushButton->setObjectName(QStringLiteral("delete_pushButton"));
        delete_pushButton->setGeometry(QRect(20, 480, 75, 23));
        search_lineEdit = new QLineEdit(tab_3);
        search_lineEdit->setObjectName(QStringLiteral("search_lineEdit"));
        search_lineEdit->setGeometry(QRect(140, 460, 391, 20));
        search_pushButton = new QPushButton(tab_3);
        search_pushButton->setObjectName(QStringLiteral("search_pushButton"));
        search_pushButton->setGeometry(QRect(550, 460, 75, 23));
        save_pushButton = new QPushButton(tab_3);
        save_pushButton->setObjectName(QStringLiteral("save_pushButton"));
        save_pushButton->setGeometry(QRect(680, 450, 75, 23));
        cancel_pushButton = new QPushButton(tab_3);
        cancel_pushButton->setObjectName(QStringLiteral("cancel_pushButton"));
        cancel_pushButton->setGeometry(QRect(680, 480, 75, 23));
        tabWidget->addTab(tab_3, QString());
        layoutWidget5 = new QWidget(page_3);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 580, 191, 16));
        gridLayout_8 = new QGridLayout(layoutWidget5);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget5);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_8->addWidget(label_2, 0, 3, 1, 1);

        welcome_label = new QLabel(layoutWidget5);
        welcome_label->setObjectName(QStringLiteral("welcome_label"));

        gridLayout_8->addWidget(welcome_label, 0, 0, 1, 1);

        show_admin_label = new QLabel(layoutWidget5);
        show_admin_label->setObjectName(QStringLiteral("show_admin_label"));

        gridLayout_8->addWidget(show_admin_label, 0, 2, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        layoutWidget6 = new QWidget(page_4);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(0, 580, 152, 14));
        gridLayout_9 = new QGridLayout(layoutWidget6);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget6);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_9->addWidget(label, 0, 0, 1, 1);

        show_student_label = new QLabel(layoutWidget6);
        show_student_label->setObjectName(QStringLiteral("show_student_label"));

        gridLayout_9->addWidget(show_student_label, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget6);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_9->addWidget(label_4, 0, 2, 1, 1);

        student_self_tableView = new QTableView(page_4);
        student_self_tableView->setObjectName(QStringLiteral("student_self_tableView"));
        student_self_tableView->setGeometry(QRect(0, 10, 861, 571));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        teacherself_tableView = new QTableView(page_5);
        teacherself_tableView->setObjectName(QStringLiteral("teacherself_tableView"));
        teacherself_tableView->setGeometry(QRect(0, 0, 861, 521));
        save_pushButton_4 = new QPushButton(page_5);
        save_pushButton_4->setObjectName(QStringLiteral("save_pushButton_4"));
        save_pushButton_4->setGeometry(QRect(700, 520, 75, 23));
        delete_pushButton_4 = new QPushButton(page_5);
        delete_pushButton_4->setObjectName(QStringLiteral("delete_pushButton_4"));
        delete_pushButton_4->setGeometry(QRect(40, 550, 75, 23));
        search_pushButton_4 = new QPushButton(page_5);
        search_pushButton_4->setObjectName(QStringLiteral("search_pushButton_4"));
        search_pushButton_4->setGeometry(QRect(570, 530, 75, 23));
        cancel_pushButton_4 = new QPushButton(page_5);
        cancel_pushButton_4->setObjectName(QStringLiteral("cancel_pushButton_4"));
        cancel_pushButton_4->setGeometry(QRect(700, 550, 75, 23));
        add_pushButton_4 = new QPushButton(page_5);
        add_pushButton_4->setObjectName(QStringLiteral("add_pushButton_4"));
        add_pushButton_4->setGeometry(QRect(40, 520, 75, 23));
        search_lineEdit_4 = new QLineEdit(page_5);
        search_lineEdit_4->setObjectName(QStringLiteral("search_lineEdit_4"));
        search_lineEdit_4->setGeometry(QRect(160, 530, 391, 20));
        layoutWidget7 = new QWidget(page_5);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(0, 580, 152, 14));
        gridLayout_10 = new QGridLayout(layoutWidget7);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget7);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_10->addWidget(label_3, 0, 0, 1, 1);

        show_teacher_label = new QLabel(layoutWidget7);
        show_teacher_label->setObjectName(QStringLiteral("show_teacher_label"));

        gridLayout_10->addWidget(show_teacher_label, 0, 1, 1, 1);

        label_6 = new QLabel(layoutWidget7);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_10->addWidget(label_6, 0, 2, 1, 1);

        stackedWidget->addWidget(page_5);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 872, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menu);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(menu_2->menuAction());
        menu->addAction(aboutsoftware);
        menu->addSeparator();
        menu->addAction(aboutAuthor);
        menu_2->addAction(setdb);
        menu_2->addAction(aboutdb);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        aboutsoftware->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\346\234\254\347\250\213\345\272\217", Q_NULLPTR));
        setdb->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\350\256\276\347\275\256", Q_NULLPTR));
        aboutdb->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        aboutAuthor->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\344\275\234\350\200\205", Q_NULLPTR));
        ip_label->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\346\225\260\346\215\256\345\272\223IP\357\274\232", Q_NULLPTR));
        ipds_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        title_label->setText(QApplication::translate("MainWindow", "<h1>\350\276\275\345\256\201\347\247\221\346\212\200\345\244\247\345\255\246\346\240\241\345\233\255\347\256\241\347\220\206\347\263\273\347\273\237</h1>", Q_NULLPTR));
        account_label->setText(QApplication::translate("MainWindow", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        password_label->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        login_pushButton->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        exit_pushButton->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        notice_label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#aa0000;\">\346\263\250\346\204\217\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267\345\222\214\345\257\206\347\240\201\345\220\216\351\200\211\346\213\251\350\272\253\344\273\275!</span></p></body></html>", Q_NULLPTR));
        admin_checkBox->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
        student_checkBox->setText(QApplication::translate("MainWindow", "\345\255\246\347\224\237", Q_NULLPTR));
        teacher_checkBox->setText(QApplication::translate("MainWindow", "\346\225\231\345\270\210", Q_NULLPTR));
        log_label->setText(QString());
        title_label_2->setText(QApplication::translate("MainWindow", "<h1>\350\256\276\347\275\256\346\234\215\345\212\241\345\231\250</h1>", Q_NULLPTR));
        confirm_pushButton->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244", Q_NULLPTR));
        return_pushButton->setText(QApplication::translate("MainWindow", "\350\277\224\345\233\236", Q_NULLPTR));
        ip_label_2->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223IP\357\274\232", Q_NULLPTR));
        ip_lineEdit->setText(QApplication::translate("MainWindow", "127.0.0.", Q_NULLPTR));
        account_label_2->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        account_lineEdit_2->setText(QApplication::translate("MainWindow", "roo", Q_NULLPTR));
        password_label_2->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        password_lineEdit_2->setText(QApplication::translate("MainWindow", "123123", Q_NULLPTR));
        title_label_3->setText(QApplication::translate("MainWindow", "<h1>\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242</h1>", Q_NULLPTR));
        cancel_pushButton_2->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200", Q_NULLPTR));
        add_pushButton_2->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", Q_NULLPTR));
        save_pushButton_2->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
        delete_pushButton_2->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        search_pushButton_2->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        add_pushButton_3->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", Q_NULLPTR));
        cancel_pushButton_3->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200", Q_NULLPTR));
        delete_pushButton_3->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        save_pushButton_3->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
        search_pushButton_3->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\345\255\246\347\224\237\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        add_pushButton->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", Q_NULLPTR));
        delete_pushButton->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        search_pushButton->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", Q_NULLPTR));
        save_pushButton->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
        cancel_pushButton->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\346\225\231\345\270\210\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", Q_NULLPTR));
        welcome_label->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\357\274\232", Q_NULLPTR));
        show_admin_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\357\274\232", Q_NULLPTR));
        show_student_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\220\214\345\255\246\347\231\273\345\275\225", Q_NULLPTR));
        save_pushButton_4->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
        delete_pushButton_4->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        search_pushButton_4->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", Q_NULLPTR));
        cancel_pushButton_4->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200", Q_NULLPTR));
        add_pushButton_4->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\357\274\232", Q_NULLPTR));
        show_teacher_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\350\200\201\345\270\210\347\231\273\345\275\225", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE



#endif // UI_H
