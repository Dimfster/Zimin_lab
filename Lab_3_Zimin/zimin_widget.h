#ifndef ZIMIN_WIDGET_H
#define ZIMIN_WIDGET_H

#include <QWidget>

#include "Manager.h"
#include "pch.h"

class Zimin_Widget : public QWidget
{
    Q_OBJECT
public:
    Zimin_Manager manager;
    explicit Zimin_Widget(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event) override;
    void load(const QString& path);
    void save(const QString& path);
    void clear();
    QVector<int> getColumnsWidth(QPainter* painter, const QStringList& headers);
    void setManager(std::shared_ptr<Zimin_Manager> manager) { this->manager = *manager;}
    Zimin_Manager& getManager() { return manager; }

signals:



};

#endif // ZIMIN_WIDGET_H
