#ifndef PLAYER_H
#define PLAYER_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>

class Player : public QWidget
{
    Q_OBJECT
public:
    explicit Player(QString playerName, int playerSalary, QString playerPosition, QWidget *parent = 0);

    QString getName();
    void setName(QString value);

    int getSalary();
    void setSalary(int value);

    QString getPosition();
    void setPosition(QString value);

private:
    QLabel * name = 0;
    QLabel * salary = 0;
    QLabel * position = 0;
    QPushButton * deleteButton = 0;

signals:

public slots:
};

#endif // PLAYER_H
