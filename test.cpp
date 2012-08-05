#include <iostream>
using namespace std;

class Call{
public:
	virtual int call(int d)=0;
};

class Implementation: public Call{
public:
	int call(int d);
};

int Implementation::call(int d){
	int a=1;
	int b=2;
	int c=a+b+d;

	return c;
}


int main(int argc,char**argv){

	int i;
	int j;
	int sum=0;

	Implementation object;
	Call*interface=&object;

	for(i=0;i<100000000;i++)
		for(j=0;j<10;j++)
			sum+=interface->call(i);

	cout<<sum<<endl;

	return 0;
}
