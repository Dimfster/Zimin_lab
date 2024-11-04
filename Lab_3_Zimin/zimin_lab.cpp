#include "zimin_lab.h"
#include "./ui_zimin_lab.h"

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
    filename = QFileDialog::getOpenFileName(this, tr("Открыть"), QDir::currentPath(), tr("Файл (*.txt)"));
    if (!filename.isEmpty())
        ui->ziminWidget->load(filename);
}


void zimin_lab::on_actionClear_triggered()
{
    ui->ziminWidget->clear();
}


void zimin_lab::on_actionSave_triggered()
{
    QString path = QDir::currentPath() + "/Saves";
    QString fileName = QFileDialog::getSaveFileName(this, tr("Сохранить как"), path, tr("Файл (*.txt)"));
    ui->ziminWidget->save(fileName);
}

