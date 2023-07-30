// Assignment 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char generate_random_char() {
    char characters[] = "0123456789ABCDEF";
    int index = rand() % 16;
    return characters[index];
}

char* generate_random_alphanumeric_string() {
    int length = rand() % 8 + 3; 
    char* random_string = (char*)malloc((length + 1) * sizeof(char));
    if (random_string == NULL) {
        printf("Memory allocation failed.");
        return NULL;
    }

    for (int i = 0; i < length; i++) {
        random_string[i] = generate_random_char();
    }
    random_string[length] = '\0'; 
    return random_string;
}

int find_highest_base(char* alphanumeric_string) {
    int highest_base = 0;
    for (int i = 0; alphanumeric_string[i] != '\0'; i++) {
        char current_char = alphanumeric_string[i];
        int base = 0;
        if (current_char >= '0' && current_char <= '9') {
            base = current_char - '0';
        } else if (current_char >= 'A' && current_char <= 'F') {
            base = current_char - 'A' + 10;
        }
        if (base > highest_base) {
            highest_base = base;
        }
    }
    return highest_base;
}

int main() {
    srand(time(0)); 

    char* random_string = generate_random_alphanumeric_string();
    if (random_string != NULL) {
        printf("Random Alphanumeric String: %s\n", random_string);
        int highest_base = find_highest_base(random_string);
        printf("Highest Base: %d\n", highest_base + 1); 
        free(random_string); 
    }

    return 0;
}
