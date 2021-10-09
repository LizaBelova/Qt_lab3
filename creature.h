#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>
#include <QString>
#include <string>
#include <vector>
using namespace std;

class creature
{
protected:
    int hp;
    int dam;
    string name;
public:
    creature();
    creature(string _name, int _hp, int _dam);
    virtual ~creature();
    creature(const creature &body);
    void attack(creature* &enemy);
    void stats();
    virtual void skill1(vector<creature*>, vector<creature*>) = 0;
    void set_hp(int value);
    int get_hp() const;
    string get_name() const;
};

#endif // CREATURE_H
