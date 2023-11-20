/*
获取用户输入的一个字符串和一个字符x，删除用户输入的字符串中的所有字符x
输入样例：
abcsdsdssd
s
输出样例：
abcddd 
*/
#include<stdio.h>
#include<string.h>
int main(){
    char s[50];
    char x;
    gets(s);
    scanf("%c",&x);
    int i=0,j=0;
    for(i=0,j=0;s[i]!='\0';i++){
    	if(s[i]==x){
    		continue;
		}
		s[j]=s[i];
		j++;
	}
	s[j]='\0';
	printf("%s",s);
    return 0;
}
