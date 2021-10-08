#include "std_lib_facilities.h"

int main()
{
    constexpr double cm_per_m = 100;
    constexpr double cm_per_in = 2.54;
    constexpr double in_per_ft = 12;
    double smallest;
    double largest;
    double number;
    char unit='a';
    bool first = true;
    vector<double>v;
    double sum=0;

    while(cin>>number>>unit)
    {
        if(number!='|')
        {
            if (first)
            {
                cout<<"This is the first number, so it is the largest and the smallest at the same time\n";
                switch(unit)
                {
                    case 'c':
                        number=number/cm_per_m;
                        largest=number;
                        smallest=number;
                        break;
                    case 'i':
                        number=number/cm_per_in/cm_per_m;
                        largest=number;
                        smallest=number;
                        break;
                    case 'f':
                        number=number*in_per_ft/cm_per_in/cm_per_m;
                        largest=number;
                        smallest=number;
                    case 'm':
                        largest=number;
                        smallest=number;
                        break;
                    default:
                        simple_error("Illegal unit\n");
                        break;
                }
                first=false;
                v.push_back(number);
            }
                
            switch(unit)
            {
                case 'c':
                    number=number/cm_per_m;
                    if (number>largest)
                    {
                        cout<<number<<" the largest so far\n";
                        largest=number;
                    }
                
                    if (number<smallest)
                    {
                        cout<<number<<" the smallest so far\n";
                        smallest=number;
                    }
                    break;
                case 'i':
                    number=number*cm_per_in/cm_per_m;
                    if (number>largest)
                    {
                        cout<<number<<" the largest so far\n";
                        largest=number;
                    }
                
                    if (number<smallest)
                    {
                        cout<<number<<" the smallest so far\n";
                        smallest=number;
                    }
                    break;
                case 'f':
                    number=number*in_per_ft/cm_per_in/cm_per_m;
                    if (number>largest)
                    {
                        cout<<number<<" the largest so far\n";
                        largest=number;
                    }
                
                    if (number<smallest)
                    {
                        cout<<number<<" the smallest so far\n";
                        smallest=number;
                    }
                    break;
                case 'm':
                    if (number>largest)
                    {
                        cout<<number<<" the largest so far\n";
                        largest=number;
                    }
                
                    if (number<smallest)
                    {
                        cout<<number<<" the smallest so far\n";
                        smallest=number;
                    }
                    break;
                default:
                    simple_error("Illegal unit\n");
                    break;
            }

            v.push_back(number);
        }
        else
            break;
        
    }

    sort(v);
    cout<<"The smallest value: "<<v[0]<<"\n";
    cout<<"The largest vallue: "<<v[-1]<<"\n";
    for(int i =0; i<v.size();i++)
    {
        sum=sum+v[i];
    }
    cout<<"The sum of all the lengths: "<<sum<<"\n";
    for(int i =0; i<v.size();i++)
    {
        cout<<"The lengths: "<<v[i]<<"\n";
    }
    
    return 0;
}