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
a.name = "ʯ����";
a.age  = 28.923546;
a.sex  = 'M';
a.ID   = "123456789987654321123456789";
cout<<"����"<<a.name<<endl;
cout<<"����������"<<a.age<<endl;
cout<<"�����Ա���"<<a.sex<<endl;
cout<<"�������֤���ǣ�"<<a.ID<<endl;

return 0;

}


