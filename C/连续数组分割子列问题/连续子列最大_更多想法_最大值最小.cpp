/*
���ڸ�����һ������ΪN������������A����Ҫ����ֳ�M�Σ�M��N���Σ�
��Ҫ��ÿ����������ÿ�κ͵����ֵ��С��
*/
#include<bits/stdc++.h>
using namespace std;
int n;         //���г��� 
int m;         //�ֶ��� 
int a[100005]; //���� 
int l;         //�� 
int r;         //�� 
int mid;       //�� 
int ans;       //�� 

//�жϴ��Ƿ������ĿҪ�� 
inline bool check(int x){
    int tot=0; //������ 
	int num=0; //�ֶ��� 
	/*
	�������ֵmid��Ҫ������ʹ���ڷ�����д��ڵ���mid�����·ֵ�
	�����ࡣ��ô���ڼ�����tot����������a������õ�����С��mid
	�ͼӵ����������棬ֱ�������������ֵ����mid��ʹ��num�洢��
	������ 
   */
    for(int i=1;i<=n;i++){ 
	    if(tot+a[i]<=x){
        	tot+=a[i];
		}
        else{
        	tot=a[i];
			num++;
		}
    }
    return num>=m;
}

//����ʼ 
int main(){
	//���� 
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
    	scanf("%d",&a[i]);
		l=max(l,a[i]);    //�𰸷�Χ��Сֵ�����������ĵ����� 
		r+=a[i];          //�𰸷�Χ���ֵ����������������ĺ� 
	}
	//�ж� 
    while(l<=r)
    {
        mid=l+r>>1;       //λ����ȡ��ֵ 
        if(check(mid)){
        	l=mid+1;      //������˵���� 
		} 
        else{
        	r=mid-1;      //�����Ҷ˵���� 
		}
    }
    cout<<l;
    return 0;
}
