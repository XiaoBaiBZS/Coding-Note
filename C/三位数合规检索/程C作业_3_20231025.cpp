/*
��дһ�����������200-300֮�����λ������������������λ������λ���ϵ�����֮��Ϊ42������֮��Ϊ12����237����
���������� ������
��������� 237\n
*/
#include<stdio.h>
int main() {
	int userInput=200;
	int x[3]= {0,0,0};
	for(userInput; userInput<=300; userInput++) {
		x[2]=userInput%10;
		x[1]=(userInput%100-x[1])/10;
		x[0]=(userInput-x[1]*10-x[2])/100;
		if((x[0]*x[1]*x[2])==42&&(x[0]+x[1]+x[2])==12) {
			printf("%d%d%d\n",x[0],x[1],x[2]);
		}
	}
	return 0;
}
