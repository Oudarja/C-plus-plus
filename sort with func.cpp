#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
            cout<<" "<<a[i];
            cout<<"\n";
        sort(a,a+n,greater<int>());
        for(i=0;i<n;i++)
            cout<<" "<<a[i];
        return 0;
}
