#include "spider.h"

spider::spider():creature("Spider",70,30)
{  
}

spider::~spider()
{
}

void spider::skill1(vector<creature *> hero, vector<creature *>)
{
    cout << "\t" << "Spider use spiderweb" << endl;
    hero[0]->set_hp(-35);
}
