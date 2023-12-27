//1.1
//#include <stdio.h> 
//int main(){ 
// char c1, c2; 
// c1 = 'x', c2 = 'y'; 
// c1 -= 32; 
// c2 -= 33; 
// printf("%c %c", c1, c2); 
// return 0; 
//}
//A 

//1.2
//#include<stdio.h>
//int main(){
//	double x=2.5;
//	int a=7;
//	double y=4.7;
//	printf("%lf",x+++a%3*(int)(x+y)%2/4);
//	return 0;
//}
//A

//1.3
//D

//1.4
//C

//1.5
//#include <stdio.h> 
//int func(int x){ 
// static int y = 0; 
// y += x; 
// return y; 
//}
//
//int main(){ 
// int ans, i = 0; 
// for (; i < 3; i++) 
// ans = func(i); 
// printf("%d", ans); 
// return 0; 
//} 
//A

//1.6
//B 

//1.7
//C

//1.8
//C

//1.9
//C

//1.10
//C

//1.11
//#include <stdio.h> 
//int main(){ 
// int a = 3, b = 7; 
// int c = a+++b; 
// printf("%d, %d, %d", a, ++b, c); 
// return 0; 
//}
//C

//1.12
//C

//1.13
//B

//1.14
//B

//1.15
//#include <stdio.h> 
//int main(){ 
// int a = 3, b = 7; 
// int c = b<8? a+3, b+7 : b+a; 
// printf("%d", c); 
// return 0; 
//}
//B

//2.1
//enum

//2.2
//89

//2.3
//#include <stdio.h> 
//int main(){ 
// int arr[] = {1,3,4}; 
// int *p = arr; 
// *(p+2) += 5; 
// printf("%d %d", *p, *(p+2)); 
// return 0; 
//}
//1 9

//2.4
//#include <stdio.h> 
//int main(){ 
// int a = 3, b = 4, c = 0; 
// switch(a){ 
// case 1:
// b++; 
// case 2: 
// c+=1000; 
// case 3: 
// c+=1; 
// case 4: 
// c+=2; 
// default: 
// c+=1000; 
// } 
// printf("%d", c); 
// return 0; 
//}
//1003

//2.5
//#include <stdio.h> 
//int main(){ 
// int i, j=0; 
// char a[]="Hello"; 
// char b[]="World!"; 
// a[1]='\0'; 
// char c[50]; 
// for (i=0; a[i]!='\0';i++) 
// c[j++]=a[i]; 
// for (i=0; b[i]!='\0';i++) 
// c[j++]=b[i]; 
// c[j]='\0'; 
// printf("%s", c); 
// return 0; 
//}
//HWorld!

//3.1
//略 

//3.2
//（1）指针函数返回指针，而函数指针存储函数的地址。
//（2）指针函数的调用方式与普通函数相同，而函数指针的调用方式不同于普通函数。
//（3）指针函数可以通过指针访问函数内部的变量，而函数指针不能。
//（4）指针函数可以用作另一个函数的参数或返回值，而函数指针也可以用作参数或返回值。但是，它们的使用方式略有不同。

//4.1
//#include<stdio.h>
//int main(){
//	int a;
//	int b;
//	int c;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a<b){
//		a=b;
//	}
//	if(a<c){
//		a=c;
//	}
//	printf("%d\n",a);
//	return 0;	
//}

//4.2
//#include<stdio.h>
//#include<math.h>
//double mySqrt(double a){
//	double x=a/2;
//	double xi=1./2*x+1./2*a/x;
//	do{
//	x=xi;
//	xi= 1./2*x+1./2*a/x;
//	}while(fabs(x-xi)>=1e-5);
//	return x;
//}
//int main(){
//	double a;
//	scanf("%lf",&a);
//	printf("%lf",mySqrt(a));
//	return 0;
//}

//4.3
//#include<stdio.h>
//int myStrCmp(char str1[],char str2[]){
//	for(int i=0;str1[i]!='\0'&&str2[i]!='\0';i++){
//		if(str1[i]<str2[i]){
//			return -1;
//		}else if(str1[i]==str2[i]){
//			continue;
//		}else if(str1[i]>str2[i]){
//			return 1;
//		}
//	}
//	return 0;
//}
//int main(){
//	char str1[300];
//	char str2[300];
//	gets(str1);
//	gets(str2);
//	switch(myStrCmp(str1,str2)){
//		case 1  : printf("str2<str1");break;
//		case 0  : printf("str2=str1");break;
//		case -1 : printf("str2>str1");break;	
//	}
//	return 0;
//}

//4.4
//#include<stdio.h>
//#include<malloc.h>
//struct node { 
//	int value; 
//	struct node* next; 
//};
//struct node* creat(){
//	struct node* head = NULL;
//	head = (struct node*)malloc(sizeof(struct node));
//	head->next = NULL;	
//	return head;
//}
//int add(struct node* head,int value){
//	struct node* p = head;
//	for(;p->next!=NULL;p=p->next);
//	struct node* newp = (struct node*)malloc(sizeof(struct node));
//	if(newp!=NULL){
//		newp->value = value;
//		newp->next = NULL;
//		p->next = newp;
//		return 1;
//	}else{
//		return 0;
//	}
//}
//int print(struct node* head){
//	struct node*p = head;
//	for(;p->next!=NULL;p=p->next){
//		if(p==head){
//		}else{
//			printf("%d\n",p->value);
//		}
//	}
//	printf("%d\n",p->value);
//	printf("End of List\n");
//	return 1;
//}
//int find(struct node* head,int value){
//	struct node*p = head;
//	int flag = 0;
//	for(;p->next!=NULL;p=p->next){
//		if(p->value==value){
//			flag = 1;
//		}
//	}
//	switch(flag){
//		case 0 : printf("Is Not Find\n");break;
//		case 1 : printf("Is Find\n");break;
//	}
//	return 1;
//}
//int deleteOne(struct node* head,int value){
//	struct node*p = head;
//	struct node*k = head;
//	for(;p->next!=NULL;k=p,p=p->next){
//		if(p->value==value){
//			k->next = p->next;
//			free(p);
//			break;
//		}
//	}
//	return 1;
//}
//int deleteAll(struct node*head){
//	struct node*p = head;
//	struct node*k = head;
//	for(;p->next!=NULL;){
//		for(;p->next!=NULL;k=p,p=p->next);
//		k->next = NULL;
//		free(p);
//		p = head;
//		k = head;
//	}
//	free(head);
//	return 1;
//}
//int sort(struct node* head){
//	int len = 0;
//	struct node*p = head;
//	struct node*k = head;
//	struct node*j = head;
//	for(;p->next!=NULL;p=p->next,len++);
//	p = head;
//	for(int i = 0;i<len - 1;i++){
//		for(int w = 0;w<len-i-1;w++){
//				for(int q=0;q<=w;q++){
//					k=p;
//					p=p->next;
//					j=p->next;
//				}
//			if(p->value < j->value){
//				p->next = j->next;
//				j->next = p;
//				k->next = j;
//			}
//			p=head;
//			j=head;
//			k=head;
//		}
//	}
//	return 1;
//}
//int main(){
//	struct node* head = creat();
//	add(head,2);
//	add(head,1);
//	add(head,3);
//	add(head,4);
//	add(head,5);
//	find(head,1);
//	deleteAll(head);
//	sort(head);
//	print(head);
//}





