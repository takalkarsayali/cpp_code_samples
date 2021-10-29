#include<iostream>
#include<stdio.h>    //Header files
using namespace std;  //namespace
/*
    Example of Function Overloading : When there are multiple functions with same name but different parameters then we say that the function is overloaded 
    In this case During execution which function is called is depend on the parameters passed 
*/
class FuncOver
{
public:
void fun(int x)
{
    cout << "Value of x in 1st function is: "<< x << endl;
}
void fun(double x)
{
    cout << "Value of x in 2nd function is: "<< x << endl;

}
void fun(int x,int y)
{
    cout << "Value of x and y in 3rd function is: "<< x <<" and " << y << endl;

}
};   //Class ended
int main()  //function main
{
    FuncOver obj;
    obj.fun(4);
    obj.fun(0.5345782369);
    obj.fun(5,7);
    return 0;
}