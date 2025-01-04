#include <iostream>
using namespace std;
//multiple inheritance=1 class 1 se zdaa class ko inherit kre
class a
{
public:
    int rollno = 1;
    
};
class a1 
{ 
public:
string name="aayu";
    
};
// this is multiple inheritance
// ek sath 2 clss ko inherit kia
class a2 :public a1,public a{
    public:

void display(){
cout<<rollno<<name;
}
};

int main()
{
    a2 obj2;
    obj2.display();
}
