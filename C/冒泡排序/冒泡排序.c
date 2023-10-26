#include<stdio.h>
int main(){
	int a[10]={1,3,5,7,6,4,2,10,11,9};
	int x;
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
		printf("%d ",a[k]);
	}
	return 0;
}
