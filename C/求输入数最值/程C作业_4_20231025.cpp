/*
��дC���Գ���ʵ�����湦�ܣ��ж��û�������������У�ֵ������С���Ƕ��٣��û�����
�Ľ���ֵΪ-1���������ฺ������������ʾ���桰�������˸��������������룡����
����������2 5 3 6 1 -1
���������6\n1\n
����������5 -6
����������������˸��������������룡\n
*/
#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int userInput;
	int x;
	int aLength;
	vector <int> a;
	//�����ڸ�ʽ���� 
	while(1) {
		scanf("%d",&userInput);
		if(userInput==-1) {
			break;
		} else if(userInput<0) {
			printf("�������˸��������������룡\n ");
			a.clear();
		} else {
			a.push_back(userInput);
		}
	}
	//ð������
	aLength=a.size();
	for(int i=0; i<aLength-2; i++) {
		for(int j=0; j<aLength-1-i; j++) {
			if(a[j]>a[j+1]) {
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	//��� 
	printf("%d\n",a[aLength-1]);
	printf("%d\n",a[0]);
	return 0;
}
