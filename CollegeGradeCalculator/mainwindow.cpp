#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <cmath>
#include "secondwindow.h"
#include <QComboBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

     hw1 = 0;
     hw2 = 0;
     hw3 = 0;
     midterm1 = 0;
     final = 0;
     final_project = 0;
     extra_credit = 0;
     raw_score = 0;
    scheme1 = false;
    scheme2 = false;
     ui->setupUi(this);

    //CONNECTIONS
     QObject::connect(ui->horizontalSlider, SIGNAL( valueChanged(int)), this, SLOT(hw1score(int) ));
     QObject::connect(ui->horizontalSlider_2, &QSlider::valueChanged, this, &MainWindow::hw2score);
     QObject::connect(ui->horizontalSlider_3, SIGNAL( valueChanged(int)), this, SLOT(hw3score(int) ));
     QObject::connect(ui->horizontalSlider_4, SIGNAL( valueChanged(int)), this, SLOT(midtermscore(int) ));
     QObject::connect(ui->horizontalSlider_5, SIGNAL( valueChanged(int)), this, SLOT(finalscore(int) ));
     QObject::connect(ui->horizontalSlider_6, SIGNAL( valueChanged(int)), this, SLOT(finalprojectscore(int) ));
     QObject::connect(ui->doubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(extracredit(double) ));

     // Connecting Combobox to open second window
     QObject::connect(ui->comboBox, SIGNAL(activated(int)), this,  SLOT(open_window()) );

     //Connecting RadioButtons
     QObject::connect(ui->radioButton, SIGNAL(clicked()), this, SLOT(scheme_1()) );
     QObject::connect(ui->radioButton_2, SIGNAL(clicked()), this, SLOT(scheme_2()) );

     //Connecting CalculateButton
     QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(calculate()) );

     //Connecting show grade signal
     QObject::connect(this, SIGNAL(show_grade()), this, SLOT(final_grade()) );

}

//SLOTS

void MainWindow::hw1score(int value) {
    hw1 = value;
   //(ui->label)->setText(QString::number(hw1)); TO TEST
  // (ui->final_Grade)->setText(QString::number(hw1 + hw2 + hw3)); TO TEST
}

void MainWindow::hw2score(int value) {
    hw2 = value;
    //(ui->final_Grade)->setText(QString::number(hw1 + hw2 + hw3));
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

// Radio Button calculate
//void MainWindow::calculate2() {
//    if(scheme1) {
//        raw_score = 25*(static_cast<double>(hw1 + hw2 + hw3))/300 + 0.20*(static_cast<double>(midterm1)) + 0.20*(static_cast<double>(final)) + 0.35*(static_cast<double>(final_project)) + extra_credit;
//         // (ui->label)->setText(QString::number(raw_score)); // TO TEST
//          (ui->label_7)->setText(QString::number(raw_score));
//       }
//    else if (scheme2) { // if user chooses scheme 2
//        double finalp = 0.44*(final_project);
//        if (midterm1 > final) { // if midterm is greater than final
//            double finalp = 0.44*(final_project);
//            raw_score = 25*(static_cast<double>(hw1 + hw2 + hw3))/300 + 0.30*(static_cast<double>(midterm1)) + finalp + extra_credit;
//            ui->label_7->setText(QString::number(raw_score));
//            return;
//           }
//        else { // if midterm is less than final
//            raw_score = 25*(static_cast<double>(hw1 + hw2 + hw3))/300 + 0.30*(static_cast<double>(final)) + finalp + extra_credit;
//            ui->label_7->setText(QString::number(raw_score));
//            return;
//              }
//       }
//    return;
//}


void MainWindow::calculate() { //calculate homework score and display raw score on the window
 if(scheme1) {
     raw_score = 25*(static_cast<double>(hw1 + hw2 + hw3))/300 + 0.20*(static_cast<double>(midterm1)) + 0.20*(static_cast<double>(final)) + 0.35*(static_cast<double>(final_project)) + extra_credit;
      // (ui->label)->setText(QString::number(raw_score)); // TO TEST
       (ui->label_7)->setText(QString::number(raw_score));
    }
 else if (scheme2) { // if user chooses scheme 2
     double finalp = 0.44*(final_project);
     if (midterm1 > final) { // if midterm is greater than final
         double finalp = 0.44*(final_project);
         raw_score = 25*(static_cast<double>(hw1 + hw2 + hw3))/300 + 0.30*(static_cast<double>(midterm1)) + finalp + extra_credit;
         ui->label_7->setText(QString::number(raw_score));
         return;
        }
     else { // if midterm is less than final
         raw_score = 25*(static_cast<double>(hw1 + hw2 + hw3))/300 + 0.30*(static_cast<double>(final)) + finalp + extra_credit;
         ui->label_7->setText(QString::number(raw_score));
         return;
           }
    }
 emit show_grade();
 return;
}

void MainWindow::final_grade() {
    if (raw_score <= 50) {
        ui->label_8->setText("D");
    }
    else if (raw_score > 50 && raw_score < 70) {
         ui->label_8->setText("C");
    }
    else if (raw_score >= 70 && raw_score <80) {
         ui->label_8->setText("B");
    }
    else if (raw_score >= 80 && raw_score < 100) {
         ui->label_8->setText("A");
    }
    else if (raw_score == 100) {
         ui->label_8->setText("A+");
    }
    return;
}


void MainWindow::open_window() {
   w2 = new SecondWindow(this);
   w2->show();
}

// DESTRUCTOR
MainWindow::~MainWindow()
{
    delete ui;
}

