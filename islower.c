#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'm';

    if (islower(c)) {
        printf("%c e uma letra minuscula.\n", c);
    } else {
        printf("%c nao e uma letra minuscula.\n", c);
    }

    return 0;
}

