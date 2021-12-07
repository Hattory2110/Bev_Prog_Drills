#include "std_lib_facilities.h"

void f(int* array, int n)
{
	int* la = new int[10];
	for (int i=0; i<10; ++i)
	{
		la[i]=ga[i];
		cout<< la[i]<<" ";
	}	
	cout<<"\n";
	
	int* p=new int[n];
	for (int i=0; i<10; ++i)
	{
		p[i]=array[i];
		cout<< la[i]<<" ";
	}
	cout<<"\n";
	delete[] p;
	delete[] la;
}

int* ga= new int[10] {1,2,4,8,16,32,64,128,256,512};

int main()
{
	f(ga,10);
	
	int* aa = new int[10];
	
	int counter=1;
	for (int i=1; i<11; ++i)
	{
		counter*=i;
		aa[i-1]=counter;
	}
	f(aa,10);
	
	delete[] aa;
	delete[] ga;
	return 0;
}

