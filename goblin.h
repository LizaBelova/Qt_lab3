#ifndef GOBLIN_H
#define GOBLIN_H
#include "creature.h"

class goblin:public creature
{
public:
    goblin();
    ~goblin();
    void skill1(vector<creature*> hero, vector<creature*>);
};

#endif // GOBLIN_H
