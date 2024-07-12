#include <stdio.h>
int forloop();
int main()
{
    int number, i; // declarative
    printf("Enter a number to generate the tadle in c: ");
    scanf("%d", &number);

    printf("\nThe multiplication table of %d\n", number);
    forLoop();
    printf("\n");
    // prinrtf("****************************\n");
    for (int i = 1; i <= 12; i = i + 1)
    {
        printf("%d x %d = %d\n", number, i, (number * 1));
    }
    return 0;
}
void forLoop()
{
    int i = 1, count = 30;
    for (i = 1; i < count; i++)
    {
        printf("*");
    }
}