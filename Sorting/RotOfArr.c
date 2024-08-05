#include <stdio.h>

int disp(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate(int arr[], int n, int d) {
    d = d % n;

    reverse(arr, 0, n - d - 1);

    reverse(arr, n - d, n - 1);

    reverse(arr, 0, n - 1);
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int k=7;
    int m=6; 
    rotate(arr,m,k);
    disp(arr,m);
}