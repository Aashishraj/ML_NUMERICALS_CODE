#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"enter no of inputs"<<endl;
	cin>>n;
	double x[n],y[n];
	cout<<"enter x and y for each inputs"<<endl;
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	double mat[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			mat[i][j]=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
		}
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<fixed<<setprecision(3)<<mat[i][j]<<"    ";
		}
		cout<<endl;
	}
	return 0;
}
