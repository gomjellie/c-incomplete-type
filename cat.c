#include "cat.h"
#include <stdio.h>
#include <stdlib.h>

struct animal {
    void (*walk) (animal_t*);
    const char* name;
    char* walk_sound_effect;
    bool is_lazy_to_walk;
};

static void cat_walk(animal_t* this) {
    if (this->is_lazy_to_walk) {
        printf("%s가 걷기를 거부합니다!\n", this->name);
        return;
    }
    printf("고양이가 %s 걸어갑니다.\n", this->walk_sound_effect);
}

animal_t* new_cat(const char* name, bool is_lazy_to_walk) {
    animal_t* this = malloc(sizeof(animal_t));
    this->walk = cat_walk;
    this->name = name;
    this->is_lazy_to_walk = is_lazy_to_walk;
    this->walk_sound_effect = "살금살금";

    return this;
}

void del_cat(animal_t* this) {
    free(this);
}
