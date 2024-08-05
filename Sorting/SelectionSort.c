#include<stdio.h>

int disp(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

int SelectionSort(int a[],int n){
       for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
}
}
a[i]=a[i]+a[min]-(a[min]=a[i]);
}
disp(a,n);
}

int SelectSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int mid=i+(n-1-i)/2;
        a[i]=a[i]+a[mid]-(a[mid]=a[i]);
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                a[i]+=a[j]-(a[j]=a[i]);
            }
        }
    } 
   disp(a,n);
} 

void selection_mid(int a[],int n,int m){
    for(int i=m;i<n+m;i++){
        int min_ind=(i)%n;
        for(int j=i+1;j<n+m;j++){
            if(a[j%n]<a[min_ind]){
                min_ind=j%n;
            }
        }
        if(min_ind!=i%n){
            a[i%n]=a[i%n]+a[min_ind];
            a[min_ind]=a[i%n]-a[min_ind];
            a[i%n]=a[i%n]-a[min_ind];
        }
    }
    disp(a,5);
}

int main(){
    int a[]={50,55,46,61,20};
    int n=*(&a+1)-a;
    int b[]={90,65,32,97,122,48};
    int m=*(&b+1)-b;
    SelectionSort(a,n);
    printf("\n");
    SelectSort(b,m);
    printf("\n");
    selection_mid(a,n,5);
}