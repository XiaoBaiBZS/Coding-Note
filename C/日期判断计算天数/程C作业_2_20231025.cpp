/*
按顺序输入年月日的值，判断这一天是这一年的第几天。
输入样例：2023.3.21
输出样例：80
*/
#include<stdio.h>
int main() {
	int year;
	int month;
	int day;
	int leap;
	int log=0;
	int sum=0;
	int secMonthDay=28;
	do {
		scanf("%d.%d.%d",&year,&month,&day);
		//格式校验
		if(year<9999&&year>1000) {
			if(month==1||month==3||month==5||month==7||month==8||month||10||month==12) {
				//大月
				if(day>31) {
					printf("Input Error\n");
					log=1;
				}
			} else if(month==2) {
				if(year%4==0) {
					if(year%100==0) {
						if(year%400==0) {
							//闰年
							leap=1;
							secMonthDay=29;
						} else {
							//非闰年
							leap=0;
							secMonthDay=28;
						}
					} else {
						//闰年
						leap=1;
						secMonthDay=29;
					}
				} else {
					//非闰年
					leap=0;
					secMonthDay=28;
				}
				if(leap&&day>29) {
					printf("Input Error\n");
					log=1;
				} else if(leap==0&&day>28) {
					printf("Input Error\n");
					log=1;
				}
			} else {
				if(day>30) {
					printf("Input Error\n");
					log=1;
				}
			}
		} else {
			printf("Input Error\n");
			log=1;

		}
	} while(log);
	//计算天数
	switch(month-1) {
		case 11 :
			sum+=30;
		case 10 :
			sum+=31;
		case  9 :
			sum+=30;
		case  8 :
			sum+=31;
		case  7 :
			sum+=31;
		case  6 :
			sum+=30;
		case  5 :
			sum+=31;
		case  4 :
			sum+=30;
		case  3 :
			sum+=31;
		case  2 :
			sum+=secMonthDay;
		case  1 :
			sum+=31;
	}
	sum+=day;
	//输出
	printf("%d",sum);
	return 0;
}
