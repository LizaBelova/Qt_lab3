#ifndef MAGE_H
#define MAGE_H
#include "creature.h"

class mage:public creature
{
public:
    mage();
    ~mage();
    void skill1(vector<creature*>, vector<creature*> monster);
};

#endif // MAGE_H
