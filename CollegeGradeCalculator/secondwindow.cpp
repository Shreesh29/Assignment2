#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <iostream>
#include <cmath>

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

     // CONNECTIONS
     QObject::connect(SecondWindow::ui->horizontalSlider,   SIGNAL( valueChanged(int)), this, SLOT(hw1score(int)      ));
     QObject::connect(SecondWindow::ui->horizontalSlider_2, SIGNAL( valueChanged(int)), this, SLOT(hw2score(int)      ));
     QObject::connect(SecondWindow::ui->horizontalSlider_3, SIGNAL( valueChanged(int)), this, SLOT(hw3score(int)      ));
     QObject::connect(SecondWindow::ui->horizontalSlider_7, SIGNAL( valueChanged(int)), this, SLOT(hw4score(int)      ));
     QObject::connect(SecondWindow::ui->horizontalSlider_8, SIGNAL( valueChanged(int)), this, SLOT(hw5score(int)      ));
     QObject::connect(SecondWindow::ui->horizontalSlider_4, SIGNAL( valueChanged(int)), this, SLOT(midterm1score(int) ));
     QObject::connect(SecondWindow::ui->horizontalSlider_5, SIGNAL( valueChanged(int)), this, SLOT(midterm2score(int) ));
     QObject::connect(SecondWindow::ui->horizontalSlider_6, SIGNAL( valueChanged(int)), this, SLOT(finalscore(int)    ));

     //Caluculate button connection
      QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(calculate() ));

      //Show final grade connection
      QObject::connect(this, SIGNAL(show_grade()), this, SLOT(final_grade()) );

}

//SLOTS
void SecondWindow::hw1score(int value) {
    hw1 = value;
}
void SecondWindow::hw2score(int value) {
    hw2 = value;
}
void SecondWindow::hw3score(int value) {
    hw3 = value;
}
void SecondWindow::hw4score(int value) {
    hw4 = value;
}
void SecondWindow::hw5score(int value) {
    hw5 = value;
}
void SecondWindow::midterm1score(int value) {
    midterm1 = value;
}
void SecondWindow::midterm2score(int value) {
    midterm2 = value;
}
void SecondWindow::finalscore(int value) {
    final = value;
}
void SecondWindow::calculate() {

raw_score = static_cast<double>( 1 + (30*(hw1+hw2+hw3+hw4+hw5)/500) + (30*(midterm1 + midterm2)/200) + (40*(final)/100));
ui->label_7->setText(QString::number(raw_score));
 emit show_grade();
    return;
}

void SecondWindow::final_grade() {
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

SecondWindow::~SecondWindow()
{
    delete ui;
}
