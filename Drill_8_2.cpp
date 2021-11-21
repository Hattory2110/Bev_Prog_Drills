#include "std_lib_facilities.h"

void swap_v(int a,int b) { int temp; temp = a, a=b; b=temp; }
void swap_r(int&a,int&b) { int temp; temp = a, a=b; b=temp; }
//void swap_cr(const int&a, const int&b) { int temp; temp = a, a=b; b=temp; } // Cant' run because the const is read-only
void print(const int&a, const int&b)
{
    cout << "Print a:" << a << "\n";
    cout << "Print b:" << b << "\n";
}

int main()
{
    int x = 7;
    int y =9;
    swap_v(x,y); //Don't swap the values, because the change only egsist in the function 
    print(x,y);
    
    swap_r(x,y); //Because of the reference the values will sap with each other
    print(x,y);
    /*
    swap_cr(x,y); // You can't change the value, because the const reference
    print(x,y);
    */
    /*
    swap_v(7,9); //You don't save the valuse in a variable, because the scope, so it uses the latest values
    			//Can not bind non-const value reference
    print(x,y);
    */
    /*
    swap_r(7,9); //You don't save the valuse in a variable, because the scope, so it uses the latest values
			//Can not bind non-const value reference
    print(x,y);
    */
    /*
    swap_cr(7,9); //You don't save the valuse in a variable, because the scope, so it uses the latest values
			//Can not bind non-const value reference
    print(x,y);
    */
    const int cx = 7;
    const int cy = 9;/*
    swap_v(cx,cy);// You can't change the value, because the const reference
    print(cx,cy);
    
    swap_r(cx,cy);// You can't change the value, because the const reference
    print(cx,cy);
    
    swap_cr(cx,cy);// You can't change the value, because the const reference
    print(cx,cy);
    */
    /*
    swap_v(7.7,9.9); //The double format ill be put into an int so information will be lost, and the values don't have a variable to be saved in this scope
				//Can not bind non-const value reference
    print(cx,cy);
    */
    /*
    swap_r(7.7,9.9); //The double format ill be put into an int so information will be lost, and the values don't have a variable to be saved in this scope
				//Can not bind non-const value reference
    print(cx,cy);
    */
    /*
    swap_cr(7.7,9.9); //The double format ill be put into an int so information will be lost, and the values don't have a variable to be saved in this scope
				//Can not bind non-const value reference
    print(cx,cy);
    */
    /*
    double dx = 7.7;
    double dy = 9.9;
    swap_v(dx,dy); //The double format ill be put into an int so information will be lost
    print(dx,dy);
    
    swap_r(dx,dy); //The double format ill be put into an int so information will be lost
    print(dx,dy);
    */
    /*
    swap_cr(dx,dy); //The double format ill be put into an int so information will be lost, and you can't change the value, because the const reference
    print(dx,dy);
    */
    /*
    swap_v(7.7,9.9);//The double format ill be put into an int so information will be lost, and the values don't have a variable to be saved in this scope
			//Can not bind non-const value reference
    print(dx,dy);
    */
    /*
    swap_r(7.7,9.9);//The double format ill be put into an int so information will be lost, and the values don't have a variable to be saved in this scope
				//Can not bind non-const value reference
    print(dx,dy);
    */
    /*
    swap_cr(7.7,9.9);//The double format ill be put into an int so information will be lost, and the values don't have a variable to be saved in this scope,
                            //and you can't change the value, because the const reference
    print(dx,dy);
    */
}
