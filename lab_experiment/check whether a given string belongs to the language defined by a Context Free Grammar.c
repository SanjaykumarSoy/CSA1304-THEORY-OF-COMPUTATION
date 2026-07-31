#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, valid = 1;
    printf("Enter a binary string: ");
    scanf("%s", str);
    int len = strlen(str);
    if (len < 2) {
        valid = 0;
    }
    else if (str[0] != '0' || str[len - 1] != '1') {
        valid = 0;
    }
    else {
        for (i = 0; i < len; i++) {
            if (str[i] != '0' && str[i] != '1') {
                valid = 0;
                break;
            }
        }
    }
    if (valid)
        printf("The string belongs to the language.\n");
    else
        printf("The string does not belong to the language.\n");
    return 0;
}
