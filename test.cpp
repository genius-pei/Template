#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//#define N 10
//template<class T>
//class stack
//{
//private:
//	T _a[N];
//	int _top;
//	int _capacity;
//};
//int main()
//{
//	stack<int> s1;//10
//	stack<int> s2;//1000,单单使用宏N无法满足创建不同容量栈的需求
//}
//使用非类型模版参数
template<class T=int,size_t N=100>
class stack2
{
private:
	T _a[N];
	int _top;
	int _capacity;
};
int main()
{
	stack2<int,10> s1;//10
	stack2<int,1000> s2;//1000
	stack2<int> s3;
	stack2<> s4;
	cout << sizeof(s1) << endl;
	cout << sizeof(s2) << endl;
	cout << sizeof(s3) << endl;
	cout << sizeof(s4) << endl;
	return 0; 
}