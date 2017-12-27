#include<bits\stdc++.h>
#include<stdlib.h>
using namespace std;
int num[100];
void Quicksort(int f,int l)
{
    int i,j;
    if(f<l)
    {
        i=f+1;
        j=l;
        while(num[i]<num[f])
        {
            i++;
        }
        while(num[j]>num[f])
        {
            j--;
        }
        while(i<j)
        {
            swap(num[i],num[j]);
            while(num[i]<num[j])
            {
                i++;
            }
            while(num[j]>num[f])
            {
                j--;
            }
        }
        swap(num[f],num[j]);
        Quicksort(f,j-1);
        Quicksort(j+1,l);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of number to sort: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        num[i]=rand()%1000;
    }
    cout<<"The unsortd numbers: ";
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
    Quicksort(0,n-1);
    cout<<"The sorted numbers: ";
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
}
