#include <stdio.h>

int main() {
    printf("Versión de compilador: GCC %d.%d.%d\n",
           __GNUC__,
           __GNUC_MINOR__,
           __GNUC_PATCHLEVEL__);

    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}