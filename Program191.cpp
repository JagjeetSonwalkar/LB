// Display the values of array and accept the values from user by dynamically .

#include<iostream>
using namespace std;

int main()
{
    int iLength = 0, iCnt = 0;
    int *Arr = NULL;                    // Data (Characteristics)

    cout<<"Enter number of elements that you want to store : \n";
    cin>>iLength;

    Arr = new int[iLength];             // Resource allocation (Constructor)

    cout<<"Enter the values : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)   // Logic (Function -> Accept())
    {
        cin>>Arr[iCnt];
    }

    cout<<"Values from the array are : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)   // Logic (Function -> Display())
    {
        cout<<Arr[iCnt]<<"\n";
    }

    delete []Arr;                       // Resource deallocation (Destructor)

    return 0;
}

/*
    OUTPUT

    Enter number of elements that you want to store :
    5
    Enter the values :
    5
    2
    3
    4
    1
    Values from the array are :
    5
    2
    3
    4
    1

    
    Enter number of elements that you want to store :
    3
    Enter the values :
    10
    20
    30
    Values from the array are :
    10
    20
    30

*/