#include<iostream>
using namespace std;

class Demo
{
    public:
    int iCnt;
    int iEven;
    Demo()
    {  
        this->iEven=0;
        this->iCnt=0;
    }
    int CountEven(int Arr[],int iSize)
    {
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
           if((Arr[iCnt] % 2)==0)
           {
             iEven++;
           }
        }
      return iEven;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////
int main()    //Neked Function
{
    int iCnt=0,iRet=0,iNo=0;
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
    iRet=dobj.CountEven(ptr,iNo);

    cout<<"Count Even Elements of Array:"<<iRet<<endl;
    delete(ptr);

    return 0;
}