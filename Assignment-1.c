#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int random_number = rand() % 6;
    char random_character = 'a' + random_number;
    printf("The Randomly Generated Character is : %c\n", random_character);

    return 0;
}
