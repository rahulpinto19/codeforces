/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        string str1 = str.substr(0,i);
        string str2 = str.substr(str.size()-i,i);
        if(str1 == str2 and str1.size()+str2.size() > str.size())
        {
            cout<<"YES"<<endl;
            cout<<str1<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}