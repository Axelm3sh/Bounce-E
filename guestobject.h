#ifndef GUESTOBJECT_H
#define GUESTOBJECT_H

#include <QObject>
#include <QSharedDataPointer>

class GuestObjectData;

class GuestObject : public QObject
{
    Q_OBJECT
public:
    explicit GuestObject(QObject *parent = 0);
    GuestObject(const GuestObject &);
    GuestObject &operator=(const GuestObject &);
    ~GuestObject();

signals:

public slots:

private:
    QSharedDataPointer<GuestObjectData> data;
};

#endif // GUESTOBJECT_H