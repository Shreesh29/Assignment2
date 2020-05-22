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

public slots:

    // SLOTS to receive the values for the homework scores
    void hw1score(int);
    void hw2score(int);
    void hw3score(int);
    void hw4score(int);
    void hw5score(int);
    void midterm1score(int);
    void midterm2score(int);
    void finalscore(int);
    void calculate();
    void final_grade();

signals:
    void show_grade();


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
