#include<bits/stdc++.h>



using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, c;
        cin>>n>>c;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a, a+n);
        int low=0, high=a[n-1]-a[0], ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int cows=1, prev=a[0];
            for(int i=1; i<n; i++)
            {
                if(a[i]-prev>=mid)
                {
                    cows++;
                    prev=a[i];
                }
            }
            if(cows>=c)
            {
                ans=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        cout<<ans<<endl;
    }
}