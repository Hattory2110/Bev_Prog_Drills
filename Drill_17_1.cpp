#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
	for(int i=0; i<10; ++i)
	{
		os << a[i]<<" ";
	}
	cout<<"\n";
}

void print_array(ostream& os, int* a, int n)
{
	for(int i=0; i<n; ++i)
	{
		os << a[i]<<" ";
	}
	cout<<"\n";
}

void print_vector(ostream& os, vector<int> a, int n)
{
	for(int i=0; i<n; ++i)
	{
		os << a[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
	int *array = new int [10];
	for(int i=0; i<10; ++i)
		cout<<array[i]<<" ";
	cout<<"\n";	
	
	print_array10(cout,array);
	
	
	int *array_2 = new int [10];
	for(int i=0; i<10; ++i)
	{
		array_2[i]=100+i;
	}
	print_array10(cout,array_2);
	
	int *array_3 = new int [11];
	for(int i=0; i<11; ++i)
	{
		array_3[i]=100+i;
	}
	print_array(cout,array_3,11);
	
	int *array_4 = new int [20];
	for(int i=0; i<20; ++i)
	{
		array_4[i]=100+i;
	}
	print_array(cout,array_4,20);
	
	vector<int> a;
	for(int i=0; i<10; ++i)
	{
		a.push_back(100+i);
	}
	print_vector(cout, a, 10);
	
	vector<int> b;
	for(int i=0; i<11; ++i)
	{
		a.push_back(100+i);
	}
	print_vector(cout, a, 11);
	
	vector<int> c;
	for(int i=0; i<20; ++i)
	{
		a.push_back(100+i);
	}
	print_vector(cout, a, 20);
	
	
	delete[] array_4;
	delete[] array_3;
	delete[] array_2;
	delete[] array;
	return 0;
}
