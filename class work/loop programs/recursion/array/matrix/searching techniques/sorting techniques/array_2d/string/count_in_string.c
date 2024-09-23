// C program to count digit, spaces, spacial characters, alphabets in a string
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[100];
    int i;
    int alphabet = 0, num = 0, special = 0, space = 0;

    printf("Please enter the string: \n");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            alphabet++;
        else if (str[i] >= '0' && str[i] <= '9')
            num++;
        else if (str[i] == ' ')
            space++;
        else
            special++;
    }

    printf("No. of alphabets: %d\n",alphabet);
    printf("No. of Digits: %d\n",num);
    printf("No. of spaces: %d\n",space);
    printf("No. of Special Characters: : %d\n",special);

    return 0;
}
