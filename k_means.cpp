#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"enter no of inputs"<<endl;
	cin>>n;
	double m1x,m2x,m1y,m2y;
	cin>>m1x>>m1y;
	cin>>m2x>>m2y;
	double x[n],y[n];
	cout<<"enter x and y for each inputs"<<endl;
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<"-------"<<endl;
		cout<<i+1<<endl;
		double distm1=sqrt(pow(x[i]-m1x,2)+pow(y[i]-m1y,2));
		cout<<"distance from m1= "<<distm1<<endl;
		double distm2=sqrt(pow(x[i]-m2x,2)+pow(y[i]-m2y,2));
		cout<<"distance from m2= "<<distm2<<endl;
		if(distm2<distm1)
			cout<<"          m2"<<endl;
		else
			cout<<"          m1"<<endl;
		cout<<"---------------"<<endl;
	}
	cout<<endl;
	
	return 0;
}
