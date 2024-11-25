#include "Zimin_Lab.h"
#include "./ui_Zimin_Lab.h"
#include "EditDialog.h"
#include "Zimin_Widget.h"

#include <QFileDialog>


zimin_lab::zimin_lab(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::zimin_lab)
{
    ui->setupUi(this);
    filename = "";
}

zimin_lab::~zimin_lab()
{
    delete ui;
}

void zimin_lab::on_actionOpen_triggered()
{
    QString path = QDir::currentPath() + "/../../Saves";
    filename = QFileDialog::getOpenFileName(this, tr("Открыть"), path, tr("Файл (*.txt)"));
    if (!filename.isEmpty())
        ui->ziminWidget->load(filename);
}


void zimin_lab::on_actionClear_triggered()
{
    ui->ziminWidget->clear();
}


void zimin_lab::on_actionSave_triggered()
{
    QString path = QDir::currentPath() + "/../../Saves";
    QString fileName = QFileDialog::getSaveFileName(this, tr("Сохранить как"), path, tr("Файл (*.txt)"));
    ui->ziminWidget->save(fileName);
}


template<class T>
void clone(T& src, T& trg){
    std::stringstream stream;
    boost::archive::text_oarchive out(stream);
    out << src;
    boost::archive::text_iarchive in(stream);
    in >> trg;
}

void zimin_lab::on_actionEdit_triggered()
{
    Zimin_Manager m;
    clone(ui->ziminWidget->manager, m);

    EditDialog dlg(this, m);

    if (dlg.exec() == QDialog::Accepted)
    {
        // clone(m, ui->ziminWidget->manager);
        ui->ziminWidget->manager = dlg.manager;
        ui->ziminWidget->update();
    }
}

