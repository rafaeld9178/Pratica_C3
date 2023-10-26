#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'D';

    if (isupper(c)) {
        printf("%c e uma letra maiuscula.\n", c);
    } else {
        printf("%c nao e uma letra maiuscula.\n", c);
    }

    return 0;
}
