#include "actor.h"

class Game {

private:
    /** Variable contient tous les acteurs du monde. */
    std::vector<std::unique_ptr<Actor>> actors;

}
