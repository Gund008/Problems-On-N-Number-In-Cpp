#include<iostream>
using namespace std;

class Demo
{
    public:
    int iCnt;
    int iNo;
    int iFreq;
    Demo()
    {  
        this->iNo=0;
        this->iCnt=0;
        this->iFreq=0;
    }
    int CalculateFrequency(int Arr[],int iSize,int iNo)
    {
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
           if(Arr[iCnt]==iNo)
           {
              iFreq++;     
           }
        }
      return iFreq;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////
int main()    //Neked Function
{
    int iCnt=0,iRet=0,iNo=0;
    int *ptr=NULL;
    int iValue=0;

    ptr=new int;
    cout<<"Enter Size of Array"<<endl;
    cin>>iNo;
    
    cout<<"Enter the Array Elements"<<endl;
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        cin>>ptr[iCnt];
    }
    Demo dobj;
    cout<<"Enter the Elements to findount the Frequency"<<endl;
    cin>>iValue;

    iRet=dobj.CalculateFrequency(ptr,iNo,iValue);

    cout<<"Frequency of :"<<iRet<<endl;
    delete(ptr);

    return 0;
}