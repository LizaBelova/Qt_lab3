#include "creature.h"

creature::creature()
{
    hp = 100;
    dam = 100;
    name = "creature";
}

creature::creature(string _name, int _hp, int _dam)
{
    name = _name;
    hp = _hp;
    dam = _dam;
}

creature::~creature()
{
}

creature::creature(const creature &body)
{
    hp = body.hp;
    dam = body.dam;
    name = body.name;
}

void creature::attack(creature *&enemy)
{
    cout << "Fight: "<< endl;
    enemy->hp = enemy->hp - dam;
    cout << "\t" << dam << " damage" << endl;
}

void creature::stats()
{
    cout  << name << " " << hp << " " << dam << endl;
}

void creature::set_hp(int value)
{
    hp += value;
}

int creature::get_hp() const
{
    return hp;
}

string creature::get_name() const
{
    return name;
}
