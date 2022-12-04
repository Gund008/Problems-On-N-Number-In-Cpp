#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

//Class Declaration
class Airthematic
{
    private:
    int iValue;
    int *Arr;   //declaration
    
    public:
    Airthematic(int);
    ~Airthematic();
    void Accept();
    void Display();
    bool CheckOccurence(int);
};

//Class Defination
Airthematic::Airthematic(int A)
{
    iValue=A;
    Arr=new int[iValue];     //Resource Allocation  
}

Airthematic::~Airthematic()
{
    delete []Arr;     
}

void Airthematic::Accept()
{
    int iCnt=0;
    cout<<"Please enter elements from Array:\n";
    
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void Airthematic::Display()
{
    int iCnt=0;
    cout<<"please display Array elements:"<<"\n";

    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }  
    cout<<"\n";
}

bool Airthematic::CheckOccurence(int iNo)
{
    int iCnt=0;
    int iFrequency=0;
    
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFrequency++;
        }
    }
    if(iFrequency==0)
    {
        return FALSE;
    }
    else 
    {
        return TRUE;
    }
    
}

//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iNo1=0;
    bool iRet=FALSE;
    int iNo=0;

    cout<<"Enter the Number:"<<"\n";
    cin>>iNo1;
    
    
    cout<<"Enter the element findout Occurence:"<<"\n";
    cin>>iNo;

    Airthematic obj(iNo1);

    obj.Accept();

    obj.Display();
    
    iRet=obj.CheckOccurence(iNo);

    if(iRet==TRUE)
    {
        cout<<"There is Number Occured in the Array:\n"<<iRet<<endl;
    }
    else 
    {
        cout<<"There is no is not Occured in the Array:\n"<<iRet<<endl;
    }
    return 0;
}