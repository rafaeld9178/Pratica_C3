#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'A';

    if (isalpha(c)) {
        printf("%c e uma letra.\n", c);
    } else {
        printf("%c nao e uma letra.\n", c);
    }

    return 0;
}
