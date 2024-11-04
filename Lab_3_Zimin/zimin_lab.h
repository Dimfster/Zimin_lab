#ifndef ZIMIN_LAB_H
#define ZIMIN_LAB_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class zimin_lab;
}
QT_END_NAMESPACE

class zimin_lab : public QMainWindow
{
    Q_OBJECT
    QString filename;

public:
    zimin_lab(QWidget *parent = nullptr);
    ~zimin_lab();

private slots:
    void on_actionOpen_triggered();

    void on_actionClear_triggered();

    void on_actionSave_triggered();

private:
    Ui::zimin_lab *ui;
};
#endif // ZIMIN_LAB_H
