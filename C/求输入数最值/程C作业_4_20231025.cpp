/*
编写C语言程序实现下面功能，判断用户输入的正整数中，值最大和最小各是多少？用户输入
的结束值为-1，输入其余负整数，程序提示警告“您输入了负数，请重新输入！”。
输入样例：2 5 3 6 1 -1
输出样例：6\n1\n
输入样例：5 -6
输出样例：您输入了负数，请重新输入！\n
*/
#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int userInput;
	int x;
	int aLength;
	vector <int> a;
	//输入于格式控制 
	while(1) {
		scanf("%d",&userInput);
		if(userInput==-1) {
			break;
		} else if(userInput<0) {
			printf("您输入了负数，请重新输入！\n ");
			a.clear();
		} else {
			a.push_back(userInput);
		}
	}
	//冒泡排序
	aLength=a.size();
	for(int i=0; i<aLength-2; i++) {
		for(int j=0; j<aLength-1-i; j++) {
			if(a[j]>a[j+1]) {
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	//输出 
	printf("%d\n",a[aLength-1]);
	printf("%d\n",a[0]);
	return 0;
}
