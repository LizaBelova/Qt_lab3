#include <QCoreApplication>
#include <vector>
#include <windows.h>
#include "arena.h"
#include "creature.h"
#include "goblin.h"
#include "spider.h"
#include "mage.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    wchar_t title[] = L"Hero Battle with monsters";
    SetConsoleTitle(title);
    arena boris;
    boris.fight();
    /*
    creature* boris = new mage;
    creature* ivan = new goblin;
    boris->stats();
    ivan->stats();
    boris->attack(ivan);
    ivan->stats();
    delete boris;
    delete ivan;
    */
    return a.exec();
}
