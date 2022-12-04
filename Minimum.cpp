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
    int Minimum();
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

int Airthematic::Minimum()
{
    int iCnt,iMin=Arr[0];

    for(iCnt=0;iCnt<iValue;iCnt++)
    {
       if(Arr[iCnt] < iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
}

//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iNo1=0;
    int iRet=0;

    cout<<"Enter the Number:"<<"\n";
    cin>>iNo1;

    Airthematic obj(iNo1);

    obj.Accept();

    obj.Display();

    iRet=obj.Minimum();

    cout<<"Minimum number in Array\n"<<iRet;

    return 0;
}