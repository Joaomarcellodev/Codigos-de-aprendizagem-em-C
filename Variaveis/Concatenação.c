// A concatenação seria a soma de duas strings

#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello, ";
    char str2[] = "world!";

    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
