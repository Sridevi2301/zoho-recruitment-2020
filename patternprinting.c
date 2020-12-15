#include<stdio.h> 
int main() 
{ 
  int n; 
	scanf("%d",&n);
	int l1=1,l2=1; 
	for (int i=0;i<n+1;i++) { 
		for (int j=n;j>i;j--) { 
			printf(" "); 
		} 
		for (int k=1;k<=l1;k++) { 
			printf("%d",abs(k-l2)); 
		} 
		l1+=2; 
		l2++; 
		printf("\n"); 
	}
	return 0; 
} 
