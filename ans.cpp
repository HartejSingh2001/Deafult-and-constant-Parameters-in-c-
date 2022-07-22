#include <iostream>
using namespace std;
void fun(int x,int y=2)
{
    cout<<"x= "<<x<<"\n";
    cout<<"y= "<<y<<"\n";
}
void add(const int x)
{
    int y=2;
    y=y+x;
    cout<<"Using const parameter x and do y=x+y:: "<<y<<"\n";
    cout<<"x=x+y is not allowed because we cannot change value of const paramter\n";
}
int main()
{
    fun(1);
    fun(1,100);// 100 will be overwritten in the place of 2 , 100 will be printed
    cout<<"Now constant parametrs";
    add(2);
    return 0;
}
