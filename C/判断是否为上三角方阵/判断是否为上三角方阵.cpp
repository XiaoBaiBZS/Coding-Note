/*
�ж��Ƿ�Ϊ�����Ƿ�������t����һ��t������ 
*/

#include<stdio.h>
int main() {
	int t;			//t������ ѭ������
	int size; 		//������
	int x;			//�û�����
	int flag=0;		//״̬
	int a[15][15];	//����
	scanf("%d",&t);	//����t
	for(int i=0; i<t; i++) {				//ѭ��t��
		scanf("%d",&size);				//����size
		for(int k=0; k<size; k++) {		//���û�����ŵ�������
			for(int r=0; r<size; r++) {
				scanf("%d",&x);
				a[k][r]=x;
			}
		}
		for(int w=0; w<size; w++) {		//�ж��Ƿ�������
			for(int o=0; o<w; o++) {
				//printf("%d\n",a[w][o]);

				if(a[w][o]!=0) {
					flag=1;
				}
			}
		
		}								//���
	if(flag) {
				printf("NO\n");
				flag=0; 
			} else {
				printf("YES\n");
				flag=0; 
			}
	}
	return 0;
}

