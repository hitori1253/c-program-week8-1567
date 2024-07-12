#include <stdio.h>
int forloop();
void main()
{
    int i = 1,number, count = 12;
    printf("Enter a number to generate the table in c: ");
    scanf("%d", &number);
    printf("\nThe multiplicatio table of %d\n", number);
    // printf("------------------------\n");
    forloop();
    printf("\n");
    while (i <= count)
    {
        printf("%d x %d = %d\n", number, i, (number * i));
        i = i + 1;
    }
}
int forloop()
{
    int i, count = 30;
    for(i = 1; i < count; i++)
    {
        printf("*");
    }
    return 0;
} 