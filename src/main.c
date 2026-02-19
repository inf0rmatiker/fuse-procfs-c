#include <stdio.h>

// Dummy main function.
int main(int argc, char **argv) {
    printf("Executing main() as: ");
    for (int i = 0; i < argc-1; i++) {
        printf("%s ", argv[i]);
    }
    printf("%s\n", argv[argc-1]);

    return 0;
}
