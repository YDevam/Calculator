#include <stdio.h>
int cal(int n)
{
    int a, b, sum;
    printf("Enter value of a = ");
    scanf("%d", &a);
    printf("Enter value of b = ");
    scanf("%d", &b);
    switch (n)
    {
    case 1:
        sum = a + b;
        return printf("\nAddition of a and b = \t%d\n", sum);
        break;

    case 2:
        sum = a - b;
        return printf("\nSubtraction of a and b = \t%d\n", sum);
        break;
    case 3:
        sum = a * b;
        return printf("\nMultiplication of a and b = \t%d\n", sum);
        break;
    case 4:
        sum = a / b;
        return printf("\nDivision of a and b = \t%d\n", sum);
        break;
    case 5:
        sum = a % b;
        return printf("\nModulus of a and b = \t%d\n", sum);
        break;
    };
}
int main()
{
    int j;
    for (int i = 0; i > -1; i++)
    {
        printf("\nPress 1 for Addition");
        printf("\nPress 2 for Subtraction");
        printf("\nPress 3 for Multiplication");
        printf("\nPress 4 for Division");
        printf("\nPress 5 for Modulus");
        printf("\nPress 0 for Exit \n");
        scanf("%d", &j);
        if (j == 0)
        {
            break;
        }
        else if (j > 0 && j < 6)
        {
            cal(j);
            j == 0;
        }
        else
        {
            printf("Enter the above given number");
        }
    }
}