//1.1
//#include<stdio.h>
//int main()
//{
//int a=2,b=5,c=7;
//printf("%s", (c/a+b%a+c>a*b)? "abandon": "keep trying");
//return 0;
//}
//--> abandon

//1.2
//输入abcd回车后的运行结果
//#include <stdio.h>
//int main()
//{
//	char c;
//	do {
//		c = getchar();
//		if (c != '\n')
//		{
//			switch (c)
//			{
//			case 'a':
//			case 'b':  c += 1;
//			case 'c':  c += 2;  break;
//			case 'd':  c += 3;
//			default:   c += 4;  break;
//			}
//			printf("%c\n", c);
//		}
//		else
//			break;
//	} while (1);
//	return 0;
//}
//-->d\ne\ne\nk\n

//1.3
//输入：I love C program very much, how about you?
//#include<stdio.h>
//int fun (char str[]);
//int main()
//{
//	char a[80];
//	gets(a);
//	printf("%d", fun(a));
//	return 0;
//}
//int fun (char str[])
//{   int i, num=0, flag=0;
//	for(i=0;str[i]!='\0'; i++)
//		if(str[i]==' ')  flag=0;
//		else if(flag==0)
//		{	num++;
//			flag = 1;
//       }
//	return num;
//}
//-->9

//1.4
//#include<stdio.h>
//void fun1(char a, char b)
//{	char temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//void fun2(char *a, char *b)
//{	char temp;
//	temp = *a;
//	*a = *b;
//    *b = temp;
//}
//int main()
//{	char c1,c2;
//	c1='M';
//	c2='N';
//	fun1(c1,c2);
//	printf("%c  %c\n", c1, c2);
//	fun2(&c1, &c2);
//   	printf("%c  %c\n", c1, c2);
//	return 0;
//}
//-->M  N\nN  M\n

//1.5
//#include <stdio.h>
//struct Complex
//{	float re;
//	float im;};
//void func(struct Complex c1, struct Complex c2)
//{	printf("%.1f+%.1fi\n", c1.re + c2.re, c1.im + c2.im);
//}
//int main()
//{
//	struct Complex a = { 1,2 }, b = { 3,4 };
//	func(a, b);
//
//	return 0;
//}
//-->4.0+6.0i\n

//1.6
//输入83
//#include <stdio.h>
//void PrintDigit(int n)
//{	if (n>=10)
//	PrintDigit(n/10);
//	putchar(n%10+'A');
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	PrintDigit(n);
//	return 0;
//}
//-->ID

//1.7
//#include <stdio.h>
//void f()
//{
//	int x=1 ;
//	static int y=0 ;
//	x++; y++;
//	printf("x=%d  y=%d\n", x, y);
//}
//int main()
//{	int i;
//	for(i=0;i<2;i++)
//		f();
//	return 0;
//}
//-->x=2  y=1\nx=2  y=2\n

//1.8
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i, a[5],*p=a;
//	for(i =0; i<5; ++i)
//		a[i]=i+1;
//	p++;
//	for(;p<a+5;++p)
//		printf("%d ", *p);
//	printf("\n");
//	return 0;
//}
//-->2 3 4 5\n

//1.9
//#include<stdio.h>
//#include<string.h>
//int main()
//{   int i,j;
//	char *name[ ]={"HangZhou","ShangHai","GuangZhou","BeiJing","ShenZhen"};
//	char *pstr;
//	for(i=0;i<4;i++)
//	    for(j=0;j<4-i;j++)
//	       if(strcmp(name[j],name[j+1])<0)
//	       {
//	            pstr=name[j];
//	            name[j]=name[j+1];
//	            name[j+1]=pstr;
//			}
//   	for( i=0;i<5;i++)
//   	    printf("%c\n", *name[i]) ;
//	return 0;
//}
//-->S\nS\nH\nG\nB\n

//1.10
//#include <stdio.h>
//int main()
//{
//	int b[3][3] = { 3,3,3,4,4,4 };
//	int(*t)[3] = b;
//	int *p = *(t+1);
//	for(;p<*(t+2);p++)
//		printf("%d ", *p);
//	return 0;
//}
//-->4 4 4


//2.1
//1. 计算多项式s=1+1/3+1/6+1/10+… 前n项的和。
//#include <stdio.h>
//double fun (int n) {
//	int i, j, t;
//	double  sum=0.0;
//	for(i=1; i<=n; i++) {
//		t = 0;//(1)
//		for(j=1; j<=i; j++)
//			t+=j;//(2)
//		sum+=1./t;//(3)
//	}
//	return sum;//(4)
//}
//
//int main( ) {
//	int n;
//	scanf("%d",&n);
//	printf("sum=%f\n",fun(n));
//	return 0;
//}

//2.2
//2. 删除字符串中的字母，输出342?6，补充完善程序
//#include <stdio.h>
//void fun (char *str);
//int main() {
//	char a[80]="a342d?g6k";
//	fun(a);
//	puts(a);
//	return 0;
//}
//void fun (char *str) {
//	int k = 0, i;
//	for(i=0; str[i]!='\0'; i++)
//		if(!(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')) { //(5)
//			str[k]=str[i];
//			k++;//(6)
//		}
//	str[k] = '\0';//(7)
//}

//2.3
//3. 根据给出的输出值，使用动态数组的方法补充完善程序。
//做1到10累加，输出结果
//#include <stdio.h>
//#include<stdlib.h>
//int main() {
//	int i;
//	int *ps;
//	ps = (int*)malloc(sizeof(int));//(8)
//	*ps=0;
//	for(i=1; i<=10; i++)
//		*ps+=i;//(9)
//	printf("*ps=%d", *ps);
//	free(ps);
//	return 0;
//}

//2.4
//4.根据注释要求，输出结构体数组的内容。
//输出格式为：
//name: zhang total=170
//name: wang total=150
//#include <stdio.h>
//struct student //(10)
//{ 
//char name[10];
//  float k1;
//  float k2;
//};
//int main()
//{ 
//    struct student a[2]={ {"zhang", 100,70} ,{"wang",70,80 } };
//	struct student * p=a;
//	int i;
//	printf("name: %s total=%0.f\n",p->name,p->k1+p->k2);//(11) //要求使用指针p
//	printf("name: %s total=%.0f",a[1].name,a[1].k1+a[1].k2); //(12) //要求使用指针数组名a
//	return 0;
//}

//2.5
//5. 数组stu保存3位学生4门课程的成绩，函数fun的功能是：计算每门课程学生的平均分数。例如学生分数为
//学生	课程1	课程2	课程3	课程4
//1	90	80	85	92
//2	75	73	69	76
//3	92	87	90	84
//输出：the course average scores:85.667 80 81.333 84
//#include<stdio.h>
//int main()
//{	int i,j;
//    double ave[4];//(13)
//	int stu[3][4]={{90,80,85,92},{75,73,69,76},{92,87,90,84}};
//	for(i=0;i<4;i++)
//		for(int j=0;j<3;j++)//(14)
//      		ave[i]+=1.*stu[j][i]/3;//(15)
//	printf("the course average scores:");
//	for(i=0;i<4;i++)
//		printf("%.3f ", ave[i]);
//	printf("\n");
//	return 0;
//}

//3.1
//#include<stdio.h>
//void myswap(int* a,int* b){
//	int t=*a;
//	*a=*b;
//	*b=t;
//}
//int main(){
//	int a=1;
//	int b=2;
//	myswap(&a,&b);
//	printf("%d %d",a,b);
//}

//3.2
//#include<stdio.h>
//void Change(char str[]){
//	for(int i = 0;str[i]!='\0';i++){
//		if(str[i]>='a'&&str[i]<='z'){
//			str[i]+=('A'-'a');
//		}
//		if(str[i]>='0'&&str[i]<='9'){
//			str[i]+=('A'-'0');
//		}
//	}
//}
//
//int main(){
//	char str[]="abcs123SSDJ";
//	Change(str);
//	printf("%s\n",str);
//	return 0;
//}

//3.3
//#include<stdio.h>
//#include<malloc.h>
//#include<math.h>
//struct Point{
//	int x;
//	int y;
//};
//double Distance(struct Point point1,struct Point point2){
//	return sqrt(1.*(point2.x-point1.x)*(point2.x-point1.x)+(point2.y-point1.y)*(point2.y-point1.y));	
//}
//double MDistance(struct Point point1,struct Point point2){
//	return fabs(point1.x-point2.x)+fabs(point1.y-point2.y);
//}
//int main(){
//	struct Point point1={1,2};
//	struct Point point2={5,10};
//	printf("%lf\n",Distance(point1,point2));
//	printf("%lf",MDistance(point1,point2));
//	return 0;
//}































