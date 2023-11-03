/*
# 基于三维字符型数组的文本段落关键词检测_PTA_L1-070
5个测试点，三个答案正确，一个答案错误，一个段错误，但是感觉没啥问题 
## 题目要求： 
这种天气你有什么破事打电话给我基本没用。但是如果你说“吃火锅”，那就厉害了，我们的故事就开始了。本题要求你实现一个程序，自动检查你朋友给你发来的信息里有没有 chi1 huo3 guo1。

## 输入格式：
输入每行给出一句不超过 80 个字符的、以回车结尾的朋友信息，信息为非空字符串，仅包括字母、数字、空格、可见的半角标点符号。当读到某一行只有一个英文句点 . 时，输入结束，此行不算在朋友信息里。

## 输出格式：
首先在一行中输出朋友信息的总条数。然后对朋友的每一行信息，检查其中是否包含 chi1 huo3 guo1，并且统计这样厉害的信息有多少条。在第二行中首先输出第一次出现 chi1 huo3 guo1 的信息是第几条（从 1 开始计数），然后输出这类信息的总条数，其间以一个空格分隔。题目保证输出的所有数字不超过 100。如果朋友从头到尾都没提 chi1 huo3 guo1 这个关键词，则在第二行输出一个表情 -_-#。

## 输入样例 1：
Hello!
are you there?
wantta chi1 huo3 guo1?
that's so li hai le
our story begins from chi1 huo3 guo1 le
.

## 输出样例 1：
5
3 2\n 

## 输入样例2：
Hello!
are you there?
wantta qi huo3 guo1 chi1huo3guo1?
that's so li hai le
our story begins from ci1 huo4 guo2 le
.

## 输出样例2：
5
-_-#\n
 
*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[50][50][90];		//存储用户输入 行 每行字符串 每个字符串长度 
	char x;					//用户输入 
	int len[15];			//每行字符串个数 
	int i=0;				//行 
	int j=0;				//每行字符串个数 
	int w=0;				//每个字符串长度 
	int sum=0;				//计数器，用于记录关键词出现次数 
	while(1){
		x=getchar();		//输入 
		if(x=='\n'){		//输入换行 
			a[i][j][w]='\0';//补\0 
			len[i]=j;		//行数存入 
			i++;			//行数+1 
			w=0;			//更新字符串索引 
			j=0;			//更新元素索引 
		}else if(w==0&&x=='.'&&getchar()=='\n'){
			break;			//检测到单行输入了英文.和回车结束输入 
		}else if(x==' '){	//输入空格 
			a[i][j][w]='\0';//补\0 
			j++;			//更新字符串索引 
			w=0;			//更新元素索引 
		}else{				//正常输入 
			a[i][j][w]=x;
			w++;
		}
	}
	printf("%d\n",i);		//输出用户输入了多少行（从1开始） 
	for(int k=0;k<i;k++){
		for(int q=0;q<=len[k];q++){
				//if(strcmp(a[k][q],"chi1")==0&&strcmp(a[k][q+1],"huo3")==0&&strcmp(a[k][q+2],"guo1")==0){	
				//strcmp函数只能判断两个字符串是否完全相同，当输入关键字连在一起就无法正常判断 
				if(strstr(a[k][q],"chi1") != NULL&&strstr(a[k][q+1],"huo3") != NULL&&strstr(a[k][q+2],"guo1") != NULL){
				//strstr函数可以判断两个字符串是否包含 
					if(sum==0){
						printf("%d ",k+1);	//第一次遇到关键词输出行数，以后不输出只计数 
						sum++;
					}else{
						sum++;
					}	
				} 
				//printf("%s\n",a[k][q]);	//遍历输出所有字符串 
		}
	}
	if(sum==0){				//关键词一次都没有出现 
		printf("-_-#\n");
	}else{					//否则输出关键词出现次数 
		printf("%d\n",sum);
	}
	return 0;
} 
