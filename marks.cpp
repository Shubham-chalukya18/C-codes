#include <iostream>
#include <string>
using namespace std;
class student

{
    public:
    //data members
    int roll_no;
    string name;
    int physics;
    int chemistry;
    int maths;
    //member function
    void getinfo()
    {
        cout<<"Enter roll number:";
        cin>>roll_no;
        cout<<"Enter name of student:";
        cin>>name;
        cout<<"Enter physics marks:";
        cin>>physics;
        cout<<"Enter chemistry marks:";
        cin>>chemistry;
        cout<<"Enter maths marks:";
        cin>>maths;
}


    void displayinfo()
    {
        cout<<"Roll number:"<<roll_no<<endl;
        cout<<"Name of student:"<<name<<endl;
        cout<<"Physics marks:"<<physics<<endl;
        cout<<"Chemistry marks:"<<chemistry<<endl;
        cout<<"Maths marks:"<<maths<<endl;
    }

    void Result()
    {
        float percentage;
        percentage=(physics+chemistry+maths)/3;
        cout<<"Percentage of student:"<<percentage<<endl;
    }
};
int main()
{
    student s1,s2;
   cout<<"s1 information:"<<endl;
    s1.getinfo();
    s1.Result();
cout<<"s2 information:"<<endl;
    s2.getinfo();
    s2.Result();
    return 0;
}