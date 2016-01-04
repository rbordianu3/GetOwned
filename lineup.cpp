#include "lineup.h"

Lineup::Lineup(QObject *parent) : QObject(parent)
{

}

int Lineup::getTotalSalary()
{
    int totalSalary = 0;
    for(int i = 0; i < LINEUP_SIZE; i++) {
        totalSalary += players[i]->getSalary();
    }

    return totalSalary;
}

