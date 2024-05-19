#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ogrno;
    int *odd = (int *)calloc(1, sizeof(int));
    char *even = (char *)calloc(1, sizeof(char));

    int i = 1;
    int j = 1;
    printf("enter ogrno:\n");
    scanf("%d", &ogrno);
    while (ogrno > 0)
    {
        if (ogrno % 2 == 0)
        {
            even =(char *) realloc(even, i * sizeof(char));
            *(even + i-1) = ogrno % 10;
            i++;
        }
        else
        {
            odd = (int *)realloc(odd, i * sizeof(int));
            *(odd + j-1) = ogrno % 10;
            j++;
        }
        ogrno /= 10;
    }
    int k;
    for (k = 0; k < 6 ; k++)
    {
        printf("odd -->> %d\n", odd[k]);
        printf("even-->> %d\n", even[k]);
    }
    free(odd);
    free(even);
}
