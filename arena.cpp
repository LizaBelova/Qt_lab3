#include "arena.h"

arena::arena()
{
}

void arena::addhero()
{
    hero.push_back(new mage);
}

void arena::addmonster()
{
    monster.push_back(new goblin);
    monster.push_back(new spider);
}

void arena::fight()
{
    addhero();
    addmonster();
    hero[0]->stats();
    monster[0]->stats();
    monster[1]->stats();

    hero[0]->attack(monster[0]);
    monster[0]->stats();

    hero[0]->attack(monster[1]);
    monster[1]->stats();

    monster[0]->skill1(hero, monster);
    hero[0]->stats();

    monster[1]->skill1(hero, monster);
    hero[0]->stats();

    hero[0]->skill1(hero, monster);
    monster[0]->stats();
    monster[1]->stats();

    for(int i = 0; i<monster.size(); i++)
        if(monster[i]->get_hp() < 1)
        {
            cout << monster[i]->get_name() << " died" << endl;
            delete monster[i];
            monster.erase(monster.begin() + i);
        }
    for(int i = 0; i<monster.size(); i++)
        if(monster[i]->get_hp() < 1)
        {
            cout << monster[i]->get_name() << " died" << endl;
            delete monster[i];
            monster.erase(monster.begin() + i);
        }
    if(hero[0]->get_hp() < 1)
    {
        delete hero[0];
        //hero.erase(hero.begin()+i);
        hero.clear();
    }

    if(monster[0]->get_hp() < 1 && monster[1]->get_hp() < 1)
        cout << "Mage WIN!!!!!" << endl;
}
