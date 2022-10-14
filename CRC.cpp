#include <iostream>
using namespace std;
int* XOR(int *divisor,int *dividend,int d1,int d2)
{
    int rem1[d2];
    int *rem2=new int[d2-1];
    for(int i=0;i<d2;i++)
    {
        rem1[i]=*(divisor+i);
    }
    for(int i=d2;i<(d1+d2-1);i++)
    {
        for(int j=0;j<d2-1;j++)
        {
            if(rem1[j+1]==*(dividend+j+1))
            {
                rem2[j]=1;
            }
            else{
                rem2[j]=0;
            }
        }
        for(int j=0;j<d2-1;j++)
        {
            rem1[j]=rem2[j];
        }
        rem1[d2-1]=*(divisor+i);
    }
    return rem2;
}
void sender(int *a,int *b,int a1, int b1)
{
    int s[a1+b1-1];
    for(int i=0;i<a1;i++)
    {
        s[i]=*(a+i);
    }
    for (int i = 0; i < b1-1; i++)
    {
        s[i]=0;
    }
    int *remainder=XOR(s,b,a1,b1);
    for(int i=0;i<b1-1;i++)
    {
        cout<<*(remainder+i);
    }
    cout<<endl;
}

void reciever();
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
    sender(message,generator,n1,n2);
    return 0;
}
