//รูปแบบการเขียนประกาศตัวแปร struct แล้วสร้างfunction มาเรียก print
#include<stdio.h>
#include <stdlib.h>
int i;
struct student //declare global struct
{
  int stdID;
  char stdName[9];
  char stdSurname[9];
  char Gender;
  int Age;
};struct student info[5]; //struct student ตัวแปร info
struct student info[5]={
            {1,"Somchai","Jaidee",'m',18},
            {2,"Somsri","Deejai",'f',20},
  {3,"Somchoke","Sudjai",'m',17},
            {4,"Somnuk","Kidwai",'f',18},
            {5,"Somsak","Meedee",'m',17}
          };
void listAll(); //prototype
int main() //main
{
listAll();
}
void listAll() //function to print out info
{
  for(i=0;i<5;i++)
  {
  printf("%d ",info[i].stdID);
  printf("%s \t",info[i].stdName);
  printf("%s ",info[i].stdSurname);
  printf("%c ",info[i].Gender);
  printf("%d ",info[i].Age);
  printf("\n");
  }
}
