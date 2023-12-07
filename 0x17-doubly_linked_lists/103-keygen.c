#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int i = 0;

    char *username = argv[1];

	if (argc != 2) {
        printf("Usage: %s username\n", argv[0]);
        return 1;
    }


    srand(time(NULL));

    printf("Key for %s: ", username);
    for (i = 0; i < 10; i++) {
        printf("%c", 'A' + rand() % 26);
    }
    printf("\n");

    return 0;
}

