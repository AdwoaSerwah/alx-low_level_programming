#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 20

int main() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int charset_length = sizeof(charset) - 1;
    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator

    srand(time(NULL));

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int index = rand() % charset_length;
        password[i] = charset[index];
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}

