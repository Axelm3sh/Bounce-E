#include "guestobject.h"

class GuestObjectData : public QSharedData
{
public:

    GuestObjectData() : id(-1) {/*inline Empty block*/ }
    GuestObjectData(const GuestObjectData &other)
        : QSharedData(other), id(other.id), name(other.name) {/*inline Empty block*/ }
    ~GuestObjectData() {/*inline Empty block*/ }

        int id;
        QString name;
};

GuestObject::GuestObject(QObject *parent) : QObject(parent), data(new GuestObjectData)
{

}

GuestObject::GuestObject(const GuestObject &rhs) : data(rhs.data)
{

}

GuestObject &GuestObject::operator=(const GuestObject &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

GuestObject::~GuestObject()
{

}

class GuestObject
{

};
