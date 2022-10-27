#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "string";
   //using for
    for(int i = 0; i < str.length(); i++)
        cout << str[i];
    cout << endl;
  //using for each
    for(char x: str)
        cout << x;
    cout << endl;
  //using iterator
    for(auto it = str.begin(); it != str.end(); it++)
        cout << (*it);

    return 0;
}

// output
// string
// string
// string
