#include <iostream>

using namespace std;


void password()
{
    string password,login,choice;
    int trials=0, tries=3;
    int points=0,item,quantity;
    int item1=10,items2=30,items3=40,item4=60;

    while(trials!=3)
    {
    cout << "Enter your password:" ;
    cin>>password;


    if (password=="123")
    {
        cout<<"\n"<<endl;
        cout<<"Welcome User"<<endl;
        cout<<"Buy some stuffs to gain points and earned more reward"<<endl;
        cout<<"[1]Wearables \t[2]Phone\t[3]Tablets\t[4]Camera \n"<<endl;
        cout<<"Select an items:";
        cin>>item;
        cout<<"quantity:";
        cin>>quantity;

       points=item*quantity;
       cout<<"You already have" << points <<endl;

    break;
    }

else
{
    cout<<"Try again Y or N:"<<endl;
    cin>> choice;

        if(choice=="Y" || choice == "y")
        {

        trials++;
        if(trials == 1)
        {
            cout<<"You only have"<< tries - trials <<"trials remaining \n";
        }

        if(trials == 2)
        {
            cout<<"You only have"<< tries - trials <<"trials remaining \n";
        }
        if(trials == 3)
        {
            cout<<"You only have exceeded the number of trials, Please try again later"<<endl;

        }
    }
    }
}
}

int main()
{
    password();


    return 0;
}

