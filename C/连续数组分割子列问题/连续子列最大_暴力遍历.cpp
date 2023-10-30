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
	int a[10]= {1,3,-5,-8,9,10,11,-12};
	vector<int>b;
	//尝试暴力遍历
 	int n=0;
 	int sum=0;
 	for(int i=0;i<10;i++){                //从数组a角标i开始 
 		for(int k=i;k<10;k++){            //每次遍历数组a[i]到a[k-1] 
 			for(int r=i;r<=k;r++){        //开始遍历 
 				sum+=a[r];                //求和 
 				b.push_back(sum);         //存入数组b 
 				
			 }
			 sum=0;                       //归零 
		 }
	 }
	 //遍历数组b 
	 for(int w=0;w<b.size();w++){
	 	printf("%d\n",b[w]);
	 }
	 //TODO：使用冒泡排序排序数组b，求最大 
	return 0;
}
