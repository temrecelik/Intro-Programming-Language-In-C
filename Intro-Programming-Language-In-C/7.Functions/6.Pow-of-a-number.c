#include<stdio.h>

int usalma(int x , int y);	

int main(){
	
	int a, b;
	scanf("%d %d" ,&a ,&b);
	
	printf("%d" ,usalma(a,b));
}

int usalma(int x , int y){


int i, sonuc=1;

for(i = 0; i<y; i++){
	
	sonuc=sonuc*x;

}
return sonuc;
}
