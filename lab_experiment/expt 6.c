#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len, zeros = 0, ones = 0;
    int valid = 1;
    printf("Enter a binary string: ");
    scanf("%s", str);
    len = strlen(str);
    i = 0;
    while (i < len && str[i] == '0') {
        zeros++;
        i++;
    }
    while (i < len && str[i] == '1') {
        ones++;
        i++;
    }
    if (i != len)
        valid = 0;
    if (zeros != ones)
        valid = 0;
    if (valid)
        printf("The string belongs to the language.\n");
    else
        printf("The string does not belong to the language.\n");
    return 0;
}
