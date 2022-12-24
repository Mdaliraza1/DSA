#include<stdio.h>
int main(){
	int a[100],i,j,pos,ch,t,ti,k,n,min;
	printf("Enter the number of element:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the element:");
		scanf("%d", &a[i]);
	}
	printf("Enter 1 for Bubble short \n Enter 2 for selection sort \n Enter 3 for insertion sort \n ");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
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
		break;
		case 2:
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
		break;
		case 3:
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
		break;
			
	}
	return 0;
}
