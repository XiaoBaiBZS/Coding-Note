/*
连续子列最大，数组{1,3,-5,-8,9,10,11,-12}，分成连续多段，求每段的和最大，输出这个和。
输入示例：
输出示例：30
*/
#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int userInput; 
	vector<int>a;
	vector<int>b;
	//输入
	while(1) {
		scanf("%d",&userInput);
		if(userInput==0) {                  //如果输入0则结束输入 issue：如果用户输入数字就是0该如何判断？ 
			break;
		} else {
			a.push_back(userInput);
		}
	}
	//初始化数组b 
	for(int i=0;i<a.size();i++){
		b.push_back(0);
	}
	int max=b[0];
	for(int s=1; s<a.size(); s++) {
		if(b[s-1] > 0) {                     //如果b的前一项是正数，就加上a
			b[s]=b[s-1]+a[s];
		} else {                             //否则就直接让a=b的这一项 
			b[s] = a[s];
		}
		if(max<b[s]) {                       //更新最大值 
			max=b[s];
		}
	}
	//输出最大 
	printf("%d\n",max);
//	printf("%d",a.size());
//遍历a 
//	for(int i=0;i<a.size();i++){
//		printf("%d",a[i]);
//	}
//	
//	printf("%d",b.size());
//	遍历b 
//	for(int i=0;i<b.size();i++){
//		printf("%d",b[i]);
//	}	
	return 0;
}
