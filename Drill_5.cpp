#include "std_lib_facilities.h"

int main()
try {
        /*
        cout << "Success!\n"; //Cout << "Success!\n"; lover case cout
        cout << "Success!\n"; //cout << "Success!\n;  Ending '"'
        cout << "Success" << "!\n"; //Secound starter '"' and line ending ';'
        string success="Success!";  cout << success << '\n'; // Unidentified variable (success)
        int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; // string res = 7; ... int insted of string
        vector<int> v2(10); v2[5] = 6; if (v2[5]!=7) cout << "Success!\n"; // vector redeclaration, incorrect index format, impossible if condition
        bool cond=true; if (cond) cout << "Success!\n"; else cout << "Fail!\n"; // Unidentified variable (cond)
        bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n"; // condition change (c) previous value: false 
        string s = "ape"; bool c2 = "fool">s; if (c2) cout << "Success!\n"; // Uncomplete bool, variable redeclaration, string comparison result was false ("fool"<s)
        string s2 = "ape"; if (s2!="fool") cout << "Success!\n"; // Variable redeclaration, if condition change previous: s2=="fool"
        string s3 = "ape"; if (s3=="ape") cout << "Success!\n"; // Variable redeclaration, if condition change previous: s3=="fool", incomplete cout
        string s4 = "ape"; if (s4!="fool") cout << "Success!\n"; // Incomplete cout, incorrect comparison operator between strings
        vector<char> v3(5); for (int i=0; i<v3.size(); ++i) ; cout << "Success!\n"; // Infinite loop
        vector<char> v4(5); for (int i=0; i<v4.size(); ++i) ; cout << "Success!\n";  // i variable can get out of range (5)
        string s5 = "Success!\n"; for (int i=0; i<10; ++i) cout << s5[i]; // Too little range
        if (true) cout << "Success!\n"; else cout << "Fail!\n"; // unnesseserry 'then'
        int x = 20; char c2 = x; if (c2==20) cout << "Success!\n"; // Too big value to char (max 2^8)
        string s6 = "Success!\n"; cout << s6; //Unneseserry complications (for is unneded)
        vector<int> v5(5); for (int i=0; i<=v5.size(); ++i) ; cout << "Success!\n"; // vector type unidentified
        int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n"; // Infinite loop, condition unchanged (i did not grow)
        */
        int x2 = 2; double d = 5/(x2 - 1); if (d==5*x2*0.5) cout << "Success!\n"; // Divide by 0
        string s7 = "Success!\n"; for (int i=0; i<10; ++i) cout << s7[i]; //Unneeded type declaration, too long range
        int i=0; int j=9; while (i<10) ++i; if (j<i) cout << "Success!\n";  //Overwrite
        int x3 = 4; double d2 = 5/(x3–2); if (d2!=2*x3+0.5) cout << "Success!\n"; // Overwrite        
        cout << "Success!\n"; //Cin switch to cout
        keep_window_open(); 
        return 0;
}
catch (exception& e) {
          cerr << "error: " << e.what() << '\n'; 
          keep_window_open();
          return 1;
}
catch (...) {
          cerr << "Oops: unknown exception!\n"; 
          keep_window_open();
          return 2;
}
