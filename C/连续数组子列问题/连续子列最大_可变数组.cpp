/*
���������������{1,3,-5,-8,9,10,11,-12}���ֳ�������Σ���ÿ�εĺ�����������͡�
����ʾ����
���ʾ����30
*/
#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int userInput; 
	vector<int>a;
	vector<int>b;
	//����
	while(1) {
		scanf("%d",&userInput);
		if(userInput==0) {                  //�������0��������� issue������û��������־���0������жϣ� 
			break;
		} else {
			a.push_back(userInput);
		}
	}
	//��ʼ������b 
	for(int i=0;i<a.size();i++){
		b.push_back(0);
	}
	int max=b[0];
	for(int s=1; s<a.size(); s++) {
		if(b[s-1] > 0) {                     //���b��ǰһ�����������ͼ���a
			b[s]=b[s-1]+a[s];
		} else {                             //�����ֱ����a=b����һ�� 
			b[s] = a[s];
		}
		if(max<b[s]) {                       //�������ֵ 
			max=b[s];
		}
	}
	//������ 
	printf("%d\n",max);
//	printf("%d",a.size());
//����a 
//	for(int i=0;i<a.size();i++){
//		printf("%d",a[i]);
//	}
//	
//	printf("%d",b.size());
//	����b 
//	for(int i=0;i<b.size();i++){
//		printf("%d",b[i]);
//	}	
	return 0;
}
