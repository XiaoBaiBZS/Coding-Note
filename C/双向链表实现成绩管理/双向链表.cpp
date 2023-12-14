#include<stdio.h>
#include<malloc.h>
#include<string.h>
//�ṹ��
struct list {
	int score;
	char name[50];
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
		printf("score=%d    ",tp->score);
		printf("name=%s\n",tp->name);
	}
	printf("Successful\n");
}
//ɾ������
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
//ĩβ�����
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
//������
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
//ɾ��ĳһ��
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
//�ı�ĳ��ֵ
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
	//û�������򴴽�
	insert(head,score,name);
	return 0;
}
//��ȡ�������ݲ��ֳ���
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

int main() {
	struct list* head = creat();
	insert(head,10,"student1");
	insert(head,20,"student2");
	insert(head,30,"student3");
	print(head);
	//getLength(head);
	//search(head,"student1");
	changeData(head,"student5",50);
	//deleteData(head,"student1");
	print(head);
	sortData(head);
	print(head);
	destory(head);
	print(head);
	return 0;
}
