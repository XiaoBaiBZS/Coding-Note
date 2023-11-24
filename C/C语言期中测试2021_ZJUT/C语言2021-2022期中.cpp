//一_1
//#include <stdio.h>
//int main()
//{
//	int x, c, e;
//	double a, b, y, d;
//	x = 4;
//	y = 4.0;
//	a = 2.0 / x;
//	b = 2 / x;
//	c = 2.0 / x;
//	d = 2 / y;
//	printf("a:%.2lf\nb:%.2lf\nc:%d\nd:%.2lf\n", a, b, c, d);
//	return 0;
//}
//-->a:0.50\nb:0.00\nc:0\n0.50\n


//一_2
// #include <stdio.h>
//int main()
//{
//	int x = 1, a = 1, b = 1;
//	switch (x)
//	{
//	case 0: b++;
//	case 1: a++;
//	case 2: a++; b++;
//	}
//	printf("a=%d, b=%d\n", a, b);
//	return 0;
//}
//-->a=3, b=2\n

//一_3
//#include <stdio.h>
//int main()
//{
//	int x=10,y=7;
//	y = 5 < x < 9;
//	printf("case 1 (5 < x < 9): %d \n", y);
//
//	y = 5 < x && x < 9;
//	printf( "case 2 (5 < x && x < 9): %d\n", y);
//	return 0;
//}
//-->case 1 (5 < x < 9): 1 \ncase 2 (5 < x && x < 9): 0\n


//一_4
//#include<stdio.h>
//int main()
//{
//	int a[5],max,min,i,j,k;
//   	j=0;
//	k=0;
//	for(i=0;i<5;i++)
//		scanf("%d",&a[i]);
//	max = min=a[0];
//	for(i=1;i<5;i++)
//	{
//		if(a[i]<min) 	{
//			min=a[i];
//			j=i;
//		}
//		if(a[i]>max) {
//			max=a[i];
//			k=i;
//		}
//	}
//	min=a[j];
//	a[j]=a[k];
//	a[k]=min;
//	printf("最小数位置为%d\n",k);
//	printf("最大数位置为%d\n",j);
//	for(i=0;i<5;i++)
//		printf("%d ",a[i]);
//	printf("\n");
//	return 0;
//}
//>_5 2 3 6 9
//-->最小数位置为4\n最大数位置为1\n5 9 3 6 2\n


//一_5
//#include <stdio.h>
//int main() {
//	char c1 = 'a', c2 = 'b', c3 = 'c';
//	printf("a%cb%cc%c\n", c1, c2, c3);
//	return 0;
//}
//-->aabbcc\n


//一_6
// #include <stdio.h>
//int main()
//{
//	int i, a[10];
//	for (i = 9; i >= 0; i--)
//		a[i] = 10 - i;
//	printf("%d%dzjut", a[5], a[8]);
//	return 0;
//}
//-->52zjut


//一_7
// #include <stdio.h>
//int main()
//{
//	int i, j, k = 11;
//	int m = 0;
//	for (i = 0; i < 2; i++)
//	{
//		k++;
//		for (j = 0; j <= 2; j++)
//		{
//			if (j % 2) break;
//			m++;
//		}
//		printf("m=%d\n", m);
//		k++;
//	}
//	printf("k=%d\n", k);
//	return 0;
//}
//-->m=1\nm=2\nk=15\n


//一_8
// #include<stdio.h>
//int main()
//{
//	int m = 13, s=0;
//	do{
//       switch(m%7)
//       {
//          	case 2: m/=2; s+=2; break;
//          	case 3: m/=3; s+=3; break;
//   			case 5: m/=5; s+=5;
//			default : m--; s--;
//		}
//		printf("%d ",s);
//	}while(m);
//	return 0;
//}
//--> 3 2


//一_9
// #include <stdio.h>
//int main(){
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 }, b[4][3];
//	int i, j;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 4; j++)
//			b[j][i] = a[i][j];
//	for (i = 0; i < 4; i++)	{
//		for (j = 0; j < 3; j++)
//			printf("%d ", b[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//-->1 5 9 \n2 6 10 \n3 7 11 \n4 8 12 \n
//a
//1  2  3  4
//5  6  7  8
//9  10 11 12
//
//b
//1  5  9
//2  6  10
//3  7  11
//4  8  12


//一_10
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i, j;
//	char s1[50] = "I love C !", s2[20] = { 'p','r','o','g','r','a','m' };
//	for (i = 0; s1[i] != '!'; i++)
//		;
//	int lens1 = strlen(s1);
//	int lens2 = strlen(s2);
//	for (j = 0; j<= lens1-1; j++)
//		s1[lens1 + lens2 - j] = s1[lens1 - j];
//	for (j = 0; j<= lens2-1; j++)
//		s1[j + i] = s2[j];
//	printf("%s %s\n", s1, s2);
//
//	return 0;
//}
//-->I love C program! program\n


//二_1
//#include <stdio.h>
//int main()
//{
//	int x, c, m;
//	float y;
//	scanf("%d", &x);
//	if (x<0) c = -1;//(1)
//	else if (x>=20) c = 100;//(2)
//	else c = x>10?1:0; //(3)
//	switch (c)
//	{
//		case -1: y = 0; break;
//		case 0: y = x; break;
//		case 1: y = 10;break;
//		case 100: y = x - 10; break;
//		default: break;
//	}
//	printf("y=%f", y);
//	return 0;
//}


//二_2
//#include<stdio.h>
//int main()
//{
//   	int i;
//	double t, f1, f2=1,f3=2, sum=0;
//   	for(i=1;i<=20;i++)
//   	{
//   		t=f3/f2;//(5)
//		sum=sum+t;
// 		f1=f2;//(6)
//		f2=f3;//(7)
//		f3=f1+f2;
//	}
//	printf("%lf",sum);
//	return 0;
//}


//二_3
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int q1 = 0, q2 = 0, q3 = 0, q4 = 0, sum = 0, i, k;
//	char str[3][100];
//	for (i = 0; i < 3; i++)
//			gets(str[i]);//(8)
//
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0;k<strlen(str[i]); k++)//(9)
//		{
//			sum++;
//			if (str[i][k] <= 'Z'&&str[i][k] >= 'A')
//				q1++;
//			if (str[i][k] <= 'z'&&str[i][k] >= 'a')
//				q2++;
//			if (str[i][k] <= '9'&&str[i][k] >= '0')//(10)
//				q3++;
//			if (str[i][k] == ' ')
//				q4++;
//		}
//	}
//
//	printf("uppercase:%d\nlowercase:%d\nnumber:%d\n", q1, q2, q3);
//	printf("blank:%d\nother:%d\n", q4,sum-q1-q2-q3-q4);//(11)
//	return 0;
//}


//二_4
//#include <stdio.h>
//#include <math.h>
//int main() {
//	int i,j,nz=0,nh=0;
//	i=50;
//	while(i<=100) {
//		for(j=2; j<=sqrt(i); j++)
//			if (i%j==0) break;// (12)
//		if(j<=sqrt(i))
//			nh=nh+1;//(13)
//		else
//			nz=nz+1;//(14)
//		i++;//(15)
//	}
//	printf("质数个数：%d\n", nz) ;
//	printf("合数个数：%d\n", nh) ;
//	return 0;
//}


//三_1
//#include<stdio.h>
//int main(){
//	int chi=0;
//	int rab=0;
//	for(int i=1;i<=98;i++){
//		chi = i;
//		rab = 98-i;
//		if((2*chi+4*rab==386)){
//			printf("%d %d\n",chi,rab);
//		}
//	}
//	return 0;
//}


//三_2
//#include<stdio.h>
//int main(){
//	int score[5][40]={0};
//	int sum=0;
//	for(int i=0;i<40;i++){
//		for(int k=0;k<5;k++){
//			scanf("%d",&score[k][i]);
//		}
//	}
//	for(int i=0;i<40;i++){
//		sum=0;
//		for(int k=0;k<5;k++){
//			printf("%d ",score[k][i]);
//			sum+=score[k][i];
//		}
//		printf("%d ",sum);
//		printf("%.2lf\n",1.*sum/5);
//	}
//	return 0;
//}


//三_3
//#include<stdio.h>
//int main() {
//	int score[10005]= {0};
//	int n;
//	int t;
//	int sum=0;
//	scanf("%d",&n);
//	for(int i=0; i<n; i++) {
//		scanf("%d",&score[i]);
//	}
//	for(int k=0; k<n-1; k++) {
//		for(int m=0; m<n-1-k; m++) {
//			if(score[m]<score[m+1]) {
//				t=score[m];
//				score[m]=score[m+1];
//				score[m+1]=t;
//			}
//		}
//	}
//	for(int i=0; i<n; i++) {
//		printf("%d",score[i]);
//	}
//	for(int i=1; i<n-1; i++) {
//		sum+=score[i];
//	}
//	printf("%lf",1.*sum/(n-2));
//	return 0;
//}



















