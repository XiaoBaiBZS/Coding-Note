/*
在给定的一个长度为n的数列a里，求最长的不间隔的严格上升子列的长度
即对于数列a[1] , a[2] , a[3] ...... a[n]
找到一对i和j，使得任意a[k] < a[k+1] (i <= k < j)
求子列长度

输入格式：
第一行输入一个n，表示数列长度
第二行为n个数，分别为a[1]，a[2]......a[n]

输入样例： 
5
1 2 3 0 6
输出样例： 
3

样例解释：
1 2 3 0 6中，1 2 3即所求最长的不间隔的严格上升子列

注意：严格上升指大于，不包括等于
*/
//1 2 3 0 6 7 8 9 10
#include<stdio.h>
int main(){
	int n;
	int sum=0;  //计数器 
	int ans=0;  //输出答案 
	int a[200];
	//输入 
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	//判断
	for(int w=1;w<n;w++){
		if(a[w]==a[w-1]+1){
			sum++;
			if(sum>ans){
				ans=sum;
			}
			//printf("%d",ans);
		}
		else{
			sum=0;
		}
	} 
	//输出
	printf("%d",ans+1); 
	return 0;
} 











