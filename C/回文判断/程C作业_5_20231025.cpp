/*
判断用户输入一个正整数的位数，并判断其是否为回文数。
输入样例：13431
输出样例：YES
输入样例：123
输出样例：NO
*/
#include<stdio.h>
int main(){
	int flag=1;
	int i; 
	int j;
	char a[200]={'\0'};
	//输入 
	scanf("%s",&a); 
	//遍历数组a，获取数组a实际输入字符数i 
	for(i=0;a[i]!='\0';i++){
	}
	//判断 
	for(int k=0,j=i-1;k<=j;k++,j--){
		if(a[k]!=a[j]){
			flag = 0;
			break;
		}
		
	}
	//输出 
	if(flag){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
