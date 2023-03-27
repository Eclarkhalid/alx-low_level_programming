#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LEN 15

int main(void)
{
    char password[PASSWORD_LEN + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LEN; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }

    password[PASSWORD_LEN] = '\0';

    if (strcmp(password, "Tada! Congrats") == 0) {
        for (i = 0; i < PASSWORD_LEN; i++) {
            password[i] = charset[rand() % (sizeof(charset) - 1)];
        }
        password[PASSWORD_LEN] = '\0';
    }

    printf("%s\n", password);

    return 0;
}

