#include "drow.h"

Drow::Drow(Map *p, int x, int y, int a, std::string r):
    Player{p, x, y, 150, 25, 15, r, a} {}

int Drow::getAtk() { return atk + CurEffect->changeAtk() * 3 / 2 + CurEquip->cAtk(); }

int Drow::getDef() { return def + CurEffect->changeDef() * 3 / 2 + CurEquip->cDef(); }

void Drow::drinkPot(string PotType) {
    if (PotType == "RH") {
        changeHP(15); //1 restore health
    } else if (PotType == "PH") {
        changeHP(-15); //2 poision health
    } else if (PotType == "BA") {
        CurEffect = new BA{CurEffect}; //3 boost atk
    } else if (PotType == "WA") {
        CurEffect = new WA{CurEffect}; //4 wound atk
    } else if (PotType == "BD") {
        CurEffect = new BD{CurEffect}; //5 boost def
    } else if (PotType == "WD") {
        CurEffect = new WD{CurEffect}; //6 wound def
    }
}
