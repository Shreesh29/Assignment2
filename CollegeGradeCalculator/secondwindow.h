#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();

private:
    Ui::SecondWindow *ui;
    int hw1;
    int hw2;
    int hw3;
    int hw4;
    int hw5;
    int midterm1;
    int midterm2;
    int final;
    double raw_score;






};

#endif // SECONDWINDOW_H
