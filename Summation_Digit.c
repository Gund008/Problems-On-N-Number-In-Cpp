/*
Accept N number from user and display summation of digits of each number.
Input: 6
      Elements:8225 665 3 76 953  858
Output: 17 17 3 13 17  21

*/

#include<stdio.h>
#include<stdlib.h>

void Summation(int Arr[],int iSize)
{
    int iCnt=0;
    int iDigit=0;
    int iSum=0;

      for(iCnt=0;iCnt<iSize;iCnt++)
      {
          while(Arr[iCnt]!=0)
         {
           iDigit=Arr[iCnt] % 10;
           iSum=iSum + iDigit;
           Arr[iCnt]=Arr[iCnt] / 10;
         }
         printf("%d\t",iSum);
      }
       
}
//////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int *ptr=NULL,iSize=0,iCnt=0;
    int iValue=0;

    printf("Enter the Number:\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);   
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
         scanf("%d",&ptr[iCnt]);
    }

    Summation(ptr,iSize);

    free(ptr);

    return 0;
}