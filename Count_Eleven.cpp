#include<iostream>
using namespace std;

class Demo
{
    public:
    int iCnt;
    int iEven;
    Demo()
    {  
        this->iEleven=0;
        this->iCnt=0;
    }
    int CountEleven(int Arr[],int iSize)
    {
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
           if((Arr[iCnt] % 11)==0)
           {
             iEleven++;
           }
        }
      return iEleven;
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
    iRet=dobj.CountEleven(ptr,iNo);

    cout<<"Count Eleven number of Arary:"<<iRet<<endl;
    delete(ptr);

    return 0;
}