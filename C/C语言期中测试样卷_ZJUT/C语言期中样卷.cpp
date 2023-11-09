//一_1
//#include <stdio.h>
//int main()
//{
//     int a=1,b=2;
//	  printf("%d", a/b+a*b-a%b);
//
//     return 0;
//}
//-->1


//一_2
// #include <stdio.h>
//int main()
//{
//	int i, b, a[4] = { 1, 2, 3, 4 };
//	b = a[3];//4
//	for (i = 3; i >= 1; i--)
//		a[i] = a[i - 1];//1 1 2 3
//	a[0] = b;//4 1 2 3
//	for (i = 0; i < 4; i++)
//		printf("%d ", a[i]);
//
//	return 0;
//}
//-->4 1 2 3


//一_3
//#include<stdio.h>
//int main() {
//	int i=1, j , s ;
//	while(i<=5) {
//		for(j=1; j<=i; j++) {
//			if(j%3==0)
//				continue;
//			printf("%d ", j);
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}
//-->1 \n1 2 \n1 2 \n1 2 4 \n1 2 4 5


//一_4
//#include<stdio.h>
//int main()
//{
//	int s = 0, k;
//	for (k = 7; k >= 0; k--)
//	{
//		switch (k)
//		{
//		case 1:
//		case 4:
//		case 7:
//			s = s + k;
//			break;
//		case 2:
//		case 3:
//		case 6:
//			break;
//		}
//	}
//	printf("%d", s);
//	return 0;
//}
//-->12


//一_5
//#include <stdio.h>
//int main()
//{
//int i,j;
//for (i=4;i>=1;i--)
//{
//   printf("*");
//   for (j=1;j<=4-i;j++)
//      printf("*");
//   printf("\n");
// }
//	return 0;
//}
//-->*\n**\n***\n****


//一_6
//#include <stdio.h>
//int main()
//{
//	int a, b, c, s, w, t;
//	s = w = t = 0;
//	a = -1; b = 3; c = 3;
//	if (c > 0) s = a + b;
//	if (a <= 0)
//	{
//		if (b > 0)
//			if(c <= 0) w = a - b;
//	}
//	else if (c > 0) w = a - b;
//	else t = c;
//	printf("%d%d%d", s, w, t);
//	return 0;
//}
//-->200


//一_7
//#include <stdio.h>
//int main()
//{
//	int a = 9, b = 4, c = 1, s, t;
//	s = a<b ? a : b;
//	t = s<c ? s : c;
//	printf("%d %d", s, t);
//
//	return 0;
//}
//-->4 1


//一_8
//#include<stdio.h>
//int main()
//{
//	int a[5] = {12,4,3,5,16}, m1, m2, i, j, k, t;
//	m1 = a[0]; m2 = a[0];
//	for (i = 1; i<5; i++)
//	{
//		if (a[i]<m1)
//		{
//			m1 = a[i]; j = i;
//		}
//		if (a[i]>m2)
//		{
//			m2 = a[i]; k = i;
//		}
//	}
//	t = a[j];
//	a[j] = a[k];
//	a[k] = t;
//	for (i = 0; i<5; i++)
//		printf("%d ", a[i]);
//	return 0;
//}
//-->12 4 16 5 3


//一_9
//#include<stdio.h>
//int main()
//{
//	int x = 100, a = 10, b = 20, ok1 = 5, ok2 = 0;
//	if (a < b)
//		if (b != 15)
//			if (!ok1)
//				x = 1;
//			else if (ok2)
//				x = 10;
//			else  x = -1;
//
//	printf("%d\n", x);
//
//	return 0;
//}
//-->-1


//一_10
//#include<stdio.h>
//int main()
//{
//	int a = 1, b = 7;
//	do {
//		b = b / 2;
//		a += b;
//	} while (b > 1);
//	printf("%d", a);
//	return 0;
//}
//-->5



//二_1
//#include <stdio.h>
//int main()
//{
//	int m;
//	scanf("%d",&m);//(1)
//	if (m<0)//(2)
//	{
//		putchar('-');
//		m=-m;//(3)
//	}
//	while (m>0)
//	{
//		printf("%d", m%10);
//		m/=10;//(4)
//	}
//
//	return 0;
//}


//二_2
//#include <stdio.h>
//int main() {
//	int n,i,j ;
//	n=0;
//	for (i=1; i<20; i++)
//		for(int k=0,j=1;j<32;j++) {//(5)(6)
//			k=100-i-j;
//			if( 5*i+3*j+k/3==100 && k%3 ==0) {//(7)
//				n++;
//				printf("%d %d %d %d\n", n, i, j, k);
//			}
//		}
//	return 0;
//}


//二_3
//#include<stdio.h>
//int main() {
//	int a[10]= {8,5,4,3,7,9,56,76,43,1};
//	int i,j,m;
//	for(i=0; i<9; i++)
//		for(j=0; j<10-i; j++)//(8)
//			if( a[j]<a[j+1] ) {//(9)(10)
//				m=a[j];
//				a[j]=a[j+1];//(11)
//				a[j+1]= m;
//			}
//	for(i=0; i<10; i++)
//		printf("%d ",a[i]);//(12)
//	printf("\n");
//}


//二_4
//#include <stdio.h>
//int main() {
//	int i, j;
//	for (i = 0;i<10; i++) {//(13)
//		j = i * 10 + 6;
//		if (j%3!=0)//(14)
//			continue;
//		else printf("%d\n",j);//(15)
//	}
//}



//三_1
//#include<stdio.h>
//int main(){
//	float x;
//	scanf("%f",&x);
//	if(x<1){
//		printf("%f",x);
//	}else if(x>=1&&x<10){
//		printf("%f",2*x-1);
//	}else if(x>=10){
//		printf("%f",3*x-11);
//	}
//	return 0;
//}
//三_2
//#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	float s=0.0;
//	for(int i=2;i<=n;i++){
//		s+=1./(i*(i+1));
//	}
//	printf("%f",s);
//	return 0;
//}
//三_3
//#include<stdio.h>
//int main(){
//	int m;
//	int score[100];
//	int below[100];
//	float ave;
//	int sum=0;
//	int indexBelow=0;
//	int sumP=0;
//	scanf("%d",&m);
//	for(int i=0;i<m;i++){
//		scanf("%d",&score[i]);
//		sum+=score[i];
//	}
//	ave=sum/m;
//	for(int k=0;k<m;k++){
//		if(score[k]<ave){
//			below[indexBelow]=score[k];
//			indexBelow++;
//		}
//	}
//	printf("%d\n",indexBelow);
//	for(int t=0;t<indexBelow;t++){
//		printf("%d ",below[t]);
//	}
//	return 0;
//}
