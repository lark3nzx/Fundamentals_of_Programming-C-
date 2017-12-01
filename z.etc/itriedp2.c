#include<stdio.h>
int main()
{
int NUM=6;
int i=0,j=0;
for(i=-NUM; i<=NUM-1; i++)
{ for(j=-NUM; j<=NUM-1; j++)
    {
         //cout<<j<<"part2";
         if(abs(i+j)<=((NUM-1)/2+1))
         {
              cout<<"*";}
         else
         {
              cout<<" ";}
    }
    }
}
