#ifndef ALLPLAYERSWIDGET_H
#define ALLPLAYERSWIDGET_H

#include <QTabWidget>
#include <QVBoxLayout>
#include "player.h"
class AllPlayersWidget : public QTabWidget
{
    Q_OBJECT
public:
    explicit AllPlayersWidget(QWidget *parent = 0);

    void addToAll(QString playerName, QString salary, QString position);
    void addToPG(QString playerName, QString salary, QString position);
    void addToSG(QString playerName, QString salary, QString position);
    void addToSF(QString playerName, QString salary, QString position);
    void addToPF(QString playerName, QString salary, QString position);
    void addToC(QString playerName, QString salary, QString position);
    void addToF(QString playerName, QString salary, QString position);
    void addToG(QString playerName, QString salary, QString position);


private:
    QVBoxLayout * allList = nullptr;
    QVBoxLayout * pgList = nullptr;
    QVBoxLayout * sgList = nullptr;
    QVBoxLayout * sfList = nullptr;
    QVBoxLayout * pfList = nullptr;
    QVBoxLayout * cList = nullptr;
    QVBoxLayout * gList = nullptr;
    QVBoxLayout * fList = nullptr;
signals:

public slots:
};

#endif // ALLPLAYERSWIDGET_H
