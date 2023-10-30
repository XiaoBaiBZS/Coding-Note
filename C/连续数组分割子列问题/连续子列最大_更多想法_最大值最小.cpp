/*
对于给定的一个长度为N的正整数数列A，现要将其分成M段（M≤N）段，
并要求每段连续，且每段和的最大值最小。
*/
#include<bits/stdc++.h>
using namespace std;
int n;         //数列长度 
int m;         //分段数 
int a[100005]; //数组 
int l;         //左 
int r;         //右 
int mid;       //中 
int ans;       //答案 

//判断答案是否符合题目要求 
inline bool check(int x){
    int tot=0; //计数器 
	int num=0; //分段数 
	/*
	给出最大值mid，要尽可能使得在分组和有大于等于mid条件下分的
	组数多。那么存在计数器tot，遍历数组a，如果得到的数小于mid
	就加到计数器里面，直到计数器里面的值大于mid。使用num存储分
	段数。 
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

//程序开始 
int main(){
	//输入 
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
    	scanf("%d",&a[i]);
		l=max(l,a[i]);    //答案范围最小值是数组中最大的单个数 
		r+=a[i];          //答案范围最大值是数组中所有数组的和 
	}
	//判断 
    while(l<=r)
    {
        mid=l+r>>1;       //位运算取中值 
        if(check(mid)){
        	l=mid+1;      //更新左端点序号 
		} 
        else{
        	r=mid-1;      //更新右端点序号 
		}
    }
    cout<<l;
    return 0;
}
