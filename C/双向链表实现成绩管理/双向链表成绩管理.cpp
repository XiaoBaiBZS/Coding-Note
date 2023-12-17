/*
��10��ѧ����ÿ��ѧ�����ݰ���ѧ�š�������3�ſεĳɼ����Ӽ���������10��ѧ�������ݣ�
Ҫ���ӡ��ÿ��ѧ����3�ſε�ƽ���ɼ�����߷�ѧ����Ϣ�� 
*/
#include<stdio.h>
#include<malloc.h>
#include<string.h>
//�ṹ��
struct list {
	int score1;
	int score2;
	int score3;
	int number; 
	char name[50];
	double ave;
	struct list *next;
	struct list *last;
};
//��������ʼ������
struct list* creat() {
	struct list* head = NULL;
	head = (struct list *)malloc(sizeof (struct list));
	head->next = head;
	head->last = head;
	return head;
}
//�������
void print(struct list*head) {
	struct list *tp = head;
	while(tp->next!=head) {
		tp=tp->next;
		printf("name=%s    ",tp->name);
		printf("number=%d    ",tp->number);
		printf("score1=%d    ",tp->score1);
		printf("score2=%d    ",tp->score2);
		printf("score3=%d    ",tp->score3);
		printf("ave=%lf\n",tp->ave);
	}
	printf("Successful\n");
}
//ĩβ�����
int insert(struct list* head,int score1,int score2,int score3,int number,char name[]) {
	struct list* p = (struct list*)malloc(sizeof(struct list));
	strcpy(p->name,name);
	p->score1=score1;
	p->score2=score2;
	p->score3=score3;
	p->number=number;
	p->ave=1.*(score1+score2+score3)/3;
	struct list* k=head->last;
	k->next=p;
	p->last=head->last;
	head->last=p;
	p->next=head;
	return 1;
}
int getLength(struct list* head) {
	struct list *tp = head;
	int length = 0;
	while(tp->next!=head) {
		tp=tp->next;
		length++;
	}
	return length;
}
//����
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
			if((tp->ave)<(tj->ave)) {
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
//������ 
void printMax(struct list* head){
	sortData(head); 
	printf("name=%s    ",head->next->name);
	printf("number=%d    ",head->next->number);
	printf("score1=%d    ",head->next->score1);
	printf("score2=%d    ",head->next->score2);
	printf("score3=%d    ",head->next->score3);
	printf("ave=%lf\n",head->next->ave);	
}
//������ 
int main() {
	struct list* head = creat();
	for(int i=0;i<3;i++){
		int score1;
		int score2;
		int score3;
		int number;
		char name[20];
		scanf("%d%d%d%d%s",&score1,&score2,&score3,&number,name);
		insert(head,score1,score2,score3,number,name);
		
	}
	print(head);
	printMax(head);
	return 0;
}

