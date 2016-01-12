#include "mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setMinimumHeight(600);
    setMinimumWidth(800);
    importPlayers = new QPushButton("Import Players");
    importLineupsButton = new QPushButton("Import Lineups");
    newLineupButton = new QPushButton("Add Lineup");
    saveButton = new QPushButton("Save Lineups");

    QHBoxLayout * menuLayout = new QHBoxLayout();
    menuLayout->addWidget(importPlayers);
    menuLayout->addWidget(importLineupsButton);
    menuLayout->addWidget(newLineupButton);
    menuLayout->addWidget(saveButton);

    lineupsOverview = new LineupsOverviewWidget();
    QStackedWidget * stackedWidget = new QStackedWidget();
    stackedWidget->addWidget(lineupsOverview);

    QVBoxLayout * centralLayout = new QVBoxLayout();
    centralLayout->addLayout(menuLayout);
    centralLayout->addWidget(stackedWidget);

    QWidget * centralWidget = new QWidget();
    centralWidget->setLayout(centralLayout);

    setCentralWidget(centralWidget);

    setupSignals();
}

void MainWindow::setupSignals()
{
    connect(importPlayers, &QPushButton::clicked, [this] {
        QString fileName = QFileDialog::getOpenFileName(new QFrame(), QString("Import DraftKings Player List"), QString(), QString("CSV File (*.csv)"));

        QFile file(fileName);
        if(file.open(QFile::ReadOnly)) {
           QString newLine = file.readLine();
           while(!file.atEnd()) {
               newLine = file.readLine();
               QStringList lineParts = newLine.split(",");

               QString position = lineParts.at(0);
               position = position.left(position.size() - 1);
               position = position.right(position.size() - 1);

               QString name = lineParts.at(1);
               name = name.left(name.size() - 1);
               name = name.right(name.size() - 1);

               QString salary = lineParts.at(2);

               lineupsOverview->allPlayersWidget->addToAll(name, salary, position);
               if(position.compare("PG", Qt::CaseInsensitive) == 0) {
                   lineupsOverview->allPlayersWidget->addToPG(name, salary, position);
                   lineupsOverview->allPlayersWidget->addToG(name, salary, position);
               }
               else if(position.compare("SG", Qt::CaseInsensitive) == 0) {
                   lineupsOverview->allPlayersWidget->addToSG(name, salary, position);
                   lineupsOverview->allPlayersWidget->addToG(name, salary, position);
               }
               else if(position.compare("SF", Qt::CaseInsensitive) == 0) {
                   lineupsOverview->allPlayersWidget->addToSF(name, salary, position);
                   lineupsOverview->allPlayersWidget->addToF(name, salary, position);
               }
               else if(position.compare("PF", Qt::CaseInsensitive) == 0) {
                   lineupsOverview->allPlayersWidget->addToPF(name, salary, position);
                   lineupsOverview->allPlayersWidget->addToF(name, salary, position);
               }
               else if(position.compare("C", Qt::CaseInsensitive) == 0) {
                   lineupsOverview->allPlayersWidget->addToC(name, salary, position);
               }
           }
        }
        else {
            QMessageBox::critical(new QFrame(), QString("GetOwned!"), QString("Unable to open DraftKings Player List file"), QMessageBox::Ok);
        }
    });
}
