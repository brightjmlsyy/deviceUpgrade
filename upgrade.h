#ifndef UPGRADE_H
#define UPGRADE_H

#include <QObject>

class upgrade : public QObject
{
    Q_OBJECT
public:
    explicit upgrade(QObject *parent = nullptr);

signals:

public slots:
};

#endif // UPGRADE_H