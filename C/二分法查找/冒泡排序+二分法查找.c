#include<stdio.h>
int main(){
	//冒泡排序 
	int a[10]={1,3,5,7,6,4,2,10,11,9};
	int x;
	int b[10];
	for(int i=0;i<9;i++){
		for(int j=0;j<10-i;j++){
			if(a[j]>a[j+1]){
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	for(int k=0;k<10;k++){
		 b[k]=a[k]; 
	}
	//二分法查找 
	int start=0;
	int end=10;
	int r;
	int n;
	scanf("%d",&r);
	while((start-end)!=1&&(end-start)!=1){
		n=(start+end)/2;
		if(r<b[n]){
			end=n;
		}
		else if(r==b[n]){
			printf("Find");
			return 0;
		}
		else if(r>b[n]){
			start=n;
		}
	}
	printf("Not Find");
	return 0;
}
