//
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
    // char *string = "";
    char *string = "¥";


// ((data[position] & 0x80) == 0x0)
    printf("%i\n", (string[1] & 0x80));

    printf("I am %s years old\n", string );
    // printf("I am %d cm tall\n", height);

    return 0;
}
