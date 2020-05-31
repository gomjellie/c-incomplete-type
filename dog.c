#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

struct animal {
    void (*walk) (animal_t*);
    const char* name;
    const char* walk_sound_effect;
};

static void dog_walk(animal_t* this) {
    printf("%s가 %s 빠르게 걸어갑니다.\n", this->name, this->walk_sound_effect);
}

animal_t* new_dog(const char* name) {
    animal_t* this = malloc(sizeof(animal_t));
    this->walk = dog_walk;
    this->name = name;
    this->walk_sound_effect = "헥헥";

    return this;
}

void del_dog(animal_t* this) {
    free(this);
}
