#include<iostream>
using namespace std;

int main()
{
    int icnt = 0;
    cout<<"enter your number";
    cin>>icnt;

    if(icnt>18)
    {
        cout<<"you can vote";
    }
    else
    {
        cout<<"you cannot vote";
    }
    return 0;
}