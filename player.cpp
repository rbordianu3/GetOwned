#include "player.h"
#include "QHBoxLayout"


Player::Player(QString playerName, QString playerSalary, QString playerPosition, QWidget *parent) : QWidget(parent)
{
    name = new QLabel(playerName);
    salary = new QLabel(playerSalary);
    position = new QLabel(playerPosition);

    deleteButton  = new QPushButton("X");

    QHBoxLayout * hbox = new QHBoxLayout();
    hbox->addWidget(name, 3);
    hbox->addWidget(salary, 1);
    hbox->addWidget(position, 1);

    setLayout(hbox);
}

Player::Player(QWidget *parent) : QWidget(parent)
{
    name = new QLabel();
    salary = new QLabel();
    position = new QLabel();

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

void Player::setSalary(QString value)
{
    salary->setText(value);
}

QString Player::getPosition()
{
    return position->text();
}

void Player::setPosition(QString value)
{
    position->setText(value);
}
