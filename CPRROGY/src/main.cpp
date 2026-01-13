#include "Engine.h"
#include "Sprite.h"
#include "Rocketship.h"
#include "FallingEnemy.h"
#include "Bullet.h"
#include "Label.h"

using namespace std;
using namespace demo;
int enemyHits = 0;
LabelPtr label;
LabelPtr label2;


int main(int argc, char* argv[]) {
    

    SpritePtr player = std::make_shared<Rocketship>();
    eng.add(player);

    SpritePtr e1 = std::make_shared<FallingEnemy>(constants::alien_str, 100, -40, 2.0f);
    SpritePtr e2 = std::make_shared<FallingEnemy>(constants::alien2_str, 300, -200, 1.5f);
    label = Label::getLabelPtr(200, 150, 40, 50, "Antal nedskuttna:");
    label2 = Label::getLabelPtr(200, 150, 40, 50, "0");
    
    eng.add(e1);
    eng.add(e2);
    eng.add(label);
    eng.add(label2);
    eng.run();
    
    return 0;
}