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
				min=a[i];
				pos=i;
				for(j=i+1;j<n;j++){
					if(a[j]<min){
						min=a[j];
						pos=j;
					}
				}
				if(i!=pos){
					ti=a[i];
					a[i]=a[pos];
					a[pos]=ti;
				}
			}
			printf("The sorted array is:");
			for(i=0;i<n;i++){
				printf("%d",a[i]);
			}
}
