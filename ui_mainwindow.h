/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *ip_text;
    QLineEdit *port_text;
    QLineEdit *username_text;
    QLineEdit *password_text;
    QPushButton *playButton;
    QPushButton *left_button;
    QPushButton *up_button;
    QPushButton *downButton;
    QPushButton *rightButton;
    QPushButton *zoomInButton;
    QPushButton *zoomOutButton;
    QPushButton *focusAddButton;
    QPushButton *focusDecButton;
    QPushButton *captureButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(673, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 21, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 20, 31, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 20, 71, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(400, 20, 61, 17));
        ip_text = new QLineEdit(centralWidget);
        ip_text->setObjectName(QStringLiteral("ip_text"));
        ip_text->setGeometry(QRect(40, 10, 101, 27));
        port_text = new QLineEdit(centralWidget);
        port_text->setObjectName(QStringLiteral("port_text"));
        port_text->setGeometry(QRect(170, 10, 51, 27));
        username_text = new QLineEdit(centralWidget);
        username_text->setObjectName(QStringLiteral("username_text"));
        username_text->setGeometry(QRect(280, 10, 113, 27));
        password_text = new QLineEdit(centralWidget);
        password_text->setObjectName(QStringLiteral("password_text"));
        password_text->setGeometry(QRect(460, 10, 113, 27));
        password_text->setEchoMode(QLineEdit::Password);
        playButton = new QPushButton(centralWidget);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setGeometry(QRect(580, 10, 85, 27));
        left_button = new QPushButton(centralWidget);
        left_button->setObjectName(QStringLiteral("left_button"));
        left_button->setGeometry(QRect(64, 90, 51, 27));
        up_button = new QPushButton(centralWidget);
        up_button->setObjectName(QStringLiteral("up_button"));
        up_button->setGeometry(QRect(120, 60, 61, 27));
        downButton = new QPushButton(centralWidget);
        downButton->setObjectName(QStringLiteral("downButton"));
        downButton->setGeometry(QRect(120, 120, 61, 27));
        rightButton = new QPushButton(centralWidget);
        rightButton->setObjectName(QStringLiteral("rightButton"));
        rightButton->setGeometry(QRect(180, 90, 61, 27));
        zoomInButton = new QPushButton(centralWidget);
        zoomInButton->setObjectName(QStringLiteral("zoomInButton"));
        zoomInButton->setGeometry(QRect(40, 170, 81, 27));
        zoomOutButton = new QPushButton(centralWidget);
        zoomOutButton->setObjectName(QStringLiteral("zoomOutButton"));
        zoomOutButton->setGeometry(QRect(160, 170, 85, 27));
        focusAddButton = new QPushButton(centralWidget);
        focusAddButton->setObjectName(QStringLiteral("focusAddButton"));
        focusAddButton->setGeometry(QRect(40, 200, 81, 27));
        focusDecButton = new QPushButton(centralWidget);
        focusDecButton->setObjectName(QStringLiteral("focusDecButton"));
        focusDecButton->setGeometry(QRect(160, 200, 85, 27));
        captureButton = new QPushButton(centralWidget);
        captureButton->setObjectName(QStringLiteral("captureButton"));
        captureButton->setGeometry(QRect(390, 120, 85, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 673, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "IP:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Port:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Username:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Password:", 0));
        ip_text->setText(QApplication::translate("MainWindow", "192.168.1.108", 0));
        port_text->setText(QApplication::translate("MainWindow", "37777", 0));
        username_text->setText(QApplication::translate("MainWindow", "admin", 0));
        password_text->setText(QApplication::translate("MainWindow", "1234abcd", 0));
        playButton->setText(QApplication::translate("MainWindow", "Play", 0));
        left_button->setText(QApplication::translate("MainWindow", "LEFT", 0));
        up_button->setText(QApplication::translate("MainWindow", "UP", 0));
        downButton->setText(QApplication::translate("MainWindow", "DOWN", 0));
        rightButton->setText(QApplication::translate("MainWindow", "RIGHT", 0));
        zoomInButton->setText(QApplication::translate("MainWindow", "ZOOM IN", 0));
        zoomOutButton->setText(QApplication::translate("MainWindow", "ZOOM OUT", 0));
        focusAddButton->setText(QApplication::translate("MainWindow", "FOCUS ADD", 0));
        focusDecButton->setText(QApplication::translate("MainWindow", "FOCUS DEC", 0));
        captureButton->setText(QApplication::translate("MainWindow", "CAPTURE", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
