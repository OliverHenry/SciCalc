class Calculation{

public: double mathCalc(double firstNumber, char operation, double secondNumber){
	
	using namespace System;

	double Answer;

	switch (operation)
	{
	case '+':
		Answer = firstNumber + secondNumber;
		break;

	case '-':
		Answer = firstNumber - secondNumber;
		break;

	case '*':
		Answer = firstNumber * secondNumber;
		break;

	case '÷':
		Answer = firstNumber / secondNumber;
		break;

	case 'S':
		Answer = sin(secondNumber * 3.14159265358979 / 180.0);
		break;
		
	case 'C':
		Answer = cos(secondNumber * 3.14159265358979 / 180.0);
		break;
		
	case 'T':
		Answer = tan(secondNumber * 3.14159265358979 / 180.0);
		break;

	case 's':
		Answer = sqrt(secondNumber);
		break;

	case 'L':
		Answer = log10(secondNumber);
		break;

	case 'E':
		Answer = exp(secondNumber);
		break;

	case 'P':
		Answer = pow(firstNumber, secondNumber);
		break;

	case 'M':
		Answer = Convert::ToInt32(secondNumber) % 2;
		break;

	case '%':
		Answer = secondNumber * firstNumber / 100;
		break;

	case 'N':
		Answer = log(secondNumber);
		break;

	case '!':
		double fact = 1;

		for (int i = 1; i <= secondNumber; i++)
		{
			fact *= i;
		}
		Answer = fact;
		break;

	}

	return Answer;
}

};