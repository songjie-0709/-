#include<stdio.h>
int main()
{
	void p_s(void);//函数声明，void可有可无
	p_s();/*调用p_s(),输出$$$$$#####$$$$$*/
	p_s;
	p_s;
	return 0;
 } 
 void p_s()//定义p_s函数，该函数返回值为空，即无返回值
 {//函数体开始
 printf("$$$$$#####$$$$$\n");
 //函数返回值为空时，无return语句 
  } //函数体结束 
