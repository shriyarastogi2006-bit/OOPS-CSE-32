#include <iostream>
using namespace std;
class student {
    public:
    string name ;
    void display(){
        cout<<"student name:"<<name<<endl;
    }
};
int main(){
    student s1;
    s1.name="shriya";
    s1.display();
    return 0;

}
