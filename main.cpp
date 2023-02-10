//simple calculator using function

#include <iostream>

using namespace std;

float calculate_result(float,float);

int main()
{
float a,b;
cout<<"please enter two numbers"<<endl;
cin>>a>>b;
float answer=calculate_result(a,b);
cout<<"the result is: "<<answer;
    return 0;
}

float calculate_result(float num1,float num2)
{
int choice;
float result;
cout<<"enter 1 to add the numbers "<<endl;
cout<<"enter 2 to subtract the numbers"<<endl;
cout<<"enter 3 to multiply the numbers"<<endl;
cout<<"enter 4 to divide the numbers"<<endl;
cin>>choice;
switch(choice)
{
case 1:
     result=num1+num2;
    break;
case 2:
    result=num1-num2;
    break;
case 3:
    result= num1*num2;
    break;
case 4:
    result=num1/num2;
    break;
    return result;


}
}
