#include <iostream>
using namespace std;
class A{
    public:
    
virtual void show(){
    cout<<"class a";
}};
class B:public A{
    public:
void show(){
    cout<<"class b";
}
}
;
int main()
{
A*obj;
B obj2;
obj=&obj2;
obj->show();
return 0;
}