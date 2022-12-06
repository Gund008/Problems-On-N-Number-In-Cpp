#include<iostream>
using namespace std;

//Class Declaration
class ArrayX
{
    public:
       int iNo;
       int *Arr;
       ArrayX(int);
      ~ArrayX();
       void Accept();
       void Display();
};

//Class Defination
ArrayX::ArrayX(int i)
{
    cout<<"Allocating Resources:"<<"\n";
    iNo=i;
    Arr=new int[iNo];   //resource allocation
}
ArrayX::~ArrayX()
{
   cout<<"Dealloactiong Resources..."<<"\n";
   delete []Arr;   //resource dealloaction

}
void ArrayX::Accept()
{
    int iCnt=0;
    cout<<"Please Accept Array elements..."<<"\n";
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        cin>>Arr[iCnt];
    }
}
void ArrayX::Display()
{
    int iCnt=0;
    cout<<"Please Display Array elements:"<<"\n";
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

class MarvellousLB:public ArrayX
{
    public:
    MarvellousLB(int i):ArrayX(i)
    {
      
    }

    int ProductElement()
    {
        int iCnt=0;
        int iProd=1;
        for(iCnt=0;iCnt<iNo;iCnt++)
        {
            if((Arr[iCnt] % 2)==0)
            {
                iProd=iProd * Arr[iCnt];
            }
        }
        return iProd;
    }

};

///////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    int iRet=0;

    cout<<"Please enter the Number:\n";
    cin>>iValue;

    //ArrayX obj(iValue);  //static and hardcoded

    //obj.Accept();
   // obj.Display();

  
    MarvellousLB *obj=new MarvellousLB(iValue);

    obj->Accept();
    obj->Display();

    iRet=obj->ProductElement();
    cout<<"Product Of Array Elements:"<<iRet<<"\n";

    delete obj;
    return 0;
}