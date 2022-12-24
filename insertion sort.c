#include<stdio.h>
int main(){
	int a[100],i,j,pos,ch,t,ti,k,n,min;
	printf("Enter the number of element:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the element:");
		scanf("%d", &a[i]);
	}
	for(i=1;i<n;i++){
				k=a[i];
				j=i-1;
				while(k<a[j]&&j>=0){
					a[j+1]=a[j];
					j=j-1;
				}
				a[j+1]=k;
			}
			printf("The sorted array is:");
			for(i=0;i<n;i++){
				printf("%d",a[i]);
			}
}
