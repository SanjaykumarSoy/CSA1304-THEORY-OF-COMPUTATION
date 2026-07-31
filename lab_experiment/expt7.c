#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, len, found = 0;
    printf("Enter a binary string: ");
    scanf("%s", str);
    len = strlen(str);
    for(i = 0; i < len; i++)
    {
        if(str[i] != '0' && str[i] != '1')
        {
            printf("Invalid binary string.\n");
            return 0;
        }
    }
    for(i = 0; i <= len - 3; i++)
    {
        if(str[i] == '1' && str[i+1] == '0' && str[i+2] == '1')
        {
            found = 1;
            break;
        }
    }
    if(found)
        printf("The string belongs to the language.\n");
    else
        printf("The string does not belong to the language.\n");
    return 0;
}
