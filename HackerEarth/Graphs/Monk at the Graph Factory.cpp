  #include<bits/stdc++.h>
using namespace std;
 
#define double long double

#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=a;i>=b;i--)
#define loopm(i,a,b,step) for(int i=a;i<b;i+=step)
#define loopbm(i,a,b,step) for(int i=a;i>=b;i-=step)

#define pb push_back
#define init(arr,val) memset(arr,val,sizeof(arr))
#define endl "\n"

#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define __ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)

 int main(){
  _; 
  
 //Code goes here
 
 int n;
cin>>n;
 int sum=0;
 
 loop(i,0,n)
 {
     int x;
     cin>>x;
     
     sum+=x;
     
      
 }
 
 int total= 2*(n-1);
 if(sum==total)
    std::cout << "Yes" << endl;
else
    std::cout << "No" << endl;
 
 
   
	return 0;
}