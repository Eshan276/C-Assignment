#include<stdio.h>

int main(){
int a[50];
int i ,temp, j,n;
printf("Enter the size of array?");
scanf("%d",&n);
printf("Now enter the elements:");
for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
                    
for(i=0;i<n;++i){                //bubble sort
    for(j=i+1;j<n;++j){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(i=0;i<n;++i){
    printf("%d",a[i]);
}
    return 0;
}
