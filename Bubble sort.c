#include<stdio.h>
int main(){
	int a[100],i,j,pos,ch,t,ti,k,n,min;
	printf("Enter the number of element:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the element:");
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
				for(j=0;j<n-i-1;j++){
					if(a[j]>a[j+1]){
						t=a[j];
						a[j]=a[j+1];
						a[j+1]=t;
						
					}
				}
			}
			printf("The sorted arrays are:");
			for(i=0;i<n;i++){
				printf("%d", a[i]);
			}
}

	
