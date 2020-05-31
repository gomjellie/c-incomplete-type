#ifndef CAT_H
#define CAT_H

#include "animal.h"
#include <stdbool.h>

animal_t* new_cat(const char* name, bool is_lazy_to_walk);
void del_cat(animal_t* this);

#endif //CAT_H
