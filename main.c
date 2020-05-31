#include "animal.h"
#include "cat.h"
#include "dog.h"

int main() {
    animal_t* wild_cat = new_cat("야생의 고양이", true);
    animal_t* house_cat = new_cat("집고양이", false);
    animal_t* wild_dog = new_dog("야생의 강아지");
    animal_t* house_dog = new_dog("집강아지");

    animal_walk(wild_cat);
    animal_walk(house_cat);
    animal_walk(wild_dog);
    animal_walk(house_dog);

    del_cat(wild_cat);
    del_cat(house_cat);
    del_dog(wild_dog);
    del_dog(house_dog);

    return 0;
}
