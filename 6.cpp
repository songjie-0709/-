#include<stdio.h>
#include<stdlib.h>//用到system（）函数要包含该头文件
int main()
{
	system("color F5");/*函数system("coior xx")中的xx分别指的是设置运行终端的背景颜色（如设为F）和前景颜色（如设为5）。
					   x为一位16进制数，即0-F或0-F都可以使用。可以随意组合。0-F分别代表的颜色如下：0=黑色 1=蓝色 2=绿色
					   3=湖蓝色 4=红色 5=紫色 6=黄色 7=白色 8=灰色 9=淡蓝色 A=淡绿色 B=淡浅绿色 C=淡红色 D=淡紫色 E=淡黄色
					   F=亮白色*/
	printf("**************\n");
	printf("*Hello World!*\n");
	printf("**************\n");
	return 0;
}
