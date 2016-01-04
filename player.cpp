#include "player.h"
#include "QHBoxLayout"


Player::Player(QString playerName, int playerSalary, QString playerPosition, QWidget *parent) : QWidget(parent)
{
    name = new QLabel(playerName);
    salary = new QLabel(QString::number(playerSalary));
    position = new QLabel(playerPosition);

    deleteButton  = new QPushButton("X");

    QHBoxLayout * hbox = new QHBoxLayout();
    hbox->addWidget(name, 3);
    hbox->addWidget(salary, 3);
    hbox->addWidget(position, 3);

    setLayout(hbox);
}

QString Player::getName()
{
    return name->text();
}

void Player::setName(QString value)
{
    name->setText(value);
}

int Player::getSalary()
{
    return salary->text().toInt();
}

void Player::setSalary(int value)
{
    salary->setText(QString::number(value));
}

QString Player::getPosition()
{
    return position->text();
}

void Player::setPosition(QString value)
{
    position->setText(value);
}
