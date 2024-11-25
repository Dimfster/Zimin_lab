#include "Zimin_Widget.h"

Zimin_Widget::Zimin_Widget(QWidget *parent)
    : QWidget{parent}
{

}

void Zimin_Widget::paintEvent(QPaintEvent *event)
{
    if(manager.isEmpty()){
        return;
    }

    QPainter painter(this);

    QFont font("Arial", 14);
    QFontMetrics fontMetrics(font);
    painter.setFont(font);
    painter.setRenderHint(QPainter::Antialiasing, true);

    QStringList headers = { "ID", "Название", "Производитель", "Цена", "Категория", "Батарея", "Вес" };
    QVector<int> columnsWidth = getColumnsWidth(&painter, headers);
    manager.draw(&painter, columnsWidth, headers);

    auto tableWidth = std::accumulate(columnsWidth.begin(), columnsWidth.end(),
                                      25 * columnsWidth.size());
    auto tableHeight = manager.getProducts().size() * (60);
    this->resize(tableWidth, tableHeight);

}

void Zimin_Widget::load(const QString& path)
{
    manager.loadZimin_Products(path.toStdString());
}

void Zimin_Widget::save(const QString& path)
{
    manager.saveZimin_Products(path.toStdString());
}

void Zimin_Widget::clear()
{
    manager.clearZimin_Products();
    update();
}

QVector<int> Zimin_Widget::getColumnsWidth(QPainter* painter, const QStringList& headers)
{
    std::vector<std::shared_ptr<Zimin_Product>> products = manager.getProducts();
    QVector<int> widths(headers.size(), 0);
    for (int i = 0; i < headers.size(); ++i)
        widths[i] = painter->fontMetrics().horizontalAdvance(headers[i]);

    for (auto product : products){
        QVector<int> w = product->getColumnWidth(painter);
        for (int i = 0; i < w.size(); i++)
            widths[i] = std::max(widths[i], w[i]);
    }

    return widths;
}
