/********************************************************************************
** Form generated from reading UI file 'zimin_lab.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZIMIN_LAB_H
#define UI_ZIMIN_LAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zimin_lab
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *zimin_lab)
    {
        if (zimin_lab->objectName().isEmpty())
            zimin_lab->setObjectName("zimin_lab");
        zimin_lab->resize(800, 600);
        centralwidget = new QWidget(zimin_lab);
        centralwidget->setObjectName("centralwidget");
        zimin_lab->setCentralWidget(centralwidget);
        menubar = new QMenuBar(zimin_lab);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        zimin_lab->setMenuBar(menubar);
        statusbar = new QStatusBar(zimin_lab);
        statusbar->setObjectName("statusbar");
        zimin_lab->setStatusBar(statusbar);

        retranslateUi(zimin_lab);

        QMetaObject::connectSlotsByName(zimin_lab);
    } // setupUi

    void retranslateUi(QMainWindow *zimin_lab)
    {
        zimin_lab->setWindowTitle(QCoreApplication::translate("zimin_lab", "zimin_lab", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zimin_lab: public Ui_zimin_lab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZIMIN_LAB_H
