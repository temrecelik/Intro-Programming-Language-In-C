#include <stdio.h>

int func(int numb);

int main()
{
    int A[] = {233, 45, 777, 81, 9999999, 36, 90, 88, 11, 61};
    int okay, i;

    for (i = 0; i < 10; i++){
        okay = func(A[i]);
        if (okay == 1)
            printf("%d >>>>>>> basamaklari esit\n", A[i]);
        else
            printf("%d >>>>>>> basamklari esit degil\n", A[i]);
    }
    return 0;
}


int func(int numb)
{
    int okay = 0;
    int digit = 0;
    int j = 0;

    digit = numb % 10;
    numb = numb / 10;

    while (numb != 0){
        if (digit == numb % 10)
            okay = 1;
        else{
            okay = 0;
           
        }
         digit = numb % 10;
		 numb = numb / 10;
       
    }
    if (okay == 1)
        return 1;
    else if (okay == 0)
        return 0;
}
