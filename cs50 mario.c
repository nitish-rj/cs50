#include <cs50.h>
#include <stdio.h>

int main()
{
    int a = 0, height;
    while (a == 0)
    {
        height = get_int("Height: ");
        if (height <= 0)
        {
            printf("INVALID\n");
        }
        else
        {
            a = 1;
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
