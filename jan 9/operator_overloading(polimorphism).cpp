#include <iostream>
using namespace std;
class A{

int value;
public:A(int x=0){
 value=x;
}
A add(A obj){
A ob;
ob.value=value+obj.value;
return ob;
}


};
int main()
{
 A obj(10);
 A obj1(11);
A obj2;
obj2=obj.add(obj1);
cout<<obj2.value;
}