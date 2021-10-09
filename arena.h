#ifndef ARENA_H
#define ARENA_H
#include <iostream>
#include <vector>
#include "creature.h"
#include "goblin.h"
#include "spider.h"
#include "mage.h"
using namespace std;

class arena
{
public:
    arena();
    vector<creature*> hero;
    vector<creature*> monster;
    void addhero();
    void addmonster();
    void fight();
};

#endif // ARENA_H
