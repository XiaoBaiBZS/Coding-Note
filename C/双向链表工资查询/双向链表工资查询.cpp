/*
�½�����ʼ��һ�����ʵǼǱ��������š����������䡢��ϵ��ʽ�����ʣ�����һ�����ţ���ѯ��Ӧ���ʡ� 
*/

#include<stdio.h>
#include<malloc.h>
#include<string.h>
//�ṹ��
struct list {
	int number;
	char name[50];
	int year;
	long long tel;
	double wage;
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
		printf("number=%d    ",tp->number);
		printf("name=%s    ",tp->name);
		printf("year=%d    ",tp->year);
		printf("tel=%lld    ",tp->tel);
		printf("wage=%lf\n",tp->wage);
	}
	printf("Successful\n");
}
//ĩβ�����
int insert(struct list* head,int number,char name[],int year,long long tel,double wage) {
	struct list* p = (struct list*)malloc(sizeof(struct list));
	strcpy(p->name,name);
	p->number=number;
	p->year=year;
	p->tel=tel;
	p->wage=wage;
	struct list* k=head->last;
	k->next=p;
	p->last=head->last;
	head->last=p;
	p->next=head;
	return 1;
}
//����������
int search(struct list* head,char name[]) {
	struct list *tp = head;
	while(tp->next!=head) {
		tp=tp->next;
		if(0==strcmp(name,tp->name)) {
			printf("number=%d    ",tp->number);
			printf("name=%s    ",tp->name);
			printf("year=%d    ",tp->year);
			printf("tel=%lld    ",tp->tel);
			printf("wage=%lf\n",tp->wage);
			return 1;
		}
	}
	printf("NO DATA\n");
	return 0;
}
//���Ų�����
int search(struct list* head,int number) {
	struct list *tp = head;
	while(tp->next!=head) {
		tp=tp->next;
		if(tp->number==number) {
			printf("number=%d    ",tp->number);
			printf("name=%s    ",tp->name);
			printf("year=%d    ",tp->year);
			printf("tel=%lld    ",tp->tel);
			printf("wage=%lf\n",tp->wage);
			return 1;
		}
	}
	printf("NO DATA\n");
	return 0;
}
int main() {
	struct list* head = creat();
	insert(head,30201,"WorkerA",15,15776990506,3000);
	insert(head,30202,"WorkerB",20,13876990506,2650);
	insert(head,30203,"WorkerC",25,13676990506,8690);
	print(head);
	search(head,"WorkerA");
	search(head,30202);
	return 0;
}
