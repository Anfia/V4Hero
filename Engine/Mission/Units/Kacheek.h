#ifndef KACHEEK_H
#define KACHEEK_H

#include <SFML/Graphics.hpp>
#include "../../Config.h"
#include "CollidableObject.h"

using namespace std;

class Kacheek : public CollidableObject
{
    public:

    Kacheek();
    void LoadConfig(Config *thisConfigs);
    void Draw(sf::RenderWindow& window);
    void OnCollide(CollidableObject otherObject);
    sf::Clock walk_timer; ///TEMPORARY FOR SHOWCASE ONLY
};

#endif // KACHEEK_H