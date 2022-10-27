#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "gfg";
    
    cout << str.length() << endl;
    str = str + "xyz"; 
    cout << str << endl;
    cout << str.substr(1, 3) << endl; //substring(1 and 3 are starting and ending index)
    cout << str.substr(2) << endl; //substring from index 2 to the last
    cout << str.find("fg")<<endl; //to find substring
    cout<<str[1]<<endl;
    //using pointers
    string *ptr;
    ptr=&str;
    cout<<*ptr<<"hi"<<endl;
    return 0;
}

// output
// 3
// gfgxyz
// fgx
// gxyz
// 1
// f
// gfgxyzhi
