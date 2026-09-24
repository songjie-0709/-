#include<iostream>
#include<iomanip>//下面的setw()要用到该头文件 
using namespace std;
int main()
{
	int a,b,sum;
	cout<<"请从键盘输入两个整数，整数之间用空格间隔，输完后回车：";//在显示器上先显示这行文字
	cin>>a>>b;//从键盘输入两个整数分别给a和b，cin的用法见课本P42
	sum=a+b;//将变量a和b的值相加后赋值给sum
	cout<<"列竖式计算如下："<<endl;//cout的用法见课本P42，endl为换行（注意其最后符号为字母l）
	cout<<setw(10)<<a<<endl;//用setw（10）控制其后变量a的输出占10列（靠右输出，不足位时在左侧补空格）
	cout<<setw(4)<<'+'<<setw(6)<<b<<endl;//控制+占4列，b占6列
	cout<<"-----------"<<endl;//输出线条
	cout<<setw(10)<<sum<<endl;//控制sum占10列
	return 0; 
}
