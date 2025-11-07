#include<iostream>
using namespace std;

class Arithemetic
{
    public:
    int ino1;
    int ino2;

    Arithemetic()
    {
     ino1 = 0;
     ino2 = 0;
    }
    Arithemetic(int A, int B)
    {
     ino1 = A;
     ino2 = B;
    }
    int multiply()
    {
        int ret = 0;
        ret = ino1 * ino2;
        return ret;
    }
};
int main()
{
    int a,b;
    cout << "Enter 1st number :\n";
    cin >> a;
    cout << "Enter 2nd number :\n";
    cin >> b;

    Arithemetic aobj1(a,b);

    int ians = 0;
    ians = aobj1.multiply();
    cout << "Multiplicatin is : \n " << ians ; 


    return 0;
}