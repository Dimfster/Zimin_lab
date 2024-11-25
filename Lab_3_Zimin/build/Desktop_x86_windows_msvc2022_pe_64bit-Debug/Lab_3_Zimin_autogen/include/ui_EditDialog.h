/********************************************************************************
** Form generated from reading UI file 'EditDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDIALOG_H
#define UI_EDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *addProduct;
    QPushButton *addElectronics;
    QPushButton *delete_2;
    QPushButton *edit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEdit_5;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditDialog)
    {
        if (EditDialog->objectName().isEmpty())
            EditDialog->setObjectName("EditDialog");
        EditDialog->resize(635, 523);
        verticalLayout = new QVBoxLayout(EditDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addProduct = new QPushButton(EditDialog);
        addProduct->setObjectName("addProduct");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ListAdd));
        addProduct->setIcon(icon);
        addProduct->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(addProduct);

        addElectronics = new QPushButton(EditDialog);
        addElectronics->setObjectName("addElectronics");
        addElectronics->setIcon(icon);

        horizontalLayout->addWidget(addElectronics);

        delete_2 = new QPushButton(EditDialog);
        delete_2->setObjectName("delete_2");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        delete_2->setIcon(icon1);

        horizontalLayout->addWidget(delete_2);

        edit = new QPushButton(EditDialog);
        edit->setObjectName("edit");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::DocumentProperties));
        edit->setIcon(icon2);

        horizontalLayout->addWidget(edit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        listWidget = new QListWidget(EditDialog);
        listWidget->setObjectName("listWidget");

        horizontalLayout_2->addWidget(listWidget);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(EditDialog);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        lineEdit = new QLineEdit(EditDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(false);
        lineEdit->setReadOnly(false);

        horizontalLayout_4->addWidget(lineEdit);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_2 = new QLabel(EditDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        lineEdit_2 = new QLineEdit(EditDialog);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(false);
        lineEdit_2->setReadOnly(false);

        horizontalLayout_5->addWidget(lineEdit_2);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_3 = new QLabel(EditDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_6->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        lineEdit_3 = new QLineEdit(EditDialog);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setEnabled(false);
        lineEdit_3->setReadOnly(false);

        horizontalLayout_6->addWidget(lineEdit_3);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_4 = new QLabel(EditDialog);
        label_4->setObjectName("label_4");

        horizontalLayout_7->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        lineEdit_4 = new QLineEdit(EditDialog);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setEnabled(false);
        lineEdit_4->setReadOnly(false);

        horizontalLayout_7->addWidget(lineEdit_4);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_5 = new QLabel(EditDialog);
        label_5->setObjectName("label_5");

        horizontalLayout_8->addWidget(label_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        checkBox = new QCheckBox(EditDialog);
        checkBox->setObjectName("checkBox");
        checkBox->setEnabled(false);
        checkBox->setAutoFillBackground(false);
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::Battery));
        checkBox->setIcon(icon3);
        checkBox->setCheckable(true);
        checkBox->setChecked(false);
        checkBox->setTristate(false);

        horizontalLayout_8->addWidget(checkBox);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_6 = new QLabel(EditDialog);
        label_6->setObjectName("label_6");

        horizontalLayout_9->addWidget(label_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        lineEdit_5 = new QLineEdit(EditDialog);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setEnabled(false);
        lineEdit_5->setReadOnly(false);

        horizontalLayout_9->addWidget(lineEdit_5);


        verticalLayout_4->addLayout(horizontalLayout_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(EditDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_4->addWidget(buttonBox);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(EditDialog);

        QMetaObject::connectSlotsByName(EditDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDialog)
    {
        EditDialog->setWindowTitle(QCoreApplication::translate("EditDialog", "Dialog", nullptr));
        addProduct->setText(QCoreApplication::translate("EditDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 Product", nullptr));
        addElectronics->setText(QCoreApplication::translate("EditDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 Electronics", nullptr));
        delete_2->setText(QCoreApplication::translate("EditDialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        edit->setText(QCoreApplication::translate("EditDialog", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("EditDialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("EditDialog", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("EditDialog", "\320\246\320\265\320\275\320\260", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("EditDialog", "100000000", nullptr));
        label_4->setText(QCoreApplication::translate("EditDialog", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("EditDialog", "\320\221\320\260\321\202\320\260\321\200\320\265\321\217", nullptr));
        checkBox->setText(QCoreApplication::translate("EditDialog", "\320\225\321\201\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("EditDialog", "\320\222\320\265\321\201", nullptr));
        lineEdit_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditDialog: public Ui_EditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDIALOG_H
