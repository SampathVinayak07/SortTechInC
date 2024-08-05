#include<stdio.h>
#define and &&

int disp(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

void merge(int a[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = a[left + i];
    for (j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    i = 0; 
    j = 0; 
    k = left; 
    while (i < n1 and j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int a[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        MergeSort(a, left, mid);
        MergeSort(a, mid + 1, right);

        merge(a, left, mid, right);
    }
}
int main(){
    int a[]={50,55,46,61,20};
    int n=*(&a+1)-a;
    MergeSort(a,0,n-1);
    disp(a,n);
}