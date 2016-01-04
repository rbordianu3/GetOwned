#ifndef LINEUPSOVERVIEW_H
#define LINEUPSOVERVIEW_H

#include <QWidget>
#include <QListWidget>
#include <QVBoxLayout>

class LineupsOverview : public QWidget
{
    Q_OBJECT
public:
    explicit LineupsOverview(QWidget *parent = 0);

private:
    QListWidget * lineupList = 0;
    QVBoxLayout * playerList = 0;
signals:

public slots:
};

#endif // LINEUPSOVERVIEW_H
