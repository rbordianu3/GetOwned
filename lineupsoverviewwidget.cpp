#include "lineupsoverviewwidget.h"
#include <QHBoxLayout>

LineupsOverviewWidget::LineupsOverviewWidget(QWidget *parent) : QWidget(parent)
{
    QListWidget * lineupList = new QListWidget();
    lineupList->setObjectName("bordered");
    lineupList->addItem("Lineup 1");
    lineupList->addItem("Lineup 2");
    lineupList->setWordWrap(true);

    QLabel * playersInLineupTitle = new QLabel("Lineup 1");

    QVBoxLayout * playersInLineupList = new QVBoxLayout();
    playersInLineupList->setSpacing(15);
    playersInLineupList->addWidget(new QPushButton("ADD PLAYER -- PG"), 1);
    playersInLineupList->addWidget(new QPushButton("ADD PLAYER -- SG"), 1);
    playersInLineupList->addWidget(new QPushButton("ADD PLAYER -- SF"), 1);
    playersInLineupList->addWidget(new QPushButton("ADD PLAYER -- PF"), 1);
    playersInLineupList->addWidget(new QPushButton("ADD PLAYER -- C"), 1);
    playersInLineupList->addWidget(new QPushButton("ADD PLAYER -- G"), 1);
    playersInLineupList->addWidget(new QPushButton("ADD PLAYER -- F"), 1);
    playersInLineupList->addWidget(new QPushButton("ADD PLAYER -- U"), 1);

    QVBoxLayout * playersInLineupLayout = new QVBoxLayout();
    playersInLineupLayout->addWidget(playersInLineupTitle, 1);
    playersInLineupLayout->setAlignment(playersInLineupTitle, Qt::AlignCenter);
    playersInLineupLayout->addLayout(playersInLineupList, 5);
    playersInLineupLayout->addStretch(5);

    QWidget * playersInLineupWidget = new QWidget();
    playersInLineupWidget->setObjectName("bordered");
    playersInLineupWidget->setLayout(playersInLineupLayout);


    allPlayersWidget = new AllPlayersWidget();

    QLabel * ownershipLabel = new QLabel("Ownerships");
    QVBoxLayout * ownershipList = new QVBoxLayout();

    QVBoxLayout * ownershipLayout = new QVBoxLayout();
    ownershipLayout->addWidget(ownershipLabel);
    ownershipLayout->setAlignment(ownershipLabel, Qt::AlignTop | Qt::AlignCenter);
    ownershipLayout->addLayout(ownershipList);

    QWidget * ownershipWidget = new QWidget();
    ownershipWidget->setObjectName("bordered");
    ownershipWidget->setLayout(ownershipLayout);

    QHBoxLayout * hbox = new QHBoxLayout();
    hbox->addWidget(lineupList, 2);
    hbox->addWidget(playersInLineupWidget, 4);
    hbox->addWidget(allPlayersWidget, 4);
    hbox->addWidget(ownershipWidget, 3);

    setLayout(hbox);
}

