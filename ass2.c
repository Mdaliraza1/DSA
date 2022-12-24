#include<stdio.h>
int main(){
    int m,n,i,j,a[10][10],s[10][10],nz=0,k,r,g,ex;
    printf("Enter the number of row and column in the array: \n");
    scanf("%d %d", &m,&n);
    printf("please enter the array elements: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
            if(a[i][j]!=0){
                nz++;
            }

        }
    
    printf("Entered array element are: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t", a[i][j]);
        }printf("\n");
    }
    if(nz<m*n/2){
        printf("\n This is a sparse matrix...\n");
        s[0][0]=m;
        s[0][1]=n;
        s[0][2]=nz;
        k=1;
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=0){
                s[k][0]=i;
                s[k][1]=j;
                s[k][2]=a[i][j];
                k++;
            }
        }
    }printf("The 3 tuple is: \n");
    for(i=0;i<nz+1;i++){
        for(j=0;j<3;j++){
            printf("%d \t", s[i][j]);
        }
        printf("\n");
    }
    
    }
    
    return 0;
}