#include "lineupsoverview.h"
#include <QHBoxLayout>

LineupsOverview::LineupsOverview(QWidget *parent) : QWidget(parent)
{
    lineupList= new QListWidget();
    lineupList->setWordWrap(true);
    QStringList testLineups;
    testLineups << "J. Barea, S. Nash, K. Bryant, D. Cousins, P. Gasol, D. Rose, Z. Pachula, K. Anthony-Towns"
                << "J. Barea, S. Nash, K. Bryant, D. Cousins, P. Gasol, D. Rose, Z. Pachula, K. Anthony-Towns"
                << "J. Barea, S. Nash, K. Bryant, D. Cousins, P. Gasol, D. Rose, Z. Pachula, K. Anthony-Towns";
    lineupList->addItems(testLineups);


    playerList = new QVBoxLayout();

    QHBoxLayout * hbox = new QHBoxLayout();
    hbox->addWidget(lineupList);

    setLayout(hbox);

}

