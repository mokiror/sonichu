#include "example.hpp"


int Example::global{};
void Example::m01(int a){
}
void Example::m02(){
}


//����� � ������
void GoGoGo()
{
	double numOne = 0, numTwo = 0, numThree = 0;
	int choose = 0;
	int stop = 0;


	while (stop != 1)
	{
		std::cout << "\n������� ���������: ";
		std::cin >> numOne;
		std::cout << "������� �����������: ";
		std::cin >> numTwo;
		std::cout << "������� ���� ��� �����: ";
		std::cin >> numThree;
		std::cout << "�������� ��������: \n" <<
			"1 - ��������, 2 - ���������, 3 - ���������, 4 - �������\n";
		std::cin >> choose;

		switch (choose)
		{
		case 1:
		{
			Drobb obj;
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\n�����: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "�������� ����� � ������: " << obj.Summ() << std::endl;
			break;
		}
		case 2:
		{
			Drobb obj;
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\n�����: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "��������� ����� �� �����: " << obj.Sub() << std::endl;
			break;
		}
		case 3:
		{
			Drobb obj;
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\n�����: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "��������� ����� �� �����: " << obj.Mult() << std::endl;
			break;
		}
		case 4:
		{
			if (numThree == 0)
			{
				std::cout << "�� ���� ������ ������ :(" << std::endl;
				break;
			}
			else
			{
				Drobb obj;
				obj.Input(numOne, numTwo, numThree);
				std::cout << "\n�����: " << numOne << "/" << numTwo <<
					" = " << obj.Input() << std::endl;
				std::cout << "������� ����� �� �����: " << obj.Div() << std::endl;
				break;
			}
			break;
		}
		default:
		{
			break;
		}
		}

		std::cout << "\n����������? 1 - ���, 0 - ��: ";
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

//���� ������� �������� ��� ���-�� ���
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

