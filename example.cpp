#include "example.hpp"


int Example::global{};
void Example::m01(int a){
}
void Example::m02(){
}


//класс с дробью
void GoGoGo()
{
	double numOne = 0, numTwo = 0, numThree = 0;
	int choose = 0;
	int stop = 0;


	while (stop != 1)
	{
		std::cout << "\nВведите числитель: ";
		std::cin >> numOne;
		std::cout << "Введите знаменатель: ";
		std::cin >> numTwo;
		std::cout << "Введите чило для дроби: ";
		std::cin >> numThree;
		std::cout << "Выберите действие: \n" <<
			"1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление\n";
		std::cin >> choose;

		switch (choose)
		{
		case 1:
		{
			Drobb obj;
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\nДробь: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "Сложение дроби с числом: " << obj.Summ() << std::endl;
			break;
		}
		case 2:
		{
			Drobb obj;
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\nДробь: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "Вычитание числа из дроби: " << obj.Sub() << std::endl;
			break;
		}
		case 3:
		{
			Drobb obj;
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\nДробь: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "Умножение числа из дробь: " << obj.Mult() << std::endl;
			break;
		}
		case 4:
		{
			if (numThree == 0)
			{
				std::cout << "На ноль делить нельзя :(" << std::endl;
				break;
			}
			else
			{
				Drobb obj;
				obj.Input(numOne, numTwo, numThree);
				std::cout << "\nДробь: " << numOne << "/" << numTwo <<
					" = " << obj.Input() << std::endl;
				std::cout << "Деление дроби на число: " << obj.Div() << std::endl;
				break;
			}
			break;
		}
		default:
		{
			break;
		}
		}

		std::cout << "\nПродолжить? 1 - нет, 0 - да: ";
		std::cin >> stop;

	}



}

void Drobb::Input(double num1, double num2, double num3)
{
	upNum_ = num1;
	downNum_ = num2;
	anotherNum_ = num3;
}
double Drobb::Input()
{
	return upNum_ / downNum_;
}

//если выбрать сложение или что-то ещё
double Drobb::Summ()
{
	return (upNum_ / downNum_) + anotherNum_;
}
double Drobb::Sub()
{
	return (upNum_ / downNum_) - anotherNum_;
}
double Drobb::Mult()
{
	return (upNum_ / downNum_) * anotherNum_;
}
double Drobb::Div()
{
	return (upNum_ / downNum_) / anotherNum_;
}

