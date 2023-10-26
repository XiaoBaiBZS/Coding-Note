#include<stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,9,10,11};
	int start=0;
	int end=10;
	int x;
	int n;
	int t=1;
	scanf("%d",&x);
	while((start-end)!=1&&(end-start)!=1){
		n=(start+end)/2;//5 2 1 or 5 7 8
		if(x<a[n]){
			end=n;
		}
		else if(x==a[n]){
			printf("Find");
			return 0;
		}
		else if(x>a[n]){
			start=n;
		}
	}
	printf("Not Find");
	return 0;
}
