#include "animal.h"

struct animal {
    void (*walk) (animal_t*);
};

void animal_walk(animal_t* this) {
    this->walk(this);
}
