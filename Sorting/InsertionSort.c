#include<stdio.h>

int disp(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
int InsertionSort(int a[],int n){
       for(int i=1;i<n;i++){
            int t = a[i];
            int j = i-1;
            while(j>=0 && a[j]>t){
                a[j+1]=a[j];
                j--;         
            }
        a[j+1]=t;
        }
    disp(a,n);
}
 
int main(){
    int a[]={50,55,46,61,20};
    int n=*(&a+1)-a;
    InsertionSort(a,n);
}