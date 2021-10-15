#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    int arr[n],ar[q];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    

   for(int l=0;l<k;l++)
   {
        int x=arr[n-1];
    for(int j=n-1;j>0;j--)
    {
        arr[j]=arr[j-1];
    }
    arr[0]=x;
   }

   for(int m=0;m<q;m++)
   {
       cin>>ar[m];
       cout<<arr[ar[m]]<<endl;
   }
   return 0;
}
