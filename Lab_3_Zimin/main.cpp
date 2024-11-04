#include "zimin_lab.h"
#include "Windows.h"
#include "Utils.h"
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    zimin_lab w;
    w.show();
    return a.exec();
}
