#include "std_lib_facilities.h"

int main() 
{
    double a;
    double b;
    double c=0.01;
    char ab=0;
    while(cin>> a) 
    {  
        cin >> b;
        if (a !='|')
        {
            if (b =='|')
                break;
            else 
            {
                
                if(a>b)
                {
                    cout<<"The  smaller  value  is: "<< b <<"\nThe  larger  value  is: "<< a <<'\n';
                    ab=ab+1;
                }
                
                if(a<b)
                    cout<<"The  smaller  value  is: "<< a <<"\nThe  larger  value  is: "<< b <<'\n';

                if(a==b)
                    cout<<"The numbers are equal\n";
                else
                {
                        if(ab==1)
                    {
                        double d=a-b;
                        if(d<c)
                            cout<<"The numbers are almost equal\n";
                    }
                    else
                    {
                        double d=b-a;
                        if(d<c)
                            cout<<"The numbers are almost equal\n";
                    }
                }
                

                
            }
        }
            
    }
    return 0;
}