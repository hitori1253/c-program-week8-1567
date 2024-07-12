#include <stdio.h>
int forloop();
void main()
{
    int i = 1, number;
    printf("Enter a number to generate the table in c: ");
    scanf("%d", &number);
    printf("\nThe multiplicatio table of %d\n", number);
    
    forloop();
    printf("\n");
    do
    {
        printf("%d x %d = %d\n", number, i, (number * i));
        i = i + 1;
    } while (i <= 12);
    
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