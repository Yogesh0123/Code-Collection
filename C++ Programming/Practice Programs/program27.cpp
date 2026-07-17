#include<iostream>
using namespace std;

//Encapsulation
class Marvellous 
{
    //Acess specifier
    public:
    int no1,no2;//Charecteristics

    //Default constructor
    Marvellous()
    {
      cout<<"inside default constructor\n";
      no1=0;
      no2=0;
    }
//paramitrised constructor
    Marvellous(int A, int B)
    {
      cout<<"Inside Paramitrised constructor\n";
      no1=A;
      no2=B;
    }
//Copy constructor
Marvellous(Marvellous &ref)
{
    cout<<"Inside Copy Constructor\n";
    no1=ref.no1;
    no2=ref.no2;
}

//distructor
    ~Marvellous()
    {
        cout<<"Inside distructor\n";
    }


};

int main()
{
    cout<<"inside main\n";

    Marvellous mobj1();//default constructor 
    Marvellous mobj2(11,21);//parametrise constructor 
    Marvellous mobj3(mobj2);//copy constructor

    cout<<"end of main\n";

return 0;
}//All destructor gets called 
//ConstructerDemo.