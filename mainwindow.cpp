#include "mainwindow.h"
#include "lineupsoverview.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    stackedWidget = new QStackedWidget();

    LineupsOverview * lineupsOverview = new LineupsOverview();

    stackedWidget->addWidget(lineupsOverview);

    setCentralWidget(stackedWidget);


}
