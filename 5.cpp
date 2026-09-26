#include<stdio.h>
int main()//若main的函数返回值为void,则函数体内无return 0;
{
	int score1,score2,sum=0;//用3个整形变量存储两门课程的成绩和总分
	score1=88;//给第1门课程赋值
	score2=67;//给第2门课程赋值
	sum=score1+score2;//求两门课程的总分
	printf("sum=%d\n",sum);//输出总分
}
