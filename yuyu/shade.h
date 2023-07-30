#ifndef SHADE_H
#define SHADE_H

#include "player.h"

class Shade: public Player {
    // Default Character
    public:
        Shade(Map *p, int x, int y, std::string r = "Shade");
};

#endif