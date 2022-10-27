#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "00001010";
    int size = str.length()-1;
    int base=1;
    int ans=0;
    for(int i=size;i>=0;i--){
        int chartoint=(int)str[i]-'0';//we have to 1st convert char into int (so decimal value or 0 is 48 and rest incrementing so if we substract decimal value of each string with '0' it gives decimal value)
        ans=ans+chartoint*base;
        base=base*2; //initally 1 then 2 then 4 ,8, 16,32,64,128,and so on.
    }
    cout<<ans;
    return 0;
}

// o\p-10
