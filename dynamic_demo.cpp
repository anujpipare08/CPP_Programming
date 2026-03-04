#include<iostream>
using namespace std;

int main()
{

    int lenght = 0;
    int *Arr = NULL;

    cout<<"Enter the number of elements :\n";
    cin>>lenght;
    // step 1 : Allocate the memory
    Arr = new int[lenght];
    if (Arr ==NULL)
    {
        cout<<"unable to allocate memory\n";
    }
    else
    {
        cout<<"Memory gets succesfully allocated\n";
    }

    //step 2: use the memory
    //step 3: deaalocate the memory

    return 0;
}