#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
	for(int i=0; i<n; ++i)
	{
		os << a[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
	int* p1= new int[7];
	cout<< "Value of p1: "<<p1 <<", it points to: "<< *p1<<"\n";
	
	int* p2= new int[7] {1,2,4,8,16,32,64};
	cout<< "Value of p2: "<<p2 <<", it points to: "<< *p2<<"\n";
	
	int* p3= p2;
	p2=p1;
	p2=p3;
	
	cout<< "Value of p1: "<<p1 <<", it points to: "<< *p1<<"\n";
	cout<< "Value of p2: "<<p2 <<", it points to: "<< *p2<<"\n";
	
	delete p1;
	delete[] p3;
	
	p1= new int[10] {1,2,4,8,16,32,64,128,256,512};
	
	p2= new int[10];
	for (int i=0; i<10; ++i)
		p2[i]=p1[i];
	
	
	vector<int> v1 {1,2,4,8,16,32,64,128,256,512};
	
	vector<int> v2;
	
	for (int i=0; i<10; ++i)
		v2.push_back(v1[i]);
	
	delete[] p1;
	delete[] p2;
	return 0;
}
