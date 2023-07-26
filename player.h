#ifndef PLAYER_H
#define PLAYER_H

#include "character.h"
#include "Water.h"
#include "BA.h"
#include "WA.h"
#include "BD.h"
#include "WD.h"
#include <string>

class Player: public Character {
    const int max_hp;

    protected:
    int gold = 0;
    PotEffect *CurEffect;
    
    public:
        Player(Map *p, int x, int y, 
                int cur_hp, int atk, int def,
                int max_hp);
        char charAt(int x, int y) override;
        // virtual void attack(Character *e);
        // virtual void hurt();
        void changeHP(int amt) override;
        void drinkPot(std::string PotType);
        virtual int getAtk();
        virtual int getDef();
};

#endif

