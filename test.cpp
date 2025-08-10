#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"FUNC.h"
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
////使用非类型模版参数
//template<class T=int,size_t N=100>
//class stack2
//{
//private:
//	T _a[N];
//	int _top;
//	int _capacity;
//};
////int main()
////{
////	stack2<int,10> s1;//10
////	stack2<int,1000> s2;//1000
////	stack2<int> s3;
////	stack2<> s4;
////	cout << sizeof(s1) << endl;
////	cout << sizeof(s2) << endl;
////	cout << sizeof(s3) << endl;
////	cout << sizeof(s4) << endl;
////	return 0; 
////}
//template<class T>
//bool Less(const T& left, const T& right)//使用&避免传值传参，同时const修饰避免使用引用将原值修改
//{
//	return left < right;
//}
////特化   
//template<>
//bool Less<double*>(double* const & left,double* const & right)//const 在*左边修饰指针指向对象，在*  w右边修饰指针本身
//{
//	return *left < *right;	
//}
//template<>
//bool Less<string*>(string* const & left, string* const & right)
//{
//	return *left < *right;
//}
//
//
//template<class T1,class T2>
//class Date
//{
//public:
//	Date()
//	{
//		cout << "Date(T1,T2)" << endl;
//	}
//private:
//	T1 d1;
//	T2 d2;
//
//};
////全特化
//template<>
//class Date<int,char>
//{
//public:
//	Date()
//	{
//		cout << "Date(int,char)" << endl;
//	}
//};
////偏特化
////特化部分参数
//template<class T1>
//class Date<T1,char>
//{
//public:
//	Date()
//	{
//		cout << "Date(T1,char)" << endl;
//	}
//};
////偏特化
////对参数进一步限制
//template<class T1,class T2>
//class Date<T1*, T2*>
//{
//public:
//	Date()
//	{
//		cout << "Date(T1*,T2*)" << endl;
//	}
//};
//
//template<class T1, class T2>
//class Date<T1&, T2&>
//{
//public:
//	Date()
//	{
//		cout << "Date(T1&,T2&)" << endl;
//	}
//};
//
//
//int main()
//{
//	/*cout << Less(3, 5) << endl;
//	cout << Less(3.3, 2.2) << endl;
//	cout << Less('ABC', 'AB') << endl;*/
//	Date<int, int> d1;
//	Date<int, char> d2;
//	Date<char, char> d3;
//	Date<int*, char*> d4;
//	Date<int&, char&> d5;   
//		
//	
//	return 0;
//}
int main()
{
	funcA(1);
	return 0;  
}