#ifndef EXAMPLEHPP
#define EXAMPLEHPP

#include "Head.hpp"


class Example
{
public:
	Example() {}

	Example(int val, std::string str) {}

	~Example() {}

	int m00()const {}

	void m01(int a);

	static void m02();

private:
	int a;
	std::string b;
	static int global;
};


class Drobb
{
public:
	void Input(double num1, double num2, double num3);
	
	double Input();
	

	//если выбрать сложение или что-то ещё
	double Summ();
	
	double Sub();
	
	double Mult();
	
	double Div();


private:
	double upNum_;
	double downNum_;
	double anotherNum_;
};


void GoGoGo();



#endif 

