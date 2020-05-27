/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_8;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSlider *horizontalSlider_6;
    QSpinBox *spinBox_6;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *raw_Score;
    QLabel *label_7;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSlider *horizontalSlider_3;
    QSpinBox *spinBox_3;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSlider *horizontalSlider_5;
    QSpinBox *spinBox_5;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSlider *horizontalSlider_4;
    QSpinBox *spinBox_4;
    QLabel *label_9;
    QComboBox *comboBox;
    QLabel *final_Grade;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSlider *horizontalSlider_2;
    QSpinBox *spinBox_2;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QSlider *horizontalSlider_7;
    QSpinBox *spinBox_7;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QSlider *horizontalSlider_8;
    QSpinBox *spinBox_8;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *extra_Credit;
    QLabel *label_10;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QString::fromUtf8("SecondWindow"));
        SecondWindow->resize(800, 600);
        centralwidget = new QWidget(SecondWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(380, 430, 41, 16));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 90, 281, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimumSize(QSize(36, 21));
        spinBox->setMaximum(100);

        horizontalLayout->addWidget(spinBox);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(370, 190, 341, 41));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSlider_6 = new QSlider(layoutWidget_2);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setMaximum(100);
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_6);

        spinBox_6 = new QSpinBox(layoutWidget_2);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setMaximum(100);

        horizontalLayout_6->addWidget(spinBox_6);

        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(300, 390, 151, 20));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        raw_Score = new QLabel(layoutWidget_3);
        raw_Score->setObjectName(QString::fromUtf8("raw_Score"));

        horizontalLayout_8->addWidget(raw_Score);

        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        layoutWidget_4 = new QWidget(centralwidget);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(60, 190, 281, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        horizontalSlider_3 = new QSlider(layoutWidget_4);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(100);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_3);

        spinBox_3 = new QSpinBox(layoutWidget_4);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMaximum(100);

        horizontalLayout_3->addWidget(spinBox_3);

        layoutWidget_5 = new QWidget(centralwidget);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(370, 140, 341, 41));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        horizontalSlider_5 = new QSlider(layoutWidget_5);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setMaximum(100);
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_5);

        spinBox_5 = new QSpinBox(layoutWidget_5);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setMaximum(100);

        horizontalLayout_5->addWidget(spinBox_5);

        layoutWidget_6 = new QWidget(centralwidget);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(370, 90, 341, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSlider_4 = new QSlider(layoutWidget_6);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setMaximum(100);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_4);

        spinBox_4 = new QSpinBox(layoutWidget_6);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setMaximum(100);

        horizontalLayout_4->addWidget(spinBox_4);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(260, 0, 61, 31));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(310, 0, 221, 32));
        final_Grade = new QLabel(centralwidget);
        final_Grade->setObjectName(QString::fromUtf8("final_Grade"));
        final_Grade->setGeometry(QRect(300, 430, 72, 16));
        layoutWidget_7 = new QWidget(centralwidget);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(60, 140, 281, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSlider_2 = new QSlider(layoutWidget_7);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_2);

        spinBox_2 = new QSpinBox(layoutWidget_7);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMaximum(100);

        horizontalLayout_2->addWidget(spinBox_2);

        layoutWidget_8 = new QWidget(centralwidget);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(60, 240, 281, 41));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_8);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_9->addWidget(label_11);

        horizontalSlider_7 = new QSlider(layoutWidget_8);
        horizontalSlider_7->setObjectName(QString::fromUtf8("horizontalSlider_7"));
        horizontalSlider_7->setMaximum(100);
        horizontalSlider_7->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSlider_7);

        spinBox_7 = new QSpinBox(layoutWidget_8);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
        spinBox_7->setMaximum(100);

        horizontalLayout_9->addWidget(spinBox_7);

        layoutWidget_9 = new QWidget(centralwidget);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(60, 290, 281, 41));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_9);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_10->addWidget(label_12);

        horizontalSlider_8 = new QSlider(layoutWidget_9);
        horizontalSlider_8->setObjectName(QString::fromUtf8("horizontalSlider_8"));
        horizontalSlider_8->setMaximum(100);
        horizontalSlider_8->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(horizontalSlider_8);

        spinBox_8 = new QSpinBox(layoutWidget_9);
        spinBox_8->setObjectName(QString::fromUtf8("spinBox_8"));
        spinBox_8->setMaximum(100);

        horizontalLayout_10->addWidget(spinBox_8);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(370, 240, 201, 41));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        extra_Credit = new QLabel(widget);
        extra_Credit->setObjectName(QString::fromUtf8("extra_Credit"));

        horizontalLayout_7->addWidget(extra_Credit);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_7->addWidget(label_10);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 350, 112, 32));
        SecondWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SecondWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SecondWindow->setStatusBar(statusbar);

        retranslateUi(SecondWindow);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), spinBox_2, SLOT(setValue(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), horizontalSlider_2, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), spinBox_3, SLOT(setValue(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), horizontalSlider_3, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_7, SIGNAL(valueChanged(int)), spinBox_7, SLOT(setValue(int)));
        QObject::connect(spinBox_7, SIGNAL(valueChanged(int)), horizontalSlider_7, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_8, SIGNAL(valueChanged(int)), spinBox_8, SLOT(setValue(int)));
        QObject::connect(spinBox_8, SIGNAL(valueChanged(int)), horizontalSlider_8, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_4, SIGNAL(valueChanged(int)), spinBox_4, SLOT(setValue(int)));
        QObject::connect(spinBox_4, SIGNAL(valueChanged(int)), horizontalSlider_4, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_5, SIGNAL(valueChanged(int)), spinBox_5, SLOT(setValue(int)));
        QObject::connect(spinBox_5, SIGNAL(valueChanged(int)), horizontalSlider_5, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_6, SIGNAL(valueChanged(int)), spinBox_6, SLOT(setValue(int)));
        QObject::connect(spinBox_6, SIGNAL(valueChanged(int)), horizontalSlider_6, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "MainWindow", nullptr));
        label_8->setText(QCoreApplication::translate("SecondWindow", "Letter ", nullptr));
        label->setText(QCoreApplication::translate("SecondWindow", "Quiz 1", nullptr));
        label_6->setText(QCoreApplication::translate("SecondWindow", "Final Exam", nullptr));
        raw_Score->setText(QCoreApplication::translate("SecondWindow", "Raw Score: ", nullptr));
        label_7->setText(QCoreApplication::translate("SecondWindow", "N/A", nullptr));
        label_5->setText(QCoreApplication::translate("SecondWindow", "Quiz 3", nullptr));
        label_4->setText(QCoreApplication::translate("SecondWindow", "Midterm 2", nullptr));
        label_3->setText(QCoreApplication::translate("SecondWindow", "Midterm 1", nullptr));
        label_9->setText(QCoreApplication::translate("SecondWindow", "Course:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("SecondWindow", "Mathematics 115A", nullptr));

        final_Grade->setText(QCoreApplication::translate("SecondWindow", "Final Grade:", nullptr));
        label_2->setText(QCoreApplication::translate("SecondWindow", "Quiz 2", nullptr));
        label_11->setText(QCoreApplication::translate("SecondWindow", "Quiz 4", nullptr));
        label_12->setText(QCoreApplication::translate("SecondWindow", "Quiz 5", nullptr));
        extra_Credit->setText(QCoreApplication::translate("SecondWindow", " Extra Credit (%):", nullptr));
        label_10->setText(QCoreApplication::translate("SecondWindow", "1%", nullptr));
        pushButton->setText(QCoreApplication::translate("SecondWindow", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
