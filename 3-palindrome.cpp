#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abcdcba";
    
    int end=str.length()-1;
    int start=0;
    while(start<=end){
        if(str[start]==str[end]){
            start++;
            end--;
        }
        else{
            cout<<"not palli";
            break;}
    }
    if(start>end){
        cout<<"palli";
    }
    return 0;
}
