#include "enemy.h"

Enemy::Enemy(Map *p, int x, int y,
               int atk, int def,
               int max_hp, Character *pc): 
               Character{p, x, y, max_hp, atk, def}, pc{pc} {}

void Enemy::attack() {
    pc->hurt(damage(getAtk(), pc->getDef()), race);
}

bool Enemy::hurt(int dmg) {
    changeHP(-dmg);
    return true;
}
