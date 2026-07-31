#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int len, left = 0, right, middleStart, middleEnd;
    int valid = 1;
    printf("Enter a binary string: ");
    scanf("%s", str);
    len = strlen(str);
    right = len - 1;
    while (left <= right && str[left] == '0' && str[right] == '0') {
        left++;
        right--;
    }
    middleStart = left;
    middleEnd = right;
    while (middleStart <= middleEnd) {
        if (str[middleStart] != '1') {
            valid = 0;
            break;
        }
        middleStart++;
    }
    if (valid)
        printf("The string belongs to the language.\n");
    else
        printf("The string does not belong to the language.\n");
    return 0;}
