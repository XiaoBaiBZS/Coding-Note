/*
�Ӽ�����������������x��y��z���ٰ�����������С��������� 
����������2 5 1
���������2 1 5 
*/
#include<stdio.h>
int main(){
	int a[3]; 
	int x;
	//���� 
	for(int k=0;k<3;k++){
		scanf("%d",&a[k]);
	}
	//ð������ 
	for(int i=0;i<2;i++){
		for(int j=0;j<3-i;j++){
			if(a[j]>a[j+1]){
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	//��� 
	for(int k=0;k<3;k++){
		printf("%d ",a[k]);
	}
	return 0;
}

