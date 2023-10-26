/*
从键盘上输入三个整数x、y、z，再把这三个数从小到大输出。 
输入样例：2 5 1
输出样例：2 1 5 
*/
#include<stdio.h>
int main(){
	int a[3]; 
	int x;
	//输入 
	for(int k=0;k<3;k++){
		scanf("%d",&a[k]);
	}
	//冒泡排序 
	for(int i=0;i<2;i++){
		for(int j=0;j<3-i;j++){
			if(a[j]>a[j+1]){
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	//输出 
	for(int k=0;k<3;k++){
		printf("%d ",a[k]);
	}
	return 0;
}

