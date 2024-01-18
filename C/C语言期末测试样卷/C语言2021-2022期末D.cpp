//1.1
//#include<stdio.h>
//int main() {
//	int i,j,k,m,n,t;
//	m=n=t=0;
//	i=-1;
//	j=5;
//	k=3;
//	if (k>0) m=i+j;
//	if (i<=0) {
//		if (j>0)
//			if (k<m) n= j-i;
//	} else if (k>0) n=i-j;
//	else t=k;
//	printf("%d %d %d",m,n,t);
//	return 0;
//}
//4 6 0

//1.2
//输入13后的运行结果
//#include <stdio.h>
//int main()
//{
//	int x, y = 0;
//	scanf("%d", &x);
//	switch (x % 4)
//	{
//	case 1: x++; y++;
//	case 2: x--; y++; break;
//	case 3:	 x++; y++;
//	default: y = y + x;
//	}
//	printf("x=%d, y=%d\n", x,y);
//
//	return 0;
//}

//1.3
//#include<stdio.h>
//void fun (char *str) {
//	int k = 0;
//	for(int i=0; str[i]!='\0'; i++)
//		if(str[i]<'a'||str[i]>'z') {
//			str[k]=str[i];
//			k++;
//		}
//}
//int main() {
//	char a[80]="a342d?g6k";
//	fun(a);
//	puts(a);
//	return 0;
//}
//-->342?6?g6k

//1.4
//输入：4
//#include <stdio.h>
//int main() {
//	int i, j, n;
//	char ch = 'A';
//	scanf("%d", &n);
//	if (n < 11) {
//		for (i = 1; i <= n; i++) {
//			for (j = 1; j <= n - i + 1; j++) {
//				putchar(ch);
//				ch++;
//			}
//			putchar('\n');
//		}
//	} else  printf("n is too large!\n");
//	return 0;
//}
//ABCD
//EFG
//HI
//J

//1.5
//#include<stdio.h>
//void fun(char *a, char *b) {
//	b = a;
//	(*b)++;
//}
//int main() {
//	char c1, c2, *p1, *p2;
//	c1 = 'A';
//	c2 = 'a';
//	p1 = &c1;
//	p2 = &c2;
//	fun(p1, p2);
//	printf("%c %c\n", c1, c2);
//	return 0;
//}
//-->B a

//1.6
//输入iamazjuter
//#include<stdio.h>
//void fun(char str[]) {
//	char t;
//	for(int i=0; i<=9; i++) {
//		int k=i;
//		for(int j=i+1; j<10; j++)
//			if(str[j]>str[k])  k=j;
//		if(k!=i) {
//			t=str[k];
//			str[k]=str[i];
//			str[i]=t;
//		}
//	}
//}
//int main() {
//	char s [11];
//	gets(s);
//	putchar('\n');
//	fun(s);
//	for(int i=1; i<=10; i++)
//		printf("%c", s[10-i]);
//	return 0;
//}
//-->aaeijmrtuz

//1.7
//#include<stdio.h>
//int fun(int x)
//{
//	if (x == 0 || x == 1)
//		return 3;
//	else
//		return x - fun(x - 2);
//}
//int main()
//{
//	printf("%d\n", fun(7));
//	return 0;
//}
//-->2

//1.8
//#include <stdio.h>
//int a=100;
//void fun()
//{
//	static int a =20;
//	a++;
//	printf("%d\n",a);
//}
//int main()
//{
//    for(int i=0;i<3;i++)
//    {
//       a++;
//       printf("%d ", a);
//       fun();
//     }
//return 0;
//}
//101 21
//102 22
//103 23

//1.9
//#include<stdio.h>
//#include<string.h>
//int main( ) {
//	char *name[ ]= {"HangZhou","ShangHai","GuangZhou","BeiJing","ShenZhen"};
//	char *pstr;
//	for(int i=0; i<4; i++)
//		for(int j=0; j<4-i; j++)
//			if(strcmp(name[j],name[j+1])<0) {
//				pstr=name[j];
//				name[j]=name[j+1];
//				name[j+1]=pstr;
//			}
//	for(int i=0; i<5; i++)
//		printf("%s\n", name[i]);;
//	return 0;
//}
//ShenZhen
//ShangHai
//HangZhou
//GuangZhou
//BeiJing

//1.10
//#include <stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main() {
//	int i;
//	char str[100] = "Hello", *p;
//	p = (char *)malloc((strlen(str)+1) * sizeof(char));
//	for (i = 0; str[i] != '\0'; i++)
//		p[i] = str[i]-1;
//	p[i] = '\0';
//	printf("%s %d\n",p, strlen(p));
//	free(p);
//	return 0;
//}
//-->Gdkkn 5

//2.1
//1. 计算多项式s=1+1/3+1/6+1/10+… 前n项的和。
//#include <stdio.h>
//double fun (int n) {
//	int i, j, t;
//	double  sum=0.0;
//	for(i=1; i<=n; i++) {
//		t=0;//(1)
//		for(j=1; j<=i; j++)
//			t+=j;//(2)
//		sum+=1./t;//(3)
//	}
//	return sum;//(4)
//}
//int main( ) {
//	int n;
//	scanf("%d",&n);
//	printf("sum=%f\n",fun(n));
//	return 0;
//}

//2.2
//2. 输入一个正整数n，动态创建一个大小为n的数组。输入n个整数到数组中，计算数组的平均值。最后释放动态分配的内存空间。
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int i,n;
//	int *p;
//	float ave;//(5)
//	scanf("%d", &n);
//	p = (int*)malloc(n*sizeof(int));
//	for (i = 0; i < n; i++) {
//		scanf("%d",&p[i]);
//		ave += p[i];
//	}
//	ave/=n;//(6)
//	printf("ave = %f\n", ave);
//	free(p);//(7)
//	return 0;
//}

//2.3
//3. 程序实现输入一个5x5的实数矩阵，求出其中的最大数和最小数，并交换两者的位置。最后输出整个矩阵的值。
//#include <stdio.h>
//int main() {
//	float f[5][5], max, min, x;
//	int i, j, max_i, max_j, min_i, min_j;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//			scanf("%f",&f[i][j]);
//	max=min=f[0][0];//(9)
//	max_i = max_j = min_i = min_j = 0;
//	for(i=0; i<5; i++)
//		for (j = 0; j < 5; j++) {
//			if (f[i][j]>max) {//(10)
//				max = f[i][j];
//				max_i = i;
//				max_j = j;
//			}
//			if (f[i][j]<min) {//(11)
//				min = f[i][j];
//				min_i = i;
//				min_j = j;
//			}
//		}
//	f[max_i][max_j] = min;
//	f[min_i][min_j] = max;
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++)
//			printf("%.0f ",f[i][j]);
//		printf("\n");
//	}
//}

//2.4
//4. 用改进的冒泡排序法对数组进行排序。当某一轮已经完成排序时，停止后续的排序。
//#include <stdio.h>
//void bubble_sort(int a[], int n) {
//	int i, j;
//	int tmp, flag;
//	for(i=0; i<n-1; i++)	{
//		flag = 0;//(12)
//		for (j = 0; j < n - 1 - i; j++)	{
//			if (a[j] > a[j + 1])	{
//				tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//}
//int main() {
//	int i;
//	int a[10] = { 6,5,7,8,2,3,4,9,0,1 };
//	bubble_sort(a, 10);//(13)
//	for (i = 0; i < 10; i++)
//		printf("%d\n", a[i]);
//	return 0;
//}

//2.5
//5.根据注释要求，输出结构体数组的内容。
//输出格式为：
//name：zhang total＝170
//name：wang total＝150
//#include <stdio.h>
//struct student
//{ char name[10];
//  float k1;
//  float k2;
//};
//int main()
//{
//	struct student a[2]={ {"zhang", 100,70} ,{"wang",70,80 } };
//	struct student * p=a;
//	int i;
//	printf("name: %s total=%.0f\n", p->name,p->k1+p->k2); //(14)要求使用指针p
//	printf("name: %s total=%0.f",  a[1].name,a[1].k1+a[1].k2 ); //(15)要求使用指针数组名a
//	return 0;
//}


//3.1
//#include<stdio.h>
//int main()<%
//	double x;
//	double y;
//	scanf("%lf",&x);
//	if(x<=1){
//		y=x;
//	}else if(x>1&&x<10){
//		y=2*x-1;
//	}else if(x>=10){
//		y=3*x-11;
//	}
//	printf("%lf",y);
//	return 0;
//%>

//3.2
//#include<stdio.h>
//#include<malloc.h>
//int fun1(double* p,int n){
//	for(int i =0;i<n-1;i++){
//		for(int j = 0;j<n-1-i;j++){
//			if(*(p+j)<*(p+j+1)){
//				double t = *(p+j+1);
//				*(p+j+1) = *(p+j);
//				*(p+j) = t;
//			}
//		}
//	}
//	return 0;
//}
//double fun2(double* p,int n){
//	double sum = 0;
//	for(int i =0;i<n;i++){
//		sum+=*(p+i);
//	}
//	return sum/n;
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	double* p = (double*)malloc(n*sizeof(double));
//	for(int i =0;i<n;i++){
//		scanf("%lf",p+i);
//	}
//	fun1(p,n);
//	for(int i =0;i<n;i++){
//		printf("%lf",*(p+i));
//	}
//	printf("%lf",fun2(p,n));
//	return 0;
//}

//3.3
//#include<stdio.h>
//#include<string.h>
//#include<malloc.h>
//struct data{
//	int id;
//	char name[20];
//	double wage_base;
//	double wage_more;
//	double wage_all;
//};
//int input(struct data data_all[],int n){
//	for(int i=0;i<n;i++){
//		int id;
//		char name[20];
//		double wage_base;
//		double wage_more;
//		double wage_all;
//		scanf("%d",&id);
//		scanf("%s",name);
//		scanf("%lf",&wage_base);
//		scanf("%lf",&wage_more);
//		wage_all = wage_base+wage_more;
//		data_all[i].id = id;
//		strcpy(data_all[i].name,name);
//		data_all[i].wage_base = wage_base;
//		data_all[i].wage_more = wage_more;
//		data_all[i].wage_all = wage_all;
//	}
//	return 0;
//}
//
//int print(struct data data_all[],int n){
//	printf("ALL_DATA\n");
//	for(int i = 0;i<n;i++){
//		printf("Id:%d  Name:%s  BaseWage:%lf  MoreWage:%lf  AllWage:%lf\n",
//			data_all[i].id,data_all[i].name,data_all[i].wage_base,data_all[i].wage_more,data_all[i].wage_all);
//	}
//	printf("EOF\n");
//	return 0;
//}
//
//int maximum(struct data data_all[],int n){
//	double wage_now = 0;
//	int index_now = 0;
//	for(int i =0;i<n;i++){
//		if(data_all[i].wage_all>wage_now){
//			wage_now = data_all[i].wage_all;
//			index_now = i;
//		}
//	}
//	int i = index_now;
//	printf("Id:%d  Name:%s  BaseWage:%lf  MoreWage:%lf  AllWage:%lf\n",
//			data_all[i].id,data_all[i].name,data_all[i].wage_base,data_all[i].wage_more,data_all[i].wage_all);
//	return i;
//
//}
//int main(){
//	struct data data_all[20];
//	input(data_all,10);
//	print(data_all,10);
//	maximum(data_all,10);
//	return 0;
//}





















