#include <iostream>

using namespace std;

int InputArraySize();
void inputArray(int[]);
void displayarray(int[]);
void selected(int[]);
int arrSize;

char ch;
int main()
{
    int new_age[arrSize];
    inputArray(new_age);
    displayarray(new_age);
    selected(new_age);
    return 0;
}
int InputArraySize()
{
    cout<<"Enter Array Size:";
    cin>>arrSize;

    return arrSize;
}

void inputArray(int age[])
{
     InputArraySize();
    for(int i=0; i<=arrSize-1;i++)
    {
        cout<<"Enter Value for Position " << i + 0 <<":";
        cin>>age[i];
    }
}

void displayarray(int age[])
{
    for(int i=0;i<=arrSize-1;i++)
    {
        cout<<"\n"<<endl;
        cout<<"Enter Value for Position:"<< i + 0 <<" is "<< age [ i ] <<endl;


    }
}

void selected(int age[])
{
    do{


    int i, num, n, cnt=0, pos;

   cout<<"\n"<<endl;
   cout <<"Enter Element Value to be Selected :";
   cin>>num;
   for (i=0;i<arrSize;i++)
   {
       if(age[i]==num)
       {
           cnt++;
           pos=i;
           break;

       }
   }
   if (cnt==0)
   {
    cout<<"\n Element Not Found ...!!";

   }
   else
   {

    cout <<"Element with Value of: "<< num << " Found at position : " << pos;

   }
    cout<<"\n"<<endl;
    cout <<"Do you want to try again ? [Y/N]:";
    cin>>ch;

    }while(ch=='Y');


}

