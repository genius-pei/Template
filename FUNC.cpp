#define _CRT_SECURE_NO_WARNINGS
#include"FUNC.h"
using namespace std;
template<class T>
void funcA(const T& x)
{
	cout << "void FuncT(const T& x)" << endl;
}
template
void funcA(const int& x);
