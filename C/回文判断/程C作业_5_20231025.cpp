/*
�ж��û�����һ����������λ�������ж����Ƿ�Ϊ��������
����������13431
���������YES
����������123
���������NO
*/
#include<stdio.h>
int main(){
	int flag=1;
	int i; 
	int j;
	char a[200]={'\0'};
	//���� 
	scanf("%s",&a); 
	//��������a����ȡ����aʵ�������ַ���i 
	for(i=0;a[i]!='\0';i++){
	}
	//�ж� 
	for(int k=0,j=i-1;k<=j;k++,j--){
		if(a[k]!=a[j]){
			flag = 0;
			break;
		}
		
	}
	//��� 
	if(flag){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
