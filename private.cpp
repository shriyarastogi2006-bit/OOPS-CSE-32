#include<iostream>
using namespace std;
class student {

  private:
    string name;
    int age;

    public:
    void setData(string n, int a)
   {
    name=n;
    age=a;
   }
};
int main()
{
    
    student s1;
    string name;
    int age;
    cout<<"enter name:";
    cin>>name;
    cout<<"enter age:";
    cin>>age;
    s1.setData(name, age);
    return 0;
}
