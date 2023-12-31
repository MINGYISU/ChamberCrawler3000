#ifndef PLAYER_H
#define PLAYER_H

#include "character.h"
#include "Water.h"
#include "BA.h"
#include "WA.h"
#include "BD.h"
#include "WD.h"
#include "sword.h"
#include "shield.h"
#include "fist.h"
#include <string>

class Player: public Character {
    const int max_hp;

    protected:
    int asset;
    PotEffect *CurEffect;
    Equipment *CurEquip;
    
    public:
        Player(Map *p, int x, int y, int max_hp, 
                int atk, int def, std::string r, int a = 0, Equipment* e = nullptr);
        ~Player() override;
        char charAt(int x, int y) override;
        virtual void attack(Character *e);
        void changeHP(int amt) override;
        virtual void drinkPot(std::string PotType);
        void gain(int amt);
        bool hurt(int dmg) override;
        virtual int getAtk();
        virtual int getDef();
        int getAsset();
        void setHP(int hp);
        string getEquip();
        void useEquip(Equipment *equip);
};

#endif

