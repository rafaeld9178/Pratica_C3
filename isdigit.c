#include <stdio.h>
#include <ctype.h>

int main() {
    char c = '7';

    if (isdigit(c)) {
        printf("%c e um digito.\n", c);
    } else {
        printf("%c nao e um digito.\n", c);
    }

    return 0;
}
