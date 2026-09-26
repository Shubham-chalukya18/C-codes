#include <iostream>
using namespace std;
int Addition ()// function definition ..calling function
{
    int num1 ,num2,sum;
    cout<<"Enter values for num 1& num 2:"<<endl;
    cin>>num1>>num2;
    sum=num1+num2;
    return sum;
}
 int main()// calling function
 {
    int result=Addition();
    cout<<"Addition of num1 & num2:"<<result<<endl;
    return 0;
}