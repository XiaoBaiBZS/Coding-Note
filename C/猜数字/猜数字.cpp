/*
随机生成一个随机数进行猜数字，如果用户输入大于生成数字则输出Too High；
如果用户输入小于生成数字则输出Too Low；如果用户输入正确则输出Right。
输入样例：6
输出样例：Too Low 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int m = rand();
	int a;
	while(1){
		printf("请猜测数字：");
		scanf("%d",&a);
		switch(a>m){
			case 1 :printf("Too High\n");break;
			case 0 :switch(a==m){
				case 1 :printf("Right\n");return 0;
				case 0 :printf("Too Low\n");
			}
		}
	}	
	return 0;
}
