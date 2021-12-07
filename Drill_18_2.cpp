#include "std_lib_facilities.h"

vector<int> gv {1,2,4,8,16,32,64,128,256,512};

void f(vector<int> vec)
{
	vector<int> lv(vec.size());
	for(int i=0; i<vec.size(); ++i)
	{
		lv[i]=gv[i];
		cout<< lv[i] <<" ";
	}
	cout<<"\n";
	
	vector<int> lv2(vec.size());
	for(int i=0; i<vec.size(); ++i)
	{
		lv2[i]=vec[i];
		cout<< lv2[i] <<" ";
	}
	cout<<"\n";
}

int main()
{
	f(gv);
	
	vector<int> vv (10);
	
	int counter=1;
	for (int i=1; i<11; ++i)
	{
		counter*=i;
		vv[i-1]=counter;
	}
	f(vv);
	
	
	return 0;
}
