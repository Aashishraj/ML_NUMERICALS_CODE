#include <bits/stdc++.h>
using namespace std;

void covariance_matrix(){
	 double a[10][10],b[10][10],mul[10][10];
	 int m,n,i,j,k;
	
	 printf("Enter order of matrix A: ");
	 scanf("%d %d",&m,&n);
	 double u[m];
	 printf("Enter the globalmean");
	 for(int i=0;i<m;i++)
	 	scanf("%lf ",&u[i]);
	 
	 for(i=1;i<=m;i++)
	 {
	  for(j=1;j<=n;j++)
	  {
	  
	   scanf("%lf",&a[i][j]);
	   a[i][j]=a[i][j]-u[i-1];
	   b[j][i]=a[i][j];
	  }
	 }
	 
	 for(i=1;i<=m;i++)
	 {
	  for(j=1;j<=n;j++)
	  {
	  
	   cout<<a[i][j]<<" ";
	  
	  }
	  cout<<endl;
	 }
	 
	 
	 printf("\nAnswer:\n");
	 for(i=1;i<=m;i++)
	 {
	  for(j=1;j<=m;j++)
	  {
	   mul[i][j]=0;
	   for(k=1;k<=n;k++)
	    mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
	   printf("%4lf   ",mul[i][j]);
	   printf("     ");
	  }
	  printf("\n");
	 }
}

int main(){
	covariance_matrix();
}
