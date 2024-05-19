#include<stdio.h>

int main(){
	
	char str[100];
	int i;
	printf("Enter a sentence:");
	gets(str);

 for(i=0 ; str[i]!='\0' ; i++){
 	
 	if(str[i] >= 97 && str[i] <= 122) //This is from ASCII table 
 		str[i] = str[i] - 32;
}
puts(str);

return 0;
}




