#include <bits/stdc++.h>
using namespace std;

int k,v,n;

struct node{
	int v;
	double* var;
	char type;
	double dist;
};

int comp(node a,node b){
	return a.dist<b.dist;
}

int main(){
	
	cout<<"enter no of data";
	cin>>n;
	cout<<" enter k "<<endl;
	cin>>k;
	cout<<"enter no of variables ";
	cin>>v;
	cout<<"enter the required values";
	double f[v];
	for(int i=0;i<v;i++)cin>>f[i];
	node data[n];
	cout<<"enter the data"<<endl;
	for(int i=0;i<n;i++){
		data[i].v=v;
		data[i].var=new double[v];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<v;j++){
			cin>>data[i].var[j];
		}
		cin>>data[i].type;

		double sum=0;
		for(int j=0;j<v;j++){
			sum+= (data[i].var[j]-f[j])*(data[i].var[j]-f[j]);
		}
		data[i].dist= sqrt(sum);
	}
//	sort(data,data+n,comp);
	cout<<endl<<"------------------------"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<v;j++){
			cout<<data[i].var[j]<<" ";
		}
		cout<<data[i].type<<" ";	
		cout<<data[i].dist<<" ";
		
		
		cout<<endl;
	}
	cout<<"----------------------"<<endl;
	int ans=-1;
	sort(data,data+n,comp);
	for(int i=0;i<k;i++){
		for(int j=0;j<v;j++){
			cout<<data[i].var[j]<<" ";
		}
		cout<<data[i].type<<" ";	
		cout<<data[i].dist<<" ";
		
		
		cout<<endl;
	}
	
}
