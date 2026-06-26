/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *gora_3;
    QHBoxLayout *gorna;
    QSpacerItem *lewo_2;
    QVBoxLayout *ip;
    QSpacerItem *gora_2;
    QLabel *label;
    QLineEdit *ip_edit;
    QSpacerItem *dol_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *port;
    QSpacerItem *gora;
    QLabel *label_2;
    QLineEdit *port_edit;
    QSpacerItem *dol;
    QSpacerItem *prawo_2;
    QHBoxLayout *dolna;
    QSpacerItem *lewo;
    QPushButton *przycisk;
    QSpacerItem *prawo;
    QSpacerItem *dol_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow  {\n"
"	border-image: url(background.jpg);\n"
"}\n"
"QLabel {\n"
"	color: red;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gora_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(gora_3);

        gorna = new QHBoxLayout();
        gorna->setObjectName("gorna");
        lewo_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gorna->addItem(lewo_2);

        ip = new QVBoxLayout();
        ip->setObjectName("ip");
        gora_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        ip->addItem(gora_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka")});
        font.setPointSize(15);
        font.setBold(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(false);
        label->setFont(font);

        ip->addWidget(label);

        ip_edit = new QLineEdit(centralwidget);
        ip_edit->setObjectName("ip_edit");

        ip->addWidget(ip_edit);

        dol_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        ip->addItem(dol_2);

        ip->setStretch(0, 2);
        ip->setStretch(2, 2);
        ip->setStretch(3, 1);

        gorna->addLayout(ip);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gorna->addItem(horizontalSpacer);

        port = new QVBoxLayout();
        port->setObjectName("port");
        gora = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        port->addItem(gora);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka")});
        font1.setPointSize(15);
        label_2->setFont(font1);

        port->addWidget(label_2);

        port_edit = new QLineEdit(centralwidget);
        port_edit->setObjectName("port_edit");

        port->addWidget(port_edit);

        dol = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        port->addItem(dol);

        port->setStretch(0, 2);
        port->setStretch(2, 2);
        port->setStretch(3, 1);

        gorna->addLayout(port);

        prawo_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gorna->addItem(prawo_2);

        gorna->setStretch(0, 3);
        gorna->setStretch(1, 4);
        gorna->setStretch(3, 4);
        gorna->setStretch(4, 3);

        verticalLayout_2->addLayout(gorna);

        dolna = new QHBoxLayout();
        dolna->setObjectName("dolna");
        lewo = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        dolna->addItem(lewo);

        przycisk = new QPushButton(centralwidget);
        przycisk->setObjectName("przycisk");
        przycisk->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	height: 70px;\n"
"	border-radius: 20px;\n"
"	background-color: rgb(10, 180, 10);\n"
"	color: rgb(10, 10, 255);\n"
"	font: 700 12pt \"Sitka\";\n"
"	padding: 10px;\n"
"	border: black solid 2px;\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(10, 150, 10);\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: rgb(10, 110, 10);\n"
"}"));

        dolna->addWidget(przycisk);

        prawo = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        dolna->addItem(prawo);

        dolna->setStretch(0, 4);
        dolna->setStretch(1, 1);
        dolna->setStretch(2, 4);

        verticalLayout_2->addLayout(dolna);

        dol_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(dol_3);

        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Podawaj IP", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Podawaj Port", nullptr));
        przycisk->setText(QCoreApplication::translate("MainWindow", "Wpierdol bombe !!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
