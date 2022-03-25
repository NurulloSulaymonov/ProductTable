#include<iostream>
using namespace std;
int main ()
{
    int a;
    cin>>a;

    for(int k=1; k<=a; k++)
    {
        cout<<"Multiplication of "<<k<<endl;
        for(int i=1; i<=10; i++)
        {
            cout<<k<<"*"<<i<<"="<<k*i<<endl;
        }
    }

}

