#include <iostream>
#include <string>
using namespace std;

int main() {

    int rollno, marks;
    string name;

    cout << "Enter the Roll no.: ";
    cin >> rollno;

    cout << "Enter the marks: ";
    cin >> marks;

    cout << "Enter the Name: ";
    cin >> name;

    cout << "\n****** DISPLAY SECTION ********" << endl;

    if (marks >= 90 && marks <= 100)
    {
        cout << name << " Got Outstanding" << endl;
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << name << " Got A+" << endl;
    }
    else if (marks >= 70 && marks < 80)
    {
        cout << name << " Got A" << endl;
    }
    else if (marks >= 60 && marks < 70)
    {
        cout << name << " Got B" << endl;
    }
    else if (marks >= 0 && marks < 60)
    {
        cout << name << " Failed" << endl;
    }
    else
    {
        cout << "Invalid marks!" << endl;
    }

    cout << "Roll no. = " << rollno << endl;
    cout << "Marks = " << marks << endl;
    cout << "Name = " << name << endl;

    return 0;
}