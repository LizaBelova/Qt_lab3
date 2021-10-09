#ifndef SPIDER_H
#define SPIDER_H
#include "creature.h"

class spider:public creature
{
public:
    spider();
    ~spider();
    void skill1(vector<creature *> hero, vector<creature *>);
};

#endif // SPIDER_H
