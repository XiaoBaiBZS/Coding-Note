/*
输入行数n（n<=30，正整数），输出杨辉三角
输入示例：5
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
	int a[30][31];
	//数组初始化
	a[0][0] = 1;
	a[1][0] = 1;
	a[1][1] = 1;
	for(int t=2;t<30;t++){
		a[t][0]=1;
	} 
	//输入
	int userInput;
	scanf("%d",&userInput); 
	//生成杨辉三角 
	for(int i=2;i<=userInput;i++){
		for(int l=1;l<userInput+1;l++){
			a[i][l]=a[i-1][l-1]+a[i-1][l];
		}
	}
	//输出 
	for(int w=0;w<userInput;w++){
		for(int k=0;k<userInput+1;k++){
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
