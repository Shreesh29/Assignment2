#include "secondwindow.h"
#include "ui_secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
     hw1 = 0;
     hw2 = 0;
     hw3 = 0;
     hw4 = 0;
     hw5 = 0;
     midterm1 = 0;
     midterm2 = 0;
     final = 0;
     raw_score = 0;















}

SecondWindow::~SecondWindow()
{
    delete ui;
}
