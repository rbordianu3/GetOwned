#ifndef LINEUP_H
#define LINEUP_H

#include <QObject>
#include "player.h"

const int LINEUP_SIZE = 8;
class Lineup : public QObject
{
    Q_OBJECT
public:
    explicit Lineup(QObject *parent = 0);
    int getTotalSalary();

private:
    Player * players[8];

signals:

public slots:
};

#endif // LINEUP_H
