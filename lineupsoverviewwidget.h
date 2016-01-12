#ifndef LINEUPSOVERVIEW_H
#define LINEUPSOVERVIEW_H

#include <QWidget>
#include <QListWidget>
#include <QVBoxLayout>
#include "allplayerswidget.h"

class LineupsOverviewWidget : public QWidget
{
    Q_OBJECT
public:
    explicit LineupsOverviewWidget(QWidget *parent = 0);
    AllPlayersWidget * allPlayersWidget = nullptr;

private:

signals:

public slots:
};

#endif // LINEUPSOVERVIEW_H
