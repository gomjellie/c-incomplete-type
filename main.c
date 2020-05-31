#include "animal.h"
#include "cat.h"
#include "dog.h"

int main() {
    struct animal* wild_cat = new_cat("야생의 고양이", true);
    struct animal* house_cat = new_cat("집고양이", false);
    struct animal* wild_dog = new_dog("야생의 강아지");
    struct animal* house_dog = new_dog("집강아지");

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
