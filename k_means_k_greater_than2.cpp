#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"enter no of inputs"<<endl;
	cin>>n;
	int k;
	cout<<"enter k val"<<endl;
	cin>>k;
	
	double kx[k],ky[k];
	for(int i=0;i<k;i++)
		cin>>kx[i]>>ky[i];
		
	double x[n],y[n],z[n];
	cout<<"enter x and y for each inputs"<<endl;
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	int mini=INT_MAX,minval=INT_MAX;
	for(int j=0;j<k;j++){
		for(int i=0;i<n;i++){
			cout<<"-------"<<endl;
			cout<<i+1<<endl;
			double distm1=sqrt(pow(x[i]-kx[j],2)+pow(y[i]-ky[j],2));
			cout<<"distance from m"<<j+1<<" :"<<distm1<<endl;
			
			
		}
		cout<<"m"<<mini<<endl;
		cout<<"---------------"<<endl;
	}
	cout<<endl;
	
	return 0;
}
