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
	int a[10]= {1,3,-5,-8,9,10,11,-12};
	vector<int>b;
	//���Ա�������
 	int n=0;
 	int sum=0;
 	for(int i=0;i<10;i++){                //������a�Ǳ�i��ʼ 
 		for(int k=i;k<10;k++){            //ÿ�α�������a[i]��a[k-1] 
 			for(int r=i;r<=k;r++){        //��ʼ���� 
 				sum+=a[r];                //��� 
 				b.push_back(sum);         //��������b 
 				
			 }
			 sum=0;                       //���� 
		 }
	 }
	 //��������b 
	 for(int w=0;w<b.size();w++){
	 	printf("%d\n",b[w]);
	 }
	 //TODO��ʹ��ð��������������b������� 
	return 0;
}
