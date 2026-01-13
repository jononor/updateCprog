#ifndef BACKGROUND_H
#define BACKGROUND_H

#include "MoveableSprite.h"
#include "Constants.h"

namespace demo {
    class Background : public MoveableSprite {
        public:
        Background(float y);
        void tick() override;
        void onResize(int newW, int newH) override;
    };
}

#endif
