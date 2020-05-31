# c-incomplete-type

incomplete type technique 으로 구현하는 C의 다형성

```c
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
}
```

output

```sh
야생의 고양이가 걷기를 거부합니다!
고양이가 살금살금 걸어갑니다.
야생의 강아지가 헥헥 빠르게 걸어갑니다.
집강아지가 헥헥 빠르게 걸어갑니다.
```

## References

- [https://github.com/Fetiu/c-polymorphism-example](https://github.com/Fetiu/c-polymorphism-example)

