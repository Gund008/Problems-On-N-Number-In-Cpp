#include<iostream>
using namespace std;

class Demo
{
    public:
    int ino1;
    int isum;
    int iCnt;
    Demo()
    {
        this->isum=0;
        this->iCnt=0;
    }
    int Summation(int Arr[],int iSize)
    {
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            isum=isum + Arr[iCnt];
        }
      return isum;
         
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
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        cin>>ptr[iCnt];
    }
    Demo dobj;
    iRet=dobj.Summation(ptr,iNo);

    cout<<"Summation of Array Elements:"<<iRet<<endl;
    delete(ptr);

    return 0;
}