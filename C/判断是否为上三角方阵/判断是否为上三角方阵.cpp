/*
判断是否为上三角方阵，输入t代表一共t个矩阵。 
*/

#include<stdio.h>
int main() {
	int t;			//t个矩阵 循环次数
	int size; 		//矩阵宽度
	int x;			//用户输入
	int flag=0;		//状态
	int a[15][15];	//矩阵
	scanf("%d",&t);	//输入t
	for(int i=0; i<t; i++) {				//循环t次
		scanf("%d",&size);				//输入size
		for(int k=0; k<size; k++) {		//把用户输入放到数组中
			for(int r=0; r<size; r++) {
				scanf("%d",&x);
				a[k][r]=x;
			}
		}
		for(int w=0; w<size; w++) {		//判断是否上三角
			for(int o=0; o<w; o++) {
				//printf("%d\n",a[w][o]);

				if(a[w][o]!=0) {
					flag=1;
				}
			}
		
		}								//输出
	if(flag) {
				printf("NO\n");
				flag=0; 
			} else {
				printf("YES\n");
				flag=0; 
			}
	}
	return 0;
}

