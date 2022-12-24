#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,arr[100],i,pos,max,ele,min,max_ind,min_ind,ch;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Enter a[%d]:", i);
        scanf("%d", &arr[i]);
    }
    while(1){
        printf("\n Array menu:-");
        printf("\n 1 Maximum & Minimum \n 2 Insert \n 3 Delete \n 4 Display \n 5 Exit");
        printf("\nEnter the choice:");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            max=arr[0];
            min=arr[0];
            max_ind=0;
            min_ind=0;
            for(i=0;i<n;i++){
                if(arr[i]>max)
                {
                    max=arr[i];
                    max_ind=i;
                }
                else if(arr[i]<min)
                {
                    min=arr[i];
                    min_ind=i;
                    }   
                }
                printf("Max= %d at %d position, Min=%d at %d position",max,max_ind+1,min,min_ind+1);
                break;
                case 2:
                printf("Enter the position to be insert:");
                scanf("%d", &pos);
                if(pos<=n && pos>0){
                printf("Enter the value to insert:");
                scanf("%d",&ele);
                for(i=n;i>=pos;i--){
                    arr[i]=arr[i-1];
                }
                arr[i]=ele;
                n++;
                }
            break;
            case 3:
                printf("Enter the position to delete:");
                scanf("%d", &pos);
                    for(i=pos-1;i<n-1;i++)
                        arr[i]=arr[i+1];
                    n--;    
            break;
            case 4:
            
                for(i=0;i<n;i++){
                    printf("%d ", arr[i]);
                }
            break;
            case 5: 
                printf("\n Exiting");
                exit(0);
            default:
                printf("\n Invalid input");       
        }
    }
    return 0;
}