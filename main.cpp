#include "mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile style(":/style.qss");
    style.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(style.readAll());
    a.setStyleSheet(styleSheet);

    MainWindow w;

    QString fileName = QFileDialog::getOpenFileName(new QFrame(), QString("Import DraftKings Player List"), QString(), QString("CSV File (*.csv)"));

    QFile file(fileName);
    if(file.open(QFile::ReadOnly)) {
        w.show();
        return a.exec();
    }
    else {
        QMessageBox::critical(new QFrame(), QString("GetOwned!"), QString("Unable to open DraftKings Player List file"), QMessageBox::Ok);
    }
}
