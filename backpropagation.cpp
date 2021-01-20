#include <bits/stdc++.h>
using namespace std;

string p(double a,double b,double c){
	string s="";
	s+= to_string(a) + " * " + to_string(b) + " * " + to_string(c);
	return s; 
}

int main(){
	double i1,i2,h1,h2,o1,o2,n;
	double w1,w2,w3,w4,w5,w6,w7,w8,b1,b2;
	cin>>i1>>i2>>o1>>o2>>n;
	cin>>w1>>w2>>w3>>w4>>w5>>w6>>w7>>w8>>b1>>b2;
	
	double neth1= (w1*i1)+(w2*i2)+b1;
	cout<<"neth1: "<<neth1<<endl;
	double outh1= 1/(1+ exp(-neth1));
	cout<<"outh1: "<<outh1<<endl;
	
	double neth2= (w3*i1)+ (w4*i2)+b1;
	cout<<"neth2: "<<neth2<<endl;
	double outh2= 1/(1+ exp(-neth2));
	cout<<"outh2: "<<outh2<<endl;
	
	double neto1= (w5*outh1) + (w6*outh2) + b2;
	cout<<"neto1: "<<neto1<<endl;
	double outo1= 1/(1+ exp(-neto1));
	cout<<"outo1: "<<outo1<<endl;
	
	double neto2= (w8*outh2)+ (w7*outh1)+b2;
	cout<<"neto2: "<<neto2<<endl;
	double outo2= 1/(1+ exp(-neto2));
	cout<<"outo2: "<<outo2<<endl;
	
	double eo1= pow((o1-outo1),2)/2;
	cout<<"eo1 : "<<eo1<<endl;
	double eo2= pow((o2-outo2),2)/2;
	cout<<"eo2 : "<<eo2<<endl;
	double etotal=eo1+eo2;
	cout<<"etotal : "<<etotal<<endl;
	cout<<endl;
	
	double diffw5= (-(o1-outo1))*(outo1*(1-outo1))*outh1;
	cout<<"diffw5 : "<<p(-(o1-outo1),(outo1*(1-outo1)),outh1)<<" = " <<diffw5<<endl;
	double w5new=  w5- (n*(diffw5));
	cout<<" w5new : "<<w5new<<endl;
	
	double diffw6= (-(o1-outo1))*(outo1*(1-outo1))*outh2;
	cout<<"diffw6 : "<<p(-(o1-outo1),(outo1*(1-outo1)),outh2)<<" = " <<diffw6<<endl;
	double w6new=  w6- (n*(diffw6));
	cout<<" w6new : "<<w6new<<endl;
	
	double diffw7= (-(o2-outo2))*(outo2*(1-outo2))*outh1;
	cout<<"diffw7 : "<<p(-(o2-outo2),(outo2*(1-outo2)),outh1)<<" = "<< diffw7<<endl;
	double w7new=  w7- (n*(diffw7));
	cout<<" w7new : "<<w7new<<endl;
	
	double diffw8= (-(o2-outo2))*(outo2*(1-outo2))*outh2;
	cout<<"diffw8 : "<<p(-(o2-outo2),(outo2*(1-outo2)),outh2)<<" = "<<diffw8<<endl;
	double w8new=  w8- (n*(diffw8));
	cout<<" w8new : "<<w8new<<endl;
	
	
	double diffw1= ( (-(o1-outo1)*(outo1*(1-outo1))*w5) + (-(o2-outo2)*(outo2*(1-outo2))*w7)   )*(outh1*(1-outh1))*i1;
	cout<<"diffw1 : "<<p(( (-(o1-outo1)*(outo1*(1-outo1))*w5) + (-(o2-outo2)*(outo2*(1-outo2))*w7)   ),(outh1*(1-outh1)),i1)<<" = "<<diffw1<<endl;
	double w1new=  w1- (n*(diffw1));
	cout<<" w1new : "<<w1new<<endl;
	
	double diffw2= ( (-(o1-outo1)*(outo1*(1-outo1))*w5) + (-(o2-outo2)*(outo2*(1-outo2))*w7)   )*(outh1*(1-outh1))*i2;
	cout<<"diffw2 : "<<p(( (-(o1-outo1)*(outo1*(1-outo1))*w5) + (-(o2-outo2)*(outo2*(1-outo2))*w7)   ),(outh1*(1-outh1)),i2)<<" = "<<diffw2<<endl;
	double w2new=  w2- (n*(diffw2));
	cout<<" w2new : "<<w2new<<endl;
	
	double diffw3= ( (-(o1-outo1)*(outo1*(1-outo1))*w6) + (-(o2-outo2)*(outo2*(1-outo2))*w8)   )*(outh2*(1-outh2))*i1;
	cout<<"diffw3 : "<<p(( (-(o1-outo1)*(outo1*(1-outo1))*w6) + (-(o2-outo2)*(outo2*(1-outo2))*w8)   ),(outh2*(1-outh2)),i1)<<" = "<<diffw3<<endl;
	double w3new=  w3- (n*(diffw3));
	cout<<" w3new : "<<w3new<<endl;
	
	
	double diffw4= ( (-(o1-outo1)*(outo1*(1-outo1))*w6) + (-(o2-outo2)*(outo2*(1-outo2))*w8)   )*(outh2*(1-outh2))*i2;
	cout<<"diffw4 : "<<p(( (-(o1-outo1)*(outo1*(1-outo1))*w6) + (-(o2-outo2)*(outo2*(1-outo2))*w8)   ),(outh2*(1-outh2)),i2)<<" = "<<diffw4<<endl;
	double w4new=  w4- (n*(diffw4));
	cout<<" w4new : "<<w4new<<endl;
	
	
}
