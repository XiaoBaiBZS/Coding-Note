#include<stdio.h>
int main(){
	double x;					//�û�����x
	double sum=1;				//���ս��sum��sum��ʼֵΪ1 
	double sumX=1;				//��x��n�η���������math.h�� 
	int sumNum=1;				//��׳� 
	int n;						//�û�����n 
	scanf("%lf %d",&x,&n);		//�û����� 
	for(int i=1;i<=n;i++){		//��ѭ����ѭ��n�� 
		sumX=1;					//��ʼ�� 
		sumNum=1;
		for(int k=1;k<=i;k++){	//��x��n�η�
			sumX*=x;
		}
		for(int j=1;j<=i;j++){	//��׳� 
			sumNum*=j;
		}
		sum+=sumX/sumNum;		//�ۼ� 
	}
	printf("%.4lf",sum);			//����4λС������� 
	return 0;
}
