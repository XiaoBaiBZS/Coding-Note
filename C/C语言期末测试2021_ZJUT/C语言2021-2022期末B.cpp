//1.1
//#include <stdio.h> 
//int main(){ 
// char c1, c2; 
// c1 = 'k', c2 = 'l'; 
// c1 -= 32; 
// c2 -= 33; 
// printf("%c %c", c1, c2); 
// return 0; 
//}
//-->K K

//1.2
//A

//1.3
//B
//#include <stdio.h> 
//int main(){ 
// double x=2.7;
// int a=6;
// double y=4.7;
// printf("%lf",++x+a%3*(int)(x+y)%2/4);
// return 0; 
//}

//1.4
//#include <stdio.h> 
//int main(){ 
//	int a=3;
//	int b=4;
//	int c=5;
//	printf("%d\n",  a || b+c && b-c);
//	printf("%d\n",  !(a>b) && !c || 1);
//	printf("%d\n",  !(a+b)+c-1 && b+c/2);
//	printf("%d\n",  a+b>c && b==c);
//	return 0; 
//}
//D

//1.5
//C

//1.6
//#include <stdio.h> 
//int func(int x){ 
// static int y = 0; 
// y += x; 
// return y; 
//}
//int main(){ 
// int ans, i = 0; 
// for (; i < 4; i++) 
// ans = func(i); 
// printf("%d", ans); 
// return 0; 
//} 
//C

//1.7
//#include<stdio.h>
//int main(){
//	int a[10] = {1,2,3};
//	int* p = a;
//	switch(*p+1){
//		case 1 :printf("1");
//		case 2 :printf("2");
//	}
//	return 0;
//}
//D

//1.8
//int main(){
//	int (*pRow)[4];
//}
//C

//1.9
//C

//1.10
//#include<stdio.h>
//int main(){
//	struct{ 
//int a; 
//char s[16]; 
//}s;
//printf("%d",sizeof(s));
//}
//A

//1.11
//int main(){
//	int _a_a = 0;
//}
//C

//1.12
//#include <stdio.h> 
//int main(){ 
// int a = 4, b = 7; 
// int c = a+++b; 
// printf("%d, %d, %d", a, ++b, c); 
// return 0; 
//}
//-->5,8,11
//D

//1.13
//A

//1.14
//B

//1.15
//#include <stdio.h> 
//int main(){ 
// int a = 4, b = 7; 
// int c = b<8? a+3, b+7 : b+a; 
// printf("%d", c); 
// return 0; 
//}
//A

//2.1
//enum

//2.2
//75

//2.3
//#include <stdio.h> 
//int main(){ 
// int arr[] = {1,3,4}; 
// int *p = arr; 
// *(p+1) += 5; 
// printf("%d %d", *p, *(p+2)); 
// return 0; 
//}
//1 4

//2.4
//#include <stdio.h> 
//int main(){ 
// int a = 3, b = 4, c = 0; 
// switch(a){ 
// case 3:
// c+=1000; 
// case 1: 
// c+=1; 
// case 4: 
// c+=2; 
// default: 
// c+=1000; 
// } 
// printf("%d", c); 
// return 0; 
//}
//2003

//2.5
//#include <stdio.h> 
//int main(){ 
// int i, j=0; 
// char a[]="Hello"; 
// char b[]="World!"; 
// a[3]='\0'; 
// char c[50]; 
// for (i=0; a[i]!='\0';i++) 
// c[j++]=a[i]; 
// for (i=0; b[i]!='\0';i++) 
// c[j++]=b[i]; 
// c[j]='\0'; 
// printf("%s", c); 
// return 0; 
//}
//HelWorld!
 
//3.1
//return： 跳出当前正在执行函数。 
//break： 在循环体内，结束整个循环过程。 
//continue： 结束本次的循环，直接进行下一次的循环

//3.2
//行指针：指的是一整行，不指向具体元素。 
//列指针：指的是二维数组中某一行的某个具体元素。 
//可以将列指针认为是行指针的具体元素，行指针是列指针的地址。



