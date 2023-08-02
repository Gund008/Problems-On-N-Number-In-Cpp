#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr; 
        int iNo;  

        ArrayX(int iSize); 
        ~ArrayX();
        void accept();
        void display();
};

ArrayX::ArrayX(int iSize)
    {
        cout<<"Alloacating Resource:"<<"\n";
        iNo=iSize;
        Arr=new int[iSize];  
    }
ArrayX::~ArrayX()
{
    cout<<"Deallocating Resource:"<<endl;
    delete []Arr;
}    

void ArrayX::accept()
    {
        cout<<"Accept Array Elements from User:"<<"\n";
        for(int iCnt=0;iCnt<iNo;iCnt++)
        {
           cin>>Arr[iCnt]; 
        }
    }

void ArrayX::display()
    {
        cout<<"Display Array Elements are:"<<"\n";
        for(int iCnt=0;iCnt<iNo;iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
    }

class MarvellousX:public ArrayX
   {
    public:
        MarvellousX(int);  
        inline int SumEven();
        inline int SumOdd();
};
MarvellousX ::MarvellousX(int iSize):ArrayX(iSize)
      {

      }
      
int MarvellousX::SumEven()
    {
        int iSumEven=0;
        for(int iCnt=0;iCnt<iNo;iCnt++)
        {
            if(Arr[iCnt] % 2==0)
            {
                iSumEven=iSumEven + Arr[iCnt];
            }
        }
        return iSumEven;
    }

int MarvellousX::SumOdd()
    {
        int iSumOdd=0;
        for(int iCnt=0;iCnt<iNo;iCnt++)
        {
            if(Arr[iCnt] % 2!=0)
            {
                iSumOdd=iSumOdd + Arr[iCnt];
            }
        }
        return iSumOdd;
    }

///////////////////////////////////////////////////////////////////////////////////////////////////
int main()  //Neked Function
{
    int iLength=0;

    cout<<"Please Enter the Size of Array that you want to create:"<<"\n";
    cin>>iLength;

    MarvellousX aobj(iLength);
    aobj.accept();
    aobj.display();

    int iRet=aobj.SumEven();
    cout<<"Summation of Even Elements:"<<iRet<<"\n";

    iRet=aobj.SumOdd();
    cout<<"Summation of Even Elements:"<<iRet<<"\n";

    return 0;

}
