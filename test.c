#include <stdlib.h>
#include <stdio.h>


typedef int (*Call)(int number);

int code(int d){
	int a=1;
	int b=2;
	int c=a+b+d;

	return c;
}

int main(int argc,char**argv){

	int i;
	int j;
	int sum=0;
	Call call=code;

	for(i=0;i<100000000;i++)
		for(j=0;j<10;j++)
			sum+=call(i);

	printf("%i\n",sum);

	return 0;
}
