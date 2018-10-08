#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "include/dahua/dhnetsdk.h"

using namespace std;
extern LLONG lLoginHandle;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int dahuaplay(const char *szIpAddr, long nPort, const char *szUser, const char *szPwd);
void MainWindow::on_playButton_clicked()
{
    string dev_ip = ui->ip_text->text().toStdString();
    long dev_port = ui->port_text->text().toLong();
    string dev_username = ui->username_text->text().toStdString();
    string dev_pass = ui->password_text->text().toStdString();
    dahuaplay(dev_ip.c_str(), dev_port, dev_username.c_str(), dev_pass.c_str());
}

void MainWindow::on_left_button_pressed()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_LEFT_CONTROL, 2, 2, 2, false);
}

void MainWindow::on_left_button_released()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_LEFT_CONTROL, 2, 2, 2, true);
}

void MainWindow::on_up_button_pressed()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_RIGHT_CONTROL, 2, 2, 2, false);
}

void MainWindow::on_up_button_released()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_RIGHT_CONTROL, 2, 2, 2, true);
}

void MainWindow::on_downButton_pressed()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_DOWN_CONTROL, 2, 2, 2, false);
}

void MainWindow::on_downButton_released()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_DOWN_CONTROL, 2, 2, 2, true);
}

void MainWindow::on_rightButton_pressed()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_RIGHT_CONTROL, 2, 2, 2, false);
}

void MainWindow::on_rightButton_released()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_RIGHT_CONTROL, 2, 2, 2, true);
}

void MainWindow::on_zoomInButton_pressed()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_ZOOM_ADD_CONTROL, 2, 2, 2, false);
}

void MainWindow::on_zoomInButton_released()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_ZOOM_ADD_CONTROL, 2, 2, 2, true);
}

void MainWindow::on_zoomOutButton_pressed()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_ZOOM_DEC_CONTROL, 2, 2, 2, false);
}

void MainWindow::on_zoomOutButton_released()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_ZOOM_DEC_CONTROL, 2, 2, 2, true);
}

void MainWindow::on_focusAddButton_pressed()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_FOCUS_ADD_CONTROL, 2, 2, 2, false);
}

void MainWindow::on_focusAddButton_released()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_FOCUS_ADD_CONTROL, 2, 2, 2, true);
}

void MainWindow::on_focusDecButton_pressed()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_FOCUS_DEC_CONTROL, 2, 2, 2, false);
}

void MainWindow::on_focusDecButton_released()
{
    cout << __func__ << endl;
    CLIENT_DHPTZControlEx2(lLoginHandle, 0, DH_PTZ_FOCUS_DEC_CONTROL, 2, 2, 2, true);
}
