
1119 A - Ilya and a Colorful Walk.cpp GNU C++17 Accepted
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 //cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
 #define dbg(x) cerr << #x << " = " << x << endl
 #define endl "\n"
 #define int long long int 
 #define double long double
 #define pb push_back
 #define mp make_pair
 #define PI acos(-1)
 
 const int INF=1e9+5;//billion
 #define MAX 100007
 string alpha="abcdefghijklmnopqrstuvwxyz";
//power (a^b)%m
 int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
   	 
 signed main() {
//  	freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	freopen("error.txt", "w", stderr);
    crap;

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	cin>>arr[i];
    }

    //1
    int i=0,j=n-1;
    int ans=0;
    while(i<=j){
    	if(arr[i]!=arr[j])
    	{
    		ans=j-i;
    		break;
    	}
    	else {
    		i++;
    	}
    }


	 i=0,j=n-1;
    while(i<=j){
    	if(arr[i]!=arr[j])
    	{
    		ans=max(ans,j-i);
    		break;
    	}
    	else {
    		j--;
    	}
    }

    cout<<ans<<endl;

    
                  
     
    return 0;   
 }

