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
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addProduct;
    QPushButton *addElectronics;
    QPushButton *delete_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelManufacor;
    QLineEdit *lineEditManufactor;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelPrice;
    QLineEdit *lineEditPrice;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelCategory;
    QLineEdit *lineEditCategory;
    QVBoxLayout *verticalLayout_10;
    QLabel *labelWeight;
    QLineEdit *lineEditWeight;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelBattery;
    QCheckBox *checkBoxBattery;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditDialog)
    {
        if (EditDialog->objectName().isEmpty())
            EditDialog->setObjectName("EditDialog");
        EditDialog->resize(843, 574);
        verticalLayout_4 = new QVBoxLayout(EditDialog);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        addProduct = new QPushButton(EditDialog);
        addProduct->setObjectName("addProduct");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ListAdd));
        addProduct->setIcon(icon);

        horizontalLayout_2->addWidget(addProduct);

        addElectronics = new QPushButton(EditDialog);
        addElectronics->setObjectName("addElectronics");
        addElectronics->setIcon(icon);

        horizontalLayout_2->addWidget(addElectronics);

        delete_2 = new QPushButton(EditDialog);
        delete_2->setObjectName("delete_2");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        delete_2->setIcon(icon1);

        horizontalLayout_2->addWidget(delete_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        listWidget = new QListWidget(EditDialog);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        labelName = new QLabel(EditDialog);
        labelName->setObjectName("labelName");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        font.setItalic(false);
        labelName->setFont(font);
        labelName->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;               /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font: bold 16px Arial;       /* \320\250\321\200\320\270\321\204\321\202 \320\270 \321\200\320\260\320\267\320\274\320\265\321\200 */\n"
"    border: 2px solid #212526;   /* \320\240\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;          /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"	padding: 5px;				 /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\271 \320\276\321\202\321\201\321\202\321\203\320\277 */\n"
"    background-color: #ecf0f1;   /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"}\n"
""));
        labelName->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(labelName);

        lineEditName = new QLineEdit(EditDialog);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: #000000;                /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: #ecf0f1;     /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    border: 1px solid #a3a3a3;     /* \320\240\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;            /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"    padding: 5px;                  /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    font: 14px \"Arial\";            /* \320\250\321\200\320\270\321\204\321\202 \320\270 \321\200\320\260\320\267\320\274\320\265\321\200 */\n"
"}"));
        lineEditName->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(lineEditName);


        verticalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        labelManufacor = new QLabel(EditDialog);
        labelManufacor->setObjectName("labelManufacor");
        labelManufacor->setFont(font);
        labelManufacor->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;               /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font: bold 16px Arial;       /* \320\250\321\200\320\270\321\204\321\202 \320\270 \321\200\320\260\320\267\320\274\320\265\321\200 */\n"
"    border: 2px solid #212526;   /* \320\240\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;          /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"	padding: 5px;				 /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\271 \320\276\321\202\321\201\321\202\321\203\320\277 */\n"
"    background-color: #ecf0f1;   /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"}"));
        labelManufacor->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(labelManufacor);

        lineEditManufactor = new QLineEdit(EditDialog);
        lineEditManufactor->setObjectName("lineEditManufactor");
        lineEditManufactor->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: #000000;                /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: #ecf0f1;     /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    border: 1px solid #a3a3a3;     /* \320\240\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;            /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"    padding: 5px;                  /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    font: 14px \"Arial\";            /* \320\250\321\200\320\270\321\204\321\202 \320\270 \321\200\320\260\320\267\320\274\320\265\321\200 */\n"
"}"));
        lineEditManufactor->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(lineEditManufactor);


        verticalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        labelPrice = new QLabel(EditDialog);
        labelPrice->setObjectName("labelPrice");
        labelPrice->setFont(font);
        labelPrice->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;               /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font: bold 16px Arial;       /* \320\250\321\200\320\270\321\204\321\202 \320\270 \321\200\320\260\320\267\320\274\320\265\321\200 */\n"
"    border: 2px solid #212526;   /* \320\240\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;          /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"	padding: 5px;				 /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\271 \320\276\321\202\321\201\321\202\321\203\320\277 */\n"
"    background-color: #ecf0f1;   /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"}"));
        labelPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(labelPrice);

        lineEditPrice = new QLineEdit(EditDialog);
        lineEditPrice->setObjectName("lineEditPrice");
        lineEditPrice->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: #000000;                /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: #ecf0f1;     /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    border: 1px solid #a3a3a3;     /* \320\240\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;            /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"    padding: 5px;                  /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    font: 14px \"Arial\";            /* \320\250\321\200\320\270\321\204\321\202 \320\270 \321\200\320\260\320\267\320\274\320\265\321\200 */\n"
"}"));
        lineEditPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(lineEditPrice);


        verticalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        labelCategory = new QLabel(EditDialog);
        labelCategory->setObjectName("labelCategory");
        labelCategory->setFont(font);
        labelCategory->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;               /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font: bold 16px Arial;       /* \320\250\321\200\320\270\321\204\321\202 \320\270 \321\200\320\260\320\267\320\274\320\265\321\200 */\n"
"    border: 2px solid #212526;   /* \320\240\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;          /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"	padding: 5px;				 /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\271 \320\276\321\202\321\201\321\202\321\203\320\277 */\n"
"    background-color: #ecf0f1;   /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"}"));
        labelCategory->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8->addWidget(labelCategory);

        lineEditCategory = new QLineEdit(EditDialog);
        lineEditCategory->setObjectName("lineEditCategory");
        lineEditCategory->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: #000000;                /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: #ecf0f1;     /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    border: 1px solid #a3a3a3;     /* \320\240\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;            /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"    padding: 5px;                  /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    font: 14px \"Arial\";            /* \320\250\321\200\320\270\321\204\321\202 \320\270 \321\200\320\260\320\267\320\274\320\265\321\200 */\n"
"}"));
        lineEditCategory->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8->addWidget(lineEditCategory);


        verticalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        labelWeight = new QLabel(EditDialog);
        labelWeight->setObjectName("labelWeight");
        labelWeight->setFont(font);
        labelWeight->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;               /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font: bold 16px Arial;       /* \320\250\321\200\320\270\321\204\321\202 \320\270 \321\200\320\260\320\267\320\274\320\265\321\200 */\n"
"    border: 2px solid #212526;   /* \320\240\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;          /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"	padding: 5px;				 /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\271 \320\276\321\202\321\201\321\202\321\203\320\277 */\n"
"    background-color: #ecf0f1;   /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"}"));
        labelWeight->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10->addWidget(labelWeight);

        lineEditWeight = new QLineEdit(EditDialog);
        lineEditWeight->setObjectName("lineEditWeight");
        lineEditWeight->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: #000000;                /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: #ecf0f1;     /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    border: 1px solid #a3a3a3;     /* \320\240\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;            /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"    padding: 5px;                  /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    font: 14px \"Arial\";            /* \320\250\321\200\320\270\321\204\321\202 \320\270 \321\200\320\260\320\267\320\274\320\265\321\200 */\n"
"}"));
        lineEditWeight->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10->addWidget(lineEditWeight);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);


        verticalLayout_3->addLayout(verticalLayout_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelBattery = new QLabel(EditDialog);
        labelBattery->setObjectName("labelBattery");
        labelBattery->setFont(font);
        labelBattery->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #000000;               /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font: bold 16px Arial;       /* \320\250\321\200\320\270\321\204\321\202 \320\270 \321\200\320\260\320\267\320\274\320\265\321\200 */\n"
"    border: 2px solid #212526;   /* \320\240\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;          /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"	padding: 5px;				 /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\271 \320\276\321\202\321\201\321\202\321\203\320\277 */\n"
"    background-color: #ecf0f1;   /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"}"));
        labelBattery->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(labelBattery);

        checkBoxBattery = new QCheckBox(EditDialog);
        checkBoxBattery->setObjectName("checkBoxBattery");
        checkBoxBattery->setFont(font);
        checkBoxBattery->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
#if QT_CONFIG(tooltip)
        checkBoxBattery->setToolTip(0u);
#endif // QT_CONFIG(tooltip)
        checkBoxBattery->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        checkBoxBattery->setAutoFillBackground(false);
        checkBoxBattery->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    color: #000000;               /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    font: bold 16px Arial;       /* \320\250\321\200\320\270\321\204\321\202 \320\270 \321\200\320\260\320\267\320\274\320\265\321\200 */\n"
"    border: 1px solid #a3a3a3;   /* \320\240\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 5px;          /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"	padding: 5px;				 /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\271 \320\276\321\202\321\201\321\202\321\203\320\277 */\n"
"    background-color: #ecf0f1;   /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"}"));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::Battery));
        checkBoxBattery->setIcon(icon2);

        horizontalLayout_3->addWidget(checkBoxBattery);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(EditDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_3->addWidget(buttonBox);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(EditDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDialog)
    {
        EditDialog->setWindowTitle(QCoreApplication::translate("EditDialog", "Dialog", nullptr));
        addProduct->setText(QCoreApplication::translate("EditDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 Product", nullptr));
        addElectronics->setText(QCoreApplication::translate("EditDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 Electronics", nullptr));
        delete_2->setText(QCoreApplication::translate("EditDialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        labelName->setText(QCoreApplication::translate("EditDialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        labelManufacor->setText(QCoreApplication::translate("EditDialog", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        labelPrice->setText(QCoreApplication::translate("EditDialog", "\320\246\320\265\320\275\320\260", nullptr));
        labelCategory->setText(QCoreApplication::translate("EditDialog", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
        labelWeight->setText(QCoreApplication::translate("EditDialog", "\320\222\320\265\321\201", nullptr));
        labelBattery->setText(QCoreApplication::translate("EditDialog", "\320\221\320\260\321\202\320\260\321\200\320\265\321\217", nullptr));
        checkBoxBattery->setText(QCoreApplication::translate("EditDialog", "\320\225\321\201\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditDialog: public Ui_EditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDIALOG_H
