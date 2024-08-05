#include<stdio.h>

int disp(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

int BubbleSort(int a[],int n){
int t;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if(a[j]>a[j+1]){
                a[j]+=a[j+1]-(a[j+1]=a[j]);
            }
		}
		
	}
   disp(a,n);
}

void rbSort(int *a,int n){
    int f;
    for(int i=0;i<n-1;i++){
        f=1;
        for(int j=n-1;j>i;j--){
            if(a[j]>a[j-1]){
                a[j]=a[j]+a[j-1]-(a[j-1]=a[j]);
                f=0;
            }
        }
        if(f)
            break;
    }
 disp(a,n);
}

int main(){
    int a[]={50,55,46,61,20};
    int n=*(&a+1)-a;
    BubbleSort(a,n);
    printf("\n");
    rbSort(a,n);
}
