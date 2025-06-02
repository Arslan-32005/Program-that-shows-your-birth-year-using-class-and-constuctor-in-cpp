#include<iostream>
using namespace std;
class person
{
    private:
    string name;
    int currentage;
    int currentyear;
    int birthyear;
    public:
    person()
    {
        cout<<"Enter your name:";
      cin>>name;
      cout<<"Enter your Current age:";
      cin>>currentage;
      cout<<"Enter the Current year:";
      cin>>currentyear;
        birthyear = currentyear-currentage;
    }
    void output()
    {
        cout<<"Your name is:"<<name<<endl;
        cout<<"Your Birth year is:"<<birthyear<<endl;
    }
};
int main()
{     
    person p1;
    p1.output();
}