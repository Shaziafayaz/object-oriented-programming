#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the number:"<<endl;
    cin>>x;
    for (int i=1;i<=200;i++)
    {
        cout<<x*i<<"\t";
    if(i%10==0)
    cout<<endl;
    }
    return 0;
}