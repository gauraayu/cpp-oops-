#include <iostream>
using namespace std;
// a inherits a1 and a1 inherits a2
class a
{
public:
    int rollno = 1;
    
};
class a1 : public a
{ // info1 is inherited here
public:
    void display()
    {
        cout << rollno ;
    }
};
class a2 :public a1{
//     public:

// void display(){

// }
};

int main()
{
    a2 obj2;
    obj2.display();
}