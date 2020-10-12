#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a,b;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        b.push_back(x);
    }
    sort(b.begin(),b.end());
    sort(a.begin(),a.end());
    x=0;
        while((a[0]+x)%m!=b[n-1])
        {
            x++;
        }
        vector<int> c=a;
        for(int j=0;j<n;j++)
        {
            c[j]=(a[j]+x)%m;
        }
        sort(c.begin(),c.end());
        if(c==b)
        {
            cout<<x;
            return 0;
        }
        x=0;
        while((a[0]+x)%m!=b[0])
        {
            x++;
        }
        c=a;
        for(int j=0;j<n;j++)
        {
            c[j]=(a[j]+x)%m;
        }
        sort(c.begin(),c.end());
        if(c==b)
        {
            cout<<x;
            return 0;
        }
}
