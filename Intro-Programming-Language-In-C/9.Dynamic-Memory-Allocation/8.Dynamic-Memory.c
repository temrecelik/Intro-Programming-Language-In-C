#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[] = {"Emre"};
    char *ptr;

    int ogrno = 1186706012;
    int i = 0;
    int size = 0;
    int sum = 0;
    while (string[i] != '\0')
    {
        size++;
        i++;
    }
    while (ogrno > 0)
    {
        sum += ogrno % 10;
        ogrno /= 10;
    }
    int j = 0;
    int wordcount = sum / size;
    ptr = (char *)calloc(sum, sizeof(char));
    for (i = 0; i < sum; i++)
    {
        if (wordcount == 0)
            break;
        else
        {
            *(ptr + i) = string[j];
            j++;
            if (j == size)
            {
                j=0;
                wordcount--;
            }
            
        }
    }
    i = 0;
    while (*(ptr + i) != '\0')
    {
        printf("%c", ptr[i]);
        i++;
    }
    free(ptr);
}
