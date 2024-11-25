#include "EditDialog.h"
#include "ui_EditDialog.h"


EditDialog::EditDialog(QWidget *parent, Zimin_Manager manager)
    : QDialog(parent)
    , manager(manager)
    , ui(new Ui::EditDialog)
{
    ui->setupUi(this);
    for(auto p: manager.getProducts())
    {
        ui->listWidget->addItem(p->getParameters()[1]);
    }
    ui->listWidget->setCurrentRow(manager.getProducts().size() - 1);
}

EditDialog::~EditDialog()
{
    delete ui;
}

void EditDialog::on_addProduct_clicked()
{
    manager.createProduct();
    ui->listWidget->addItem("");
    ui->listWidget->setCurrentRow(manager.getProducts().size() - 1);
}


void EditDialog::on_listWidget_currentRowChanged(int currentRow)
{
    if(currentRow < 0 || currentRow >= manager.getProducts().size())
        return;

    auto parameters = manager.getProducts()[currentRow]->getParameters();

    ui->lineEditName->setText(parameters[1]);
    ui->lineEditManufactor->setText(parameters[2]);
    ui->lineEditPrice->setText(parameters[3]);

    if (parameters.size() > 4){
        ui->labelCategory->setVisible(true);
        ui->labelWeight->setVisible(true);
        ui->labelBattery->setVisible(true);

        ui->lineEditCategory->setVisible(true);
        ui->lineEditWeight->setVisible(true);
        ui->checkBoxBattery->setVisible(true);

        ui->lineEditCategory->setText(parameters[4]);
        ui->lineEditWeight->setText(parameters[6]);


        ui->checkBoxBattery->setChecked(parameters[5] == "Есть");
    }
    else{
        ui->labelCategory->setVisible(false);
        ui->labelWeight->setVisible(false);
        ui->labelBattery->setVisible(false);

        ui->lineEditCategory->setVisible(false);
        ui->lineEditWeight->setVisible(false);
        ui->checkBoxBattery->setVisible(false);
    }
}


void EditDialog::on_addElectronics_clicked()
{
    manager.createElectronic();
    ui->listWidget->addItem("");
    ui->listWidget->setCurrentRow(manager.getProducts().size() - 1);
}


void EditDialog::on_lineEditName_editingFinished()
{
    int currentRow = ui->listWidget->currentRow();
    if(currentRow < 0)
        return;

    auto p = manager.getProducts()[currentRow];
    QString name = ui->lineEditName->text();
    p->setName(name);
    ui->listWidget->currentItem()->setText(name);

}


void EditDialog::on_lineEditManufactor_editingFinished()
{
    int currentRow = ui->listWidget->currentRow();
    if(currentRow < 0)
        return;

    auto p = manager.getProducts()[currentRow];
    QString manu = ui->lineEditManufactor->text();
    p->setManufacturer(manu);
}


void EditDialog::on_lineEditPrice_editingFinished()
{
    int currentRow = ui->listWidget->currentRow();
    if(currentRow < 0)
        return;

    auto p = manager.getProducts()[currentRow];
    float price = ui->lineEditPrice->text().toFloat();
    p->setPrice(price);
}


void EditDialog::on_lineEditCategory_editingFinished()
{
    int currentRow = ui->listWidget->currentRow();
    if(currentRow < 0)
        return;

    auto p = manager.getProducts()[currentRow];
    if (auto electronics = std::dynamic_pointer_cast<Electronics>(p)) {
        QString category = ui->lineEditCategory->text();
        electronics->setCategory(category);
    }
}


void EditDialog::on_lineEditWeight_editingFinished()
{
    int currentRow = ui->listWidget->currentRow();
    if(currentRow < 0)
        return;

    auto p = manager.getProducts()[currentRow];
    if (auto electronics = std::dynamic_pointer_cast<Electronics>(p)) {
        float weight = ui->lineEditWeight->text().toFloat();
        electronics->setWeight(weight);
    }
}


void EditDialog::on_checkBoxBattery_checkStateChanged(const Qt::CheckState &arg1)
{
    int currentRow = ui->listWidget->currentRow();
    if(currentRow < 0)
        return;

    auto p = manager.getProducts()[currentRow];
    bool battery = true;
    if (arg1 == Qt::Checked) {
        if (auto electronics = std::dynamic_pointer_cast<Electronics>(p)) {
            electronics->setBattery(battery);
        }
    }
    else{
        if (auto electronics = std::dynamic_pointer_cast<Electronics>(p)) {
            electronics->setBattery(!battery);
        }
    }


}


void EditDialog::on_delete_2_clicked()
{
    int currentRow = ui->listWidget->currentRow();
    if(currentRow < 0)
        return;

    int nextRow = currentRow == manager.getProducts().size() - 1 ? currentRow - 1: currentRow;

    QListWidgetItem* item = ui->listWidget->takeItem(currentRow);
    delete item;

    auto p = manager.getProducts()[currentRow];
    manager.deleteProduct(p);


    ui->listWidget->setCurrentRow(nextRow);
}




