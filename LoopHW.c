#include <stdio.h>
int main()
{
    int h;
    printf("The Pyramid\n");
    printf("!!!!!!! you can also make the asterisk too !!!!!!! (check the source code and delete [goto syntax]\n)");
    do
    {
        printf("\nInput the height of pyramid = ");
        scanf("%d", &h);
        getchar();
        int i = 0;
        int j, k, r;

        while (i < h)
        {
            for (j = h; j > i; j--)
            {
                printf("   ");
            }
            for (k = 0; k <= i; k++)
            {
                printf("*  ");
            }
            for (r = 0; r < i; r++)
            {
                printf("*  ");
            }
            printf("\n\n", i++);
        }
        for (i = 0; i < h + 1; i++)
        {
            goto skip;
            for (j = 0; j < i; j++)
            {
                printf("   ");
            }
            for (k = i; k < h; k++)
            {
                printf("*  ");
            }
            for (int g = i; g <= h; g++)
            {
                printf("*  ");
            }
            skip:
            printf("\n\n");
        }
        char choice;
        printf("Do u want to continue ? (y or n): ");
        scanf(" %c", &choice);
        if (choice == 'y')
        {
            continue;
        }
        else
        {
            printf("\nAlright See You Next Time!!!");
            break;
        }
        return 0;
    } while (1);
}
