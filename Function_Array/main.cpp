#include <iostream>
#define size 10

using namespace std;

int infosize();
void getbasicinfo(string [],string [],string [],string[],int[]);
char ans;

string Fname[10]={"Aira","Czarina", "Ronel", "Amae", "Hazel","Mean","Angel","Lhara","Ambey","Luiegi"};
string Lname[10]={"Abergos","Bacitttt","Cudiamat","Geronaga","Gonzales","Ballesteros","Legaspi","Umandal","Cargado","Pineza"};
string Contact[10]={"09556489994","09435678829","09273529999","09278253248","09231263725","09231263725","09278253248",
"09435678829","09435678829","09273529999"};
string Email[10]={"aira@gmail.com","cza@gmail.com","nel@gmail.com","rica@gmail.com","hazel@gmail.com","mean@gmail.com",
"angel@gmail.com","lhara@gmail.com","ambey@gmail.com","luiegi@gmail.com"};
int i, arrSize, age [10] = {20, 19, 20, 20, 20,20,20,19,15,15};
int main()
{
    int new_age [arrSize];
    getbasicinfo(Fname,Lname,Contact,Email,age);


    return 0;
}

int infosize()
{

    cout<<"Enter Size:";
    cin>>arrSize;


    return arrSize;
}

void getbasicinfo(string Fname[],string Lname[],string Contact[],string Email[],int age[])
{
    do{
    infosize();

    for (int i=0; i<arrSize; i++)
    {
       cout<<"Name:" << Fname[i] << "\t LastName:" << Lname[i]<< "\t Contacts:" << Contact [i];
       cout<<"\t Email:"<<Email[i]<<"\t Age:"<<age[i]<<endl;
    }

    cout<<"\n"<<endl;
    cout<<"do you want to tryagain?Y/N:";
    cin>>ans;
    }while (ans=='Y');
}



