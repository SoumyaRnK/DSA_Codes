#include <iostream>
#include <string>
using namespace std;
class human
{
public:
    int age;
    int height;
    int weight;
    int getage()
    {
        return this->age;
    }
    string name = "chi";
    void huio()
    {
        cout << "Name: " << name << endl;
        cout << "Not in time" << endl;
    }
    int huio(int a)
    {
        cout << "Not found" << endl;
    }
    int operator+(human& obj){
        cout<<"Hii"<<endl;
    }
int operator()(){
        cout<<"Bye"<<endl;
    }
};
int main()
{
    human h,h1;
    h+h1;
    h();
}