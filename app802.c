#include <stdio.h>
int forloop();
int main(){
    int number,i;
    printf("Enter a number to generate the table in c: ");
    scanf("%d", &number);
    
    printf("\nThe multiplicatio table of %d\n",number);
    forloop();
    printf("\n");
    //printf("**************************************************");
    for (int i = 1; i <= 12; i= i+1)
    {
        printf("%d*%d = %d\n",number,i, (number *i));
    } 
    return 0;
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