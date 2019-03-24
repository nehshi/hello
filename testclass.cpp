#include<iostream>
#include<string>
using namespace std;


class Person{
public:
   string name;
   int  age;
   char sex;
   string  ID;

};

int main() 
{
Person a;
a.name = "石大中";
a.age  = 28.923546;
a.sex  = 'M';
a.ID   = "123456789987654321123456789";
cout<<"他叫"<<a.name<<endl;
cout<<"他的年龄是"<<a.age<<endl;
cout<<"他的性别是"<<a.sex<<endl;
cout<<"他的身份证号是："<<a.ID<<endl;

return 0;

}


