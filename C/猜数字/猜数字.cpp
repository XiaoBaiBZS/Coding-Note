/*
�������һ����������в����֣�����û���������������������Too High��
����û�����С���������������Too Low������û�������ȷ�����Right��
����������6
���������Too Low 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int m = rand();
	int a;
	while(1){
		printf("��²����֣�");
		scanf("%d",&a);
		switch(a>m){
			case 1 :printf("Too High\n");break;
			case 0 :switch(a==m){
				case 1 :printf("Right\n");return 0;
				case 0 :printf("Too Low\n");
			}
		}
	}	
	return 0;
}
