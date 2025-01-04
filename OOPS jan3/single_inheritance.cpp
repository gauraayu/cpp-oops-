#include <iostream>
using namespace std;
class info
{
public:
    int rollno = 1;
    string name = "aayu";
};
class info1 : public info
{ // info1 is inherited here
public:
    void display()
    {
        cout << rollno << name;
    }
};

int main()
{
    info1 obj1;
    obj1.display();
}