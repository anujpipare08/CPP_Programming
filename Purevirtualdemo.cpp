#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;

    int Addition(int A, int B)
    {
        return A + B ;
    }
    virtual int  Substraction(int A, int B)=0;
};

class Derived : public Base
{
    public:
    int x;

    
}