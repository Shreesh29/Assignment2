#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <cmath>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int hw1 = 0;
    int hw2 = 0;
    int hw3 = 0;
    int midterm1 = 0;
    int final = 0;
    int final_project = 0;
    double extra_credit = 0.0;
    double raw_score = 0.0;
    scheme1 = false;
    scheme2 = false;

    //CONNECTIONS
     QObject::connect(ui->horizontalSlider, SIGNAL( valueChanged(int)), this, SLOT(hw1score(int) ));
     QObject::connect(ui->horizontalSlider_2, &QSlider::valueChanged, this, &MainWindow::hw2score);
     QObject::connect(ui->horizontalSlider_3, SIGNAL( valueChanged(int)), this, SLOT(hw3score(int) ));
     QObject::connect(ui->horizontalSlider_4, SIGNAL( valueChanged(int)), this, SLOT(midtermscore(int) ));
     QObject::connect(ui->horizontalSlider_5, SIGNAL( valueChanged(int)), this, SLOT(finalscore(int) ));
     QObject::connect(ui->horizontalSlider_6, SIGNAL( valueChanged(int)), this, SLOT(finalprojectscore(int) ));
     QObject::connect(ui->doubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(extracredit(double) ));

     //Connecting RadioButtons
     QObject::connect(ui->radioButton, SIGNAL(clicked()), this, SLOT(scheme_1()) );
     QObject::connect(ui->radioButton_2, SIGNAL(clicked()), this, SLOT(scheme_2()) );

     //Connecting CalculateButton
     QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(calculate()) );

}

//SLOTS

void MainWindow::hw1score(int value) {
    hw1 = value;
   // (ui->label)->setText(QString::number(hw1));
}

void MainWindow::hw2score(int value) {
    hw2 = value;
}


void MainWindow::hw3score(int value){
    hw3 = value;
}

void MainWindow::midtermscore(int value){
    midterm1 = value;
}


void MainWindow::finalscore(int value){
    final = value;
}


void MainWindow::finalprojectscore(int value){
    final_project = value;
}


void MainWindow::extracredit(double value){
    extra_credit = value;
}

void MainWindow::scheme_1(){
    scheme1 = true;
    scheme2 = false;
}

void MainWindow::scheme_2(){
    scheme2 = true;
    scheme1 = false;
}

void MainWindow::calculate() { //calculate homework score and display raw score on the window
 if(scheme1) {

     double homeworks = static_cast<double>(hw1) + static_cast<double>(hw2) + static_cast<double>(hw3);
     double homework = 25*(homeworks)/300;
     double midterm = 0.20*(static_cast<double>(midterm1));
     double finall = 0.20*(static_cast<double>(final));
     double finalp = 0.35*(static_cast<double>(final_project));
     raw_score = homework + midterm + finall + finalp + extra_credit;
    // (ui->label)->setText(QString::number(homework)); // for testing code above
     (ui->label_7)->setText(QString::number(raw_score));
    }
 else if (scheme2) {
     double homeworks = static_cast<double>(hw1) + static_cast<double>(hw2) + static_cast<double>(hw3);
     double finall = 0;
     double homework = 25*(homeworks)/300;
     if (midterm1 > final) {
         finall = 0.30*(static_cast<double>(midterm1));
     }
     else {
         finall = 0.30*(static_cast<double>(final));
     }
     double finalp = 0.44*(static_cast<double>(final_project));
     raw_score = homework + finall + finalp + extra_credit;
     ui->label_7->setText(QString::number(raw_score));
    }
}

// DESTRUCTOR
MainWindow::~MainWindow()
{
    delete ui;
}

