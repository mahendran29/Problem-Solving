#include <stdio.h>

void main()
{
    int rows, columns, i, j;
    printf("Enter the rows and columns:");
    scanf("%d %d", &rows, &columns);
    int check = 0;
    int mid = columns / 2;
    printf("mid:%d\n", mid);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= columns; j++)
        {
            if (i % 2 != 0)
            {

                if (j >= mid - check && j <= mid + check && j % 2 != 0)
                {

                    printf("%d", i);
                }
                else
                {
                    printf("*");
                }
            }
            if (i % 2 == 0)
            {
                if (j >= mid - check && j <= mid + check && j % 2 == 0 && j != mid)
                {
                    printf("%d", i);
                }
                else
                {
                    printf("*");
                }
            }
        }
        check++;
        printf("\n");
    }
}