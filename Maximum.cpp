#include<iostream>
using namespace std;

class Demo
{
    public:
    int iCnt;
    int iMax;
    Demo()
    {  
        this->iMax=0;
        this->iCnt=0;
    }
    int Maximum(int Arr[],int iSize)
    {
        int iMax=Arr[0];
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
           if(Arr[iCnt] > iMax)
           {
              iMax=Arr[iCnt];
           }
        }
      return iMax;
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
    iRet=dobj.Maximum(ptr,iNo);

    cout<<"Maximum Elements of Array:"<<iRet<<endl;
    delete(ptr);

    return 0;
}