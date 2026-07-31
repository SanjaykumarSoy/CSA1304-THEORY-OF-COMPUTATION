#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len, flag = 1;
    printf("Enter a binary string: ");
    scanf("%s", str);
    len = strlen(str);
    for(i = 0; i < len; i++) {
        if(str[i] != '0' && str[i] != '1') {
            flag = 0;
            break;
        }
    }
    if(flag) {
        for(i = 0; i < len / 2; i++) {
            if(str[i] != str[len - 1 - i]) {
                flag = 0;
                break;
            }
        }
    }
    if(flag)
        printf("The string belongs to the language.\n");
    else
        printf("The string does not belong to the language.\n");
    return 0;
}
