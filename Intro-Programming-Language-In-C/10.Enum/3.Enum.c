#include<stdio.h>

enum week{error,mon,tue,wed,thur,fri,sat,sun};

int main()
{
	enum week day;
	day=wed;
	printf("%d" ,day);
	return 0;
}
