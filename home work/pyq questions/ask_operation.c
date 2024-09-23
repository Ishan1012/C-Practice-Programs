#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, result;
    char ch;

    printf("Enter a, b and operation: ");
    scanf("%d %d %c", &a, &b, &ch);

    switch (ch)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("Wrong operator!\n");
    }

    printf("Result=%d", result);
    return 0;
}
