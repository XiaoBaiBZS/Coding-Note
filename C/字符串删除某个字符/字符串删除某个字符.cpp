/*
��ȡ�û������һ���ַ�����һ���ַ�x��ɾ���û�������ַ����е������ַ�x
����������
abcsdsdssd
s
���������
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
