#include <stdio.h>
#include <ctype.h>

int main() {
    char c = '5';

    if (isalnum(c)) {
        printf("%c e uma letra ou um digito.\n", c);
    } else {
        printf("%c nao e uma letra ou um digito.\n", c);
    }

    return 0;
}

