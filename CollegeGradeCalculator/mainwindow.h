#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int hw1;

public slots:

    // SLOTS to receive the values for the homework scores
    void hw1score(int);
    void hw2score(int);
    void hw3score(int);
    void midtermscore(int);
    void finalscore(int);
    void finalprojectscore(int);
    void extracredit(double);
    void scheme_1();
    void scheme_2();
    void calculate();

private:
    Ui::MainWindow *ui;

    int hw2;
    int hw3;
    int midterm1;
    int final;
    int final_project;
    double extra_credit;
    double raw_score;
    char grade;
    bool scheme1;
    bool scheme2;

};
#endif // MAINWINDOW_H
