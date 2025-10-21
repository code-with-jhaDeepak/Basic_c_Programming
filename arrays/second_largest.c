#include<stdio.h>
int main()
{
    int array[7]={1,2,3,4,5,6,7};
    int assusmption=array[0];
    int slarge=0;
    int tlarge=0;

    for(int i=1;i<7;i++)
    {
        if(assusmption<array[i])
        {
            assusmption=array[i];
        }
    }
    printf("%d is the highest value in the Array\n",assusmption);
    for(int i=1;i<7;i++)
    {
        if(slarge<array[i] && array[i]!=assusmption)
        {
            slarge=array[i];
        }
    }
    printf("%d is the second highest value in the Array\n",slarge);
    for(int i=1;i<7;i++)
    {
        if(tlarge<array[i] && array[i]!=slarge && array[i]!=assusmption) 
        {
            tlarge=array[i];
        }
    }
    printf("%d is the thrid highest value in the Array\n",tlarge);
}