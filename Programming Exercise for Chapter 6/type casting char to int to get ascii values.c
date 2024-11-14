#include <stdio.h>
int main()
{
    char letter;
    printf("Enter the character:");
    scanf("%c",& letter);
    printf("Character:%c\n",letter);
    printf("ASCII value:%d\n",(int)letter);
    return 0;
}
