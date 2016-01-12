#include "allplayerswidget.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QScrollArea>
#include <QDebug>
AllPlayersWidget::AllPlayersWidget(QWidget *parent) : QTabWidget(parent)
{
    setUsesScrollButtons(false);
    setObjectName("bordered");

    allList = new QVBoxLayout();
    pgList = new QVBoxLayout();
    sgList = new QVBoxLayout();
    sfList = new QVBoxLayout();
    pfList = new QVBoxLayout();
    cList = new QVBoxLayout();
    gList = new QVBoxLayout();
    fList = new QVBoxLayout();

    QWidget * allWidget = new QWidget();
    QWidget * pgWidget = new QWidget();
    QWidget * sgWidget = new QWidget();
    QWidget * sfWidget = new QWidget();
    QWidget * pfWidget = new QWidget();
    QWidget * cWidget = new QWidget();
    QWidget * gWidget = new QWidget();
    QWidget * fWidget = new QWidget();

    allWidget->setLayout(allList);
    pgWidget->setLayout(pgList);
    sgWidget->setLayout(sgList);
    sfWidget->setLayout(sfList);
    pfWidget->setLayout(pfList);
    cWidget->setLayout(cList);
    gWidget->setLayout(gList);
    fWidget->setLayout(fList);

    QScrollArea * allArea = new QScrollArea();
    QScrollArea * pgArea = new QScrollArea();
    QScrollArea * sgArea = new QScrollArea();
    QScrollArea * sfArea = new QScrollArea();
    QScrollArea * pfArea = new QScrollArea();
    QScrollArea * cArea = new QScrollArea();
    QScrollArea * gArea = new QScrollArea();
    QScrollArea * fArea = new QScrollArea();

    allArea->setWidgetResizable(true);
    pgArea->setWidgetResizable(true);
    sgArea->setWidgetResizable(true);
    sfArea->setWidgetResizable(true);
    pfArea->setWidgetResizable(true);
    cArea->setWidgetResizable(true);
    gArea->setWidgetResizable(true);
    fArea->setWidgetResizable(true);

    allArea->setWidget(allWidget);
    pgArea->setWidget(pgWidget);
    sgArea->setWidget(sgWidget);
    sfArea->setWidget(sfWidget);
    pfArea->setWidget(pfWidget);
    cArea->setWidget(cWidget);
    gArea->setWidget(gWidget);
    fArea->setWidget(fWidget);

    addTab(allArea, "All");
    addTab(pgArea, "PG");
    addTab(sgArea, "SG");
    addTab(sfArea, "SF");
    addTab(pfArea, "PF");
    addTab(cArea, "C");
    addTab(gArea, "G");
    addTab(fArea, "F");
}

void AllPlayersWidget::addToAll(QString playerName, QString salary, QString position)
{
    Player * player = new Player(playerName, salary, position);
    allList->addWidget(player);
}

void AllPlayersWidget::addToPG(QString playerName, QString salary, QString position)
{
    Player * player = new Player(playerName, salary, position);
    pgList->addWidget(player);
}

void AllPlayersWidget::addToSG(QString playerName, QString salary, QString position)
{
    Player * player = new Player(playerName, salary, position);
    sgList->addWidget(player);
}

void AllPlayersWidget::addToSF(QString playerName, QString salary, QString position)
{
    Player * player = new Player(playerName, salary, position);
    sfList->addWidget(player);
}

void AllPlayersWidget::addToPF(QString playerName, QString salary, QString position)
{
    Player * player = new Player(playerName, salary, position);
    pfList->addWidget(player);
}

void AllPlayersWidget::addToC(QString playerName, QString salary, QString position)
{
    Player * player = new Player(playerName, salary, position);
    cList->addWidget(player);
}

void AllPlayersWidget::addToG(QString playerName, QString salary, QString position)
{
    Player * player = new Player(playerName, salary, position);
    gList->addWidget(player);
}

void AllPlayersWidget::addToF(QString playerName, QString salary, QString position)
{
    Player * player = new Player(playerName, salary, position);
    fList->addWidget(player);
}
