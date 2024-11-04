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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "zimin_widget.h"

QT_BEGIN_NAMESPACE

class Ui_zimin_lab
{
public:
    QAction *actionOpen;
    QAction *actionClear;
    QAction *actionSave;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    Zimin_Widget *ziminWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *zimin_lab)
    {
        if (zimin_lab->objectName().isEmpty())
            zimin_lab->setObjectName("zimin_lab");
        zimin_lab->resize(800, 600);
        actionOpen = new QAction(zimin_lab);
        actionOpen->setObjectName("actionOpen");
        actionClear = new QAction(zimin_lab);
        actionClear->setObjectName("actionClear");
        actionSave = new QAction(zimin_lab);
        actionSave->setObjectName("actionSave");
        centralwidget = new QWidget(zimin_lab);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        ziminWidget = new Zimin_Widget();
        ziminWidget->setObjectName("ziminWidget");
        ziminWidget->setGeometry(QRect(0, 0, 776, 525));
        scrollArea->setWidget(ziminWidget);

        verticalLayout->addWidget(scrollArea);

        zimin_lab->setCentralWidget(centralwidget);
        menubar = new QMenuBar(zimin_lab);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        zimin_lab->setMenuBar(menubar);
        statusbar = new QStatusBar(zimin_lab);
        statusbar->setObjectName("statusbar");
        zimin_lab->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionOpen);
        menu->addAction(actionClear);
        menu->addAction(actionSave);

        retranslateUi(zimin_lab);

        QMetaObject::connectSlotsByName(zimin_lab);
    } // setupUi

    void retranslateUi(QMainWindow *zimin_lab)
    {
        zimin_lab->setWindowTitle(QCoreApplication::translate("zimin_lab", "zimin_lab", nullptr));
        actionOpen->setText(QCoreApplication::translate("zimin_lab", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        actionClear->setText(QCoreApplication::translate("zimin_lab", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        actionSave->setText(QCoreApplication::translate("zimin_lab", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("zimin_lab", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zimin_lab: public Ui_zimin_lab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZIMIN_LAB_H
