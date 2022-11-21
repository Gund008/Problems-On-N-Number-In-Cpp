#include<iostream>
using namespace std;

class Demo
{
    public:
    int iCnt;
    int iEven;
    int iOdd;
    Demo()
    {  
        this->iEven=0;
        this->iCnt=0;
        this->iOdd=0;
    }
    void DisplayEvenOdd(int Arr[],int iSize)
    {
        for(iCnt=0;iCnt<=iSize;iCnt++)
        {
           if((Arr[iCnt] % 2)==0)
           {
             iEven++;
           }
           else 
           {
             iOdd++;
           }
        }
        cout<<"Number of Even Elements:"<<iEven<<endl;
        cout<<"Number of Odd Elements :"<<iSize - iEven<<endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////
int main()    //Neked Function
{
    int iCnt=0,iNo=0;
    int *ptr=NULL;

    ptr=new int;
    cout<<"Enter Size of Array"<<endl;
    cin>>iNo;
    
    cout<<"Enter the Array Elements"<<endl;
    for(iCnt=0;iCnt<=iNo;iCnt++)
    {
        cin>>ptr[iCnt];
    }
    Demo dobj;
    dobj.DisplayEvenOdd(ptr,iNo);
    delete(ptr);

    return 0;
}