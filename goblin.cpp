#include "goblin.h"

goblin::goblin():creature("Goblin",60,40)
{
}

goblin::~goblin()
{
}

void goblin::skill1(vector<creature *> hero, vector<creature *>)
{
    cout << "\t" << "Goblin hit club" << endl;
    hero[0]->set_hp(-45);
}
