#include <iostream>
using namespace std;
void sender(int *a,int *b,int a1, int b1)
{
    int s[a1+b1-1];
    int rem1[b1],rem2[b1];
    for(int i=0;i<a1;i++)
    {
        s[i]=a[i];
    }
    for (int i = 0; i < b1-1; i++)
    {
        s[i]=0;
    }
    for(int i=0;i<a1;i++)
    {
        int *remainder=XOR(a)
    }
    
}
void reciever();
int* XOR()
{
    
}
int main()
{
    int n1;
    cout<<"Enter length of message: ";
    cin>>n1;
    int message[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>message[i];
    }
    cout<<endl;
    int n2;
    cout<<"Enter the length of generator: ";
    cin>>n2;
    int generator[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>generator[i];
        while(i==0 && generator[i]!=1)
        {
            cout<<"Wrong input Enter again: ";
            cin>>generator[i];
        }
        while(i==n2-1 && generator[i]!=1)
        {
            cout<<"Wrong input Enter again: ";
            cin>>generator[i];
        }
    }
    sender(message,generator,n1,n2);
    for (int i = 0; i < n1; i++)
    {
        cout<<message[i];
    }
    cout<<endl;
    for (int i = 0; i < n2; i++)
    {
        cout<<generator[i];
    }
    cout<<endl;
    return 0;
}
