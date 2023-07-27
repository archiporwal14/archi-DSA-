//Assignment 2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char getRandomAlphanumericChar() {
    int randomNumber = rand() % 16; 
    if (randomNumber < 10) {
        return '0' + randomNumber; 
    } else {
        return 'A' + (randomNumber - 10); 
    }
}


void generateRandomAlphanumericString(char* buffer) {
    int length = rand() % 8 + 3; 
    for (int i = 0; i < length; i++) {
        buffer[i] = getRandomAlphanumericChar();
    }
    buffer[length] = '\0'; 
}

int main() {
    srand(time(NULL)); 

    char randomString[11]; 
    generateRandomAlphanumericString(randomString);
    
    printf("Random Alphanumeric String: %s\n", randomString);

    return 0;
}
