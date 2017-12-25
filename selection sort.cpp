#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of number to sort: ";
    cin>>n;
    int num[n];
    srand(rand()%1000);
    for(int i=0;i<n;i++)
    {
        num[i]=rand()%1000;
    }
    cout<<"The unsorted number : ";
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;

    for(int j=n-1;j>=0;j--)
    {
        int t=0;
        for(int k=1;k<=j;k++)
        {
            if(num[t]<num[k])
                t=k;
        }
        swap(num[j],num[t]);

    }
    cout<<"The sorted list: ";
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}
