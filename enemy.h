#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"
#include "player.h"

class Enemy: public Character {
    Player *pc;

    public:
    Enemy(Map *p, int x, int y, int atk, int def, int max_hp, Player *pc);
    virtual void print() = 0;
    virtual void attack();
    virtual bool hurt(int dmg);
};

#endif

