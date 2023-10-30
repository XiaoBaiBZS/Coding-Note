/*
输出杨辉三角
输出示例： 
1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1 
*/
#include<stdio.h>
int main(){
	//定义数组 
	int a[5][6]={{1,0,0,0,0,0},{1,2,1,0,0,0},{1,0,0,0,0,0},{1,0,0,0,0,0},{1,0,0,0,0,0}} ;
	//生成杨辉三角 
	for(int i=2;i<=5;i++){
		for(int l=1;l<6;l++){
			a[i][l]=a[i-1][l-1]+a[i-1][l];
		}
	}
	//输出 
	for(int w=0;w<5;w++){
		for(int k=0;k<6;k++){
			if(a[w][k]!=0){
				printf("%d ",a[w][k]);
			}
			else{
				printf("\n");
				break;
			}
		}
	}
	
	return 0;
} 
