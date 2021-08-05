#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        //take user input
        n = get_int("Height: ");
    } while(n < 1 || n > 20);

    //create pyramids
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i + j < n - 1)
                printf(" ");
            else
                printf("X");
        }
        printf("  ");
        for(int j = 0; j < n; j++)
        {
            if(j > i)
            printf("");
            else
            printf("X");
        }
        printf("\n");

    }
}
