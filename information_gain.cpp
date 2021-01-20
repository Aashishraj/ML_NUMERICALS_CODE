#include <bits/stdc++.h>
using namespace std;

double ig(double p,double n){
	double a1= p/(p+n);
	double a2= n/(p+n);
	double ans1,ans2;
	ans1= -1*a1*(log2(a1));
	ans2= -1*a2*(log2(a2));
	cout<<ans1<<" "<<ans2<<endl;
	double ans= ans1 + ans2;
	return ans;
}

int main(){
	double p,n;
	cin>>p>>n;
	cout<<ig(p,n);
	return 0;
}
