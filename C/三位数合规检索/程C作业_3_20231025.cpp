/*
编写一个程序，求出从200-300之间的三位数，且满足条件：三位数各个位数上的数字之积为42，数字之和为12（如237）。
输入样例： 无输入
输出样例： 237\n
*/
#include<stdio.h>
int main() {
	int userInput=200;
	int x[3]= {0,0,0};
	for(userInput; userInput<=300; userInput++) {
		x[2]=userInput%10;
		x[1]=(userInput%100-x[1])/10;
		x[0]=(userInput-x[1]*10-x[2])/100;
		if((x[0]*x[1]*x[2])==42&&(x[0]+x[1]+x[2])==12) {
			printf("%d%d%d\n",x[0],x[1],x[2]);
		}
	}
	return 0;
}
