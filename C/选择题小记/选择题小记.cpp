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
////-->�������void 

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
////<<1����������һλ�൱��*2��>>1����������һλ�൱��/2��

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
////���ű��ʽ��ֵȡ�������һ��

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
////a=10-->15-->5������2��a��ֵû��Ӱ��

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
////&������    ��������λ����1��1 
////|������    ��������λ��һ��1��1 
////^�������  ��������λֵ��ͬ��1����ͬ��0 
////~������    ȡ�� 
////~a��������Ҫ��1100�ĸ�λ��ȡ�����0011����Ϊint��32λ������Ҫ������λҲȡ����
////��28��0��..1100-->��28��1��..0011������һ���з�������λ��1��������Ǹ������� 



