#include<bits/stdc++.h>
using namespace std;
int sie[1000010],ans[1000010];
void sieve()
{ 
	for(int i=2; i<=1000000; i++){
		sie[i] = 1;
	}
    
    for(int i=2;i<=1000000;i++)
    {
        if(sie[i]==1)
        {
            ans[i]++;
            for(int j=i+i;j<=1000000;j+=i)
            {
                if(sie[j]==1)
                    ans[i]++;
                sie[j]=0;
            }
            
        }
    }
}

void solve(){
	int x;
	cin>>x;
	cout<<ans[x]<<"\n";
}
int main()
{
	
	ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}