#include <iostream>
using namespace std;
//using more than 1 objects
//acccesing objects in a class
class info{
public:int rollno;
string name;
void display(int rollno,string name)
{
    cout<<rollno<<name;
}
}obj1;
int main()
{
 info obj;
 
 obj.display(1,"aayu");
 obj1.display(2,"gaur");
}