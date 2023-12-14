# 双向链表实现成绩管理
## 结构体
```C
//结构体
struct list {
//数据域
  //分数
  int score;
  //姓名
  char name[50];
//指针域
struct list *next;
};
```
## 操作函数
### 创建并初始化链表
`struct list* creat();`

创建一个链表，返回链表的头部指针
### 输出链表
`void print(struct list*head);`

传入链表的头部指针，输出整个链表，无返回值
### 删除链表
`int destory(struct list* head);`

传入链表的头部指针，删除整个链表，成功删除返回1，不成功返回0
### 添加一项
`int insert(struct list* head,int score,char name[]) ;`

传入链表的头部指针、要添加的数据域，在链表尾部添加一项，成功添加返回1，不成功返回0
### 根据数据域中的姓名查找数据域的分数
`int search(struct list* head,char name[]);`

传入链表的头部指针、数据域中的姓名，打印对应成绩并返回1，若没有该项数据则打印“NO DATA”并返回0
### 根据数据域中的姓名删除对应项
`int deleteData(struct list* head,char name[]);`

传入链表的头部指针、数据域中的姓名，删除对应一项，成功删除返回1，不成功打印“NO DATA”并返回0
### 根据数据域中的姓名改变对应数据域的分数值
`int changeData(struct list* head,char name[],int score);`

传入链表的头部指针、要改变的数据域，改变对应一项的值，若无法找到对应项则在链表尾部添加一项，成功更改返回1，不成功更改添加一项后返回0
### 获取链表数据部分长度
`int getLength(struct list* head);`

传入链表的头部指针，返回链表数据部分长度
### 根据链表数据域中的分数高到低排序
`int sortData(struct list* head);`

传入链表的头部指针，更改链表排序，成功返回1
## 所有函数
```C
#include<stdio.h>
#include<malloc.h>
#include<string.h>
//结构体
struct list {
	int score;
	char name[50];
	struct list *next;
	struct list *last;
};
//创建并初始化链表
struct list* creat() {
	struct list* head = NULL;
	head = (struct list *)malloc(sizeof (struct list));
	head->next = head;
	head->last = head;
	return head;
}
//输出链表
void print(struct list*head) {
	struct list *tp = head;
	while(tp->next!=head) {
		tp=tp->next;
		printf("score=%d    ",tp->score);
		printf("name=%s\n",tp->name);
	}
	printf("Successful\n");
}
//删除链表
int destory(struct list* head) {
	while(1) {
		struct list *tp = head;
		if(tp->next==head) {
			free(head);
			return 1;
		} else {
			while(tp->next!=head) {
				tp=tp->next;
			}
			tp->next->last=tp->last;
			tp->last->next=tp->next;
			free(tp);
		}
	}
	return 0;
}
//末尾添加项
int insert(struct list* head,int score,char name[]) {
	struct list* p = (struct list*)malloc(sizeof(struct list));
	strcpy(p->name,name);
	p->score=score;
	struct list* k=head->last;
	k->next=p;
	p->last=head->last;
	head->last=p;
	p->next=head;
	return 1;
}
//查找项
int search(struct list* head,char name[]) {
	struct list *tp = head;
	while(tp->next!=head) {
		tp=tp->next;
		if(0==strcmp(name,tp->name)) {
			printf("%s's score=%d\n",tp->name,tp->score);
			return 1;
		}
	}
	printf("NO DATA\n");
	return 0;
}
//删除某一项
int deleteData(struct list* head,char name[]) {
	struct list *tp = head;
	while(tp->next!=head) {
		tp=tp->next;
		if(0==strcmp(name,tp->name)) {
			tp->next->last=tp->last;
			tp->last->next=tp->next;
			free(tp);
			return 1;
		}
	}
	printf("NO DATA\n");
	return 0;
}
//改变某项值
int changeData(struct list* head,char name[],int score) {
	struct list *tp = head;
	while(tp->next!=head) {
		tp=tp->next;
		if(0==strcmp(name,tp->name)) {
			tp->score=score;
			return 1;
		}
	}
	printf("NO DATA\n");
	//没有数据则创建
	insert(head,score,name);
	return 0;
}
//获取链表数据部分长度
int getLength(struct list* head) {
	struct list *tp = head;
	int length = 0;
	while(tp->next!=head) {
		tp=tp->next;
		length++;
	}
	//printf("%d\n",length);
	return length;
}
//排序
int sortData(struct list* head) {
	int length=getLength(head);
	struct list *tp = head;
	struct list *tk = head;
	struct list *tj = head;
	for(int i=0; i<length-1; i++) {
		for(int j=0; j<length-1-i; j++) {
			tk = head;
			tp = head;
			tj = head;
			for(int k=0; k<=j; k++) {
				tk=tp;
				tp=tp->next;
				tj=tp->next;
			}
			if((tp->score)<(tj->score)) {
				tk->next=tj;
				tp->next=tj->next;
				tj->next->last=tp;
				tj->next=tp;
				tp->last=tj;	
				tj->last=tk;
			}
		}
	}
	return 1;
}

```
