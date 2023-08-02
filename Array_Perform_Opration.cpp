/*
Complete below code snippet by writing definations of below function
1.SearchLast()-Search last occurence of number
2.EvenCount()-Count Even elements
3.OddCount()-Count Odd Elements.
*/

#include<iostream>
using namespace std;

class Array
{
    protected:
         int  *Arr;   //Characteristics(Object)
         int  iSize;

    public:
         Array(int iValue=10)   //Parameterised Constructor
         {
             cout<<"Inside Constructor\n";
             this->iSize=iValue;
             this->Arr=new int[iSize]; 
         }

         Array(Array &ref)       //Copy Costructor
         {
            cout<<"Inside copy constructor\n";

            this->iSize=ref.iSize;
            this->Arr=new int[this->iSize];

            for(int i=0;i<iSize;i++)
            {
                this->Arr[i]=ref.Arr[i];
            }
         }

         ~Array()                //Destructor
         {
            cout<<"Inside Destructor\n";
            delete[]Arr;
         }
         inline void Accept();   //Inline Function(Declaration)
         inline void Display();
};

//Defination
void Array::Accept()
{
    cout<<"Please enter the Values\n";
    for(int i=0;i<iSize;i++)
    {
        cin>>Arr[i];
    }
}
void Array::Display()
{
    cout<<"Elements are\n";
    for(int i=0;i<iSize;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class ArrSearch:public Array             //Inheritance
{
    public:
       ArrSearch(int ino=10):Array(ino)                       
       {

       }
       //Behaviour Declaration
       int Frequency(int);
       int SearchFirst(int);
       int SearchLast(int);
       int EvenCount();
       int OddCount();      
       int SumAll();
};

//Definations:
int ArrSearch::Frequency(int iValue)
{
    int iCnt=0;
    for(int i=0;i<iSize;i++)
    {
        if(Arr[i]==iValue)
        {
            iCnt++;
        } 
    }
    return iCnt;
}

int ArrSearch::SearchFirst(int iValue)
{
    int iOcc=0;
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==iValue)
        {
            iOcc=i;
            break;
        }
    }
    if(iOcc==0)
    {
        return -1;
    }
    else 
    {
        return i+1;
    }
}

int ArrSearch::SearchLast(int iValue)
{
     int iOcc=0;
    for(int i=0;i<iSize;i++)
    {
        if(Arr[i]==iValue)
        {
            iOcc=i;
        }
    }
    return iOcc+1;
     
}

int ArrSearch::EvenCount()
{
      int iCnt=0;
      for(int i=0;i<iSize;i++)
      {
          if((Arr[i] % 2)==0)
          {
              iCnt=iCnt + 1;
          }
      }
      return iCnt;
}

int ArrSearch::OddCount()
{
      int iCnt=0;
      for(int i=0;i<iSize;i++)
      {
          if((Arr[i] % 2)!=0)
          {
              iCnt=iCnt + 1;
          }
      }
      return iCnt;
}

int ArrSearch::SumAll()
{
    int iSum=0;
    for(int iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum + Arr[iCnt];
    }
    return iSum;
    
}

int main()
{
    cout<<"Inside Main\n";

    ArrSearch sobj1(5);  //static and hardcoded
    sobj1.Accept();
    sobj1.Display();

    int iRet=sobj1.Frequency(11); //1
    cout<<"Frequency is:"<<iRet<<"\n";

    iRet=sobj1.SearchFirst(11);
    cout<<"First Occurence is is:"<<iRet<<"\n";

    iRet=sobj1.SearchLast(11);
    cout<<"Last Occurence is:"<<iRet<<"\n";

    iRet=sobj1.EvenCount();
    cout<<"Count Even elements:"<<iRet<<"\n";  //5

    iRet=sobj1.OddCount();
    cout<<"Count Odd Count:"<<iRet<<"\n";   //5

    iRet=sobj1.SumAll();
    cout<<"Sum of All elements:"<<iRet<<"\n"; //14

    return 0;
}
