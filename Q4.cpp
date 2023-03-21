#include<iostream>
using namespace std;
int main()
{
    int x,a,b;
    cout<<"To find value of x! \n";
    cout<<endl;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<endl;

    x=((a+b)*(a+b))-2*a*b;
    cout<<"The value of x is: "<<x<<endl;
    return 0;
}
