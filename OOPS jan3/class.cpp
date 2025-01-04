#include <iostream>
using namespace std;
class info{
public:int rollno;
string name;//passing the value in function so that it
void display(int rollno,string name)
{
    cout<<rollno<<name;//it is printed bcz it is global so we do not have to passs it in any function to print it
}

};
int main()
{
 info obj;
 
 obj.display(1,"aayu");
}