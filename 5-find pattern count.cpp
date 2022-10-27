#include<iostream>
using namespace std;

void printIndex(string text, string pat)
{
    int found = text.find(pat);
    while(found != string::npos)// string::npos is like /0 for the string 
    //if it found means string is fully traversed and pattern is not found
    {
        cout << "Pattern found at " << found << '\n';
        found = text.find(pat, found+1);// here find(pattern we have to find , from where give starting index)
    }
}

int main()
{
    string text, pat;
    cin >> text >> pat;
    printIndex(text, pat);
    return 0;
}
