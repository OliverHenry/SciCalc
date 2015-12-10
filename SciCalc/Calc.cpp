#include "Calc.h"
#include <iostream>
#include <math.h>   

using namespace System;
using namespace System::Windows::Forms;

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SciCalc::Calc form;

	Application::Run(%form);
	return 0;
}

