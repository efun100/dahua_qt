#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_playButton_clicked();

    void on_left_button_pressed();

    void on_left_button_released();

    void on_up_button_pressed();

    void on_up_button_released();

    void on_downButton_pressed();

    void on_downButton_released();

    void on_rightButton_pressed();

    void on_rightButton_released();

    void on_zoomInButton_pressed();

    void on_zoomInButton_released();

    void on_zoomOutButton_pressed();

    void on_zoomOutButton_released();

    void on_focusAddButton_pressed();

    void on_focusAddButton_released();

    void on_focusDecButton_pressed();

    void on_focusDecButton_released();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
