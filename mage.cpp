#include "mage.h"

mage::mage():creature("Mage",110,50)
{
}

mage::~mage()
{
}

void mage::skill1(vector<creature*>, vector<creature*> monster)
{
    cout << "\t" << "Mage use fireball" << endl;
    for(int i = 0; i < monster.size(); i++)
    {
        monster[i]->set_hp(-50);
    }
}
