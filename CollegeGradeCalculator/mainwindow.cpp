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
}

void MainWindow::scheme_2(){
    scheme2 = true;
}


void MainWindow::calculate() {
if(scheme1 == true) {


    }
else if (scheme2 == true) {

    }
}


// DESTRUCTOR
MainWindow::~MainWindow()
{
    delete ui;
}

