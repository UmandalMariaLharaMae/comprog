#include <iostream>


using namespace std;

class Product{
public:
    void getproduct (void);
    void displayproduct (void);
    Product();



private:
    int ProductID;
    string ProductionName;
    int Price;
    string Manufacture;
    string ExDate;


};

Product::Product(void)
{
    cout<<"The Product Are:"<<endl;
}

void Product::getproduct(void)
{
    for (int i=0; i<2 ;i++)
    {
    cout<<"\n------------------------------\n";
    cout<<"ProductID:";
    cin>>ProductID;
    cout<<"Product Name:";
    cin>>ProductionName;
    cout<<"Price:";
    cin>>Price;
    cout<<"Manufacture:";
    cin>>Manufacture;
    cout<<"Expiration Date:";
    cin>> ExDate;
    }


}

void Product::displayproduct(void)
{

    cout<<"\n------------------------------\n";
    cout<<"The Product Are:"<<endl;
    cout<<"ProductID:"<<ProductID<<endl;
    cout<<"Product Name:"<<ProductionName<<endl;
    cout<<"Price:"<<Price<<endl;
    cout<<"Manufacture:"<<Manufacture<<endl;
    cout<<"Expiration Date:"<<ExDate<<endl;



}


int main()
{

    Product Product ;
    Product.getproduct();

    string ans;
    cout<<"\n------------------------------\n";
    Product.displayproduct();
    cout<<"Do you want to add a product:Y/N?"<<endl;
    cin>>ans;

    return 0;
}
