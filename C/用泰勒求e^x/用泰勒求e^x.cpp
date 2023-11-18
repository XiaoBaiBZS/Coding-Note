#include<stdio.h>
int main(){
	double x;					//用户输入x
	double sum=1;				//最终结果sum，sum初始值为1 
	double sumX=1;				//求x的n次方（不会用math.h） 
	int sumNum=1;				//求阶乘 
	int n;						//用户输入n 
	scanf("%lf %d",&x,&n);		//用户输入 
	for(int i=1;i<=n;i++){		//大循环，循环n次 
		sumX=1;					//初始化 
		sumNum=1;
		for(int k=1;k<=i;k++){	//求x的n次方
			sumX*=x;
		}
		for(int j=1;j<=i;j++){	//求阶乘 
			sumNum*=j;
		}
		sum+=sumX/sumNum;		//累加 
	}
	printf("%.4lf",sum);			//保留4位小数点输出 
	return 0;
}
