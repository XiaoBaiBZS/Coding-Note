//#include<stdio.h>
//int main(){
//	float x;
//	int y;
//	scanf("%f %f",&x,&y);
//	printf("%f,%d",x,y);
//	return 0;
//} 

//#include<stdio.h>
//int main(){
//	signed char chr;
//	chr=129;
//	printf("%d\n",chr);
//	return 0;
//}

//k=n++
//--->
//k=n,n=n+1

//#include<stdio.h>
//int main(){
//	int a=0;
//	int b=1;
//	int c=0;
//	int d=a||b&&c;
//	printf("%d",d);
//	return 0;
//}

//#include<stdio.h>
//void main(){
//	1<2?return 1:return 2;
//}
////-->编译错误，void 

//#include<stdio.h>
//int main(){
//	int score = 75;
//	printf("%d",80>score>70);
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int x=-2;
//	int y=x>0?1:x<0?-1:0;
//	printf("%d",y);
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	printf("%d",(x<<1)+(x>>1));
//	return 0;
//}
////-->5 
////<<1二进制左移一位相当于*2；>>1二进制右移一位相当于/2；

//#include<stdio.h>
//int main(){
//	int x,y,z;
//	x=y=z=5;
//	printf("%d %d %d",x,y,z);
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int a=10;
//	int b=(a+5,a);
//	printf("%d",b);
//	return 0;
//}
////-->10
////逗号表达式的值取决于最后一项

//#include<stdio.h>
//int main(){
//	int a=10;
//	int b=(a+=5,a);
//	printf("%d",b);
//	return 0;
//} 
////-->15

//#include<stdio.h>
//int main(){
//	int a=10;
//	int b=(a+=5,a*2,a-=10);
//	printf("%d",b);
//	return 0;
//}
////-->5
////a=10-->15-->5，步骤2对a的值没有影响

//#include<stdio.h>
//int main(){
//	int a=15;
//	a+=(a+=5,a*2,a-=10);
//	printf("%d",a);
//	return 0;
//} 
////-->20

//#include<stdio.h>
//int main(){
//	int a=0b1100;
//	int b=0b0011;
//	printf("%d %d %d %d",a&b,a|b,a^b,~a);
//	return 0;
//}
////-->0 15 15 -13
////&与运算    两个比特位都是1则1 
////|或运算    两个比特位有一是1则1 
////^异或运算  两个比特位值不同则1，相同则0 
////~非运算    取反 
////~a不仅仅是要把1100四个位数取反变成0011，因为int是32位，所以要把其他位也取反。
////（28个0）..1100-->（28个1）..0011，对于一个有符号数首位是1，则代表是个负数。 



