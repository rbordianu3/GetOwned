#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "player.h"
#include "lineupsoverviewwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QList<Player> allPlayers;

private:
    QPushButton * importPlayers = nullptr;
    QPushButton * importLineupsButton = nullptr;
    QPushButton * newLineupButton = nullptr;
    QPushButton * saveButton = nullptr;

    LineupsOverviewWidget * lineupsOverview = nullptr;

    void setupSignals();
};

#endif // MAINWINDOW_H
