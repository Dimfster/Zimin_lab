#ifndef EDITDIALOG_H
#define EDITDIALOG_H

#include <QDialog>
#include "Manager.h"

namespace Ui {
class EditDialog;
}

class EditDialog : public QDialog
{
    Q_OBJECT

public:
    Zimin_Manager manager;
    explicit EditDialog(QWidget *parent, Zimin_Manager manager);
    ~EditDialog();

signals:

private slots:
    void on_addProduct_clicked();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_addElectronics_clicked();

    void on_lineEditName_editingFinished();

    void on_lineEditManufactor_editingFinished();

    void on_lineEditPrice_editingFinished();

    void on_lineEditCategory_editingFinished();

    void on_lineEditWeight_editingFinished();

    void on_checkBoxBattery_checkStateChanged(const Qt::CheckState &arg1);

    void on_delete_2_clicked();

private:
    Ui::EditDialog *ui;
};

#endif // EDITDIALOG_H
