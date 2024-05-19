#include <stdio.h>
#include <conio.h>

int main(){
    int Number , Array[10] , i = 0 , k = 0  ,sq;
    
    printf("Enter a number; \n");
    scanf("%d",&Number);
    
    while(Number != -1){
        if(i < 10){
		
            Array[i] = Number;
            k++;}
        scanf("%d",&Number);
        i++;
    }
    for(int j = 0 ; j < k ; j++){
        
		sq = Array[j] * Array[j];
        printf("square of element dizi[%d] : %d\n",j,sq);
    }
    if(i == 0){
        printf("\n Number did not entered!");
    }
    getch();
    return 0;
}
