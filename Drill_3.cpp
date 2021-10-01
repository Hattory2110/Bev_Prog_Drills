#include "std_lib_facilities.h"

int main()
{
    cout<<"Please enter your first name!\n"; 

    string name;
    
    cin>>name;
    cout<<"Hello "<< name<<"\n";
    
    cout<<"Enter the name of the person you want to write to!\n";
    
    string cimzett;
    
    cin>> cimzett;
    
    cout<<"Dear "<< cimzett <<",\n";
    
    cout<<"How  are  you?  I  am  fine.  I  miss you.\n";
    
    cout<<"Please enter friend's name.\n";

    string friend_name;

    cin>>friend_name;

    cout<<"Have you seen "<< friend_name <<" lately?\n";
    
    string friend_sex;

    cout<<"What is the friend's sex? (m/f)";

    cin>> friend_sex;

    if(friend_sex=="m")
        cout<<"If you see "<< friend_name <<" please ask him to call me.\n";
    else
        cout<<"If you see "<< friend_name <<" please ask her to call me.\n";

    int recipient_age;

    cout<<"Please enter the recipient's age!\n";

    cin>>recipient_age;

    if(recipient_age<0 or recipient_age>110)
        simple_error("You’re kidding!\n");
    else
        cout<<"I hear you just had a birthday and you are " << recipient_age <<" years old.\n";

    if(recipient_age<12)
        cout<<"Next year you will be "<< recipient_age+1<<".\n";
    if(recipient_age==17)
        cout<<"Next year you will be able to vote.\n";
    if(recipient_age>70)
        cout<<"I hope you are enjoying retirement.\n";

    cout<<"Yours sincerely,\n \n \n"<< name <<"\n";
    
    return 0;
}