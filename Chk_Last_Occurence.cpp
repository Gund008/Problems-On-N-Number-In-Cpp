#include<iostream>
using namespace std;

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
    int CheckLastOccurence(int);
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

int Airthematic:: CheckLastOccurence(int iNo)
{
    int iCnt=0;

    for(iCnt=iValue;iCnt>=0;iCnt--)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iCnt==-1)
    {
        return -1;
    }
    else 
    {
        return iCnt;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iNo1=0;
    int iRet,iNo=0;

    cout<<"Enter the Number:"<<"\n";
    cin>>iNo1;

    cout<<"Enter the Element findout last occurence:"<<"\n";
    cin>>iNo;

    Airthematic obj(iNo1);

    obj.Accept();

    obj.Display();

    iRet=obj.CheckLastOccurence(iNo);

   if(iRet==-1)
   {
     cout<<"There is number in the array:"<<iNo<<endl;
   }
   else
   {
    cout<<"There is not Occured in the Array:"<<iNo<<endl;
   }

    return 0;
}
