#include <iostream>
#include <string>
using namespace std;
// class jarvis
// {
// public:
// 	string name;
// 	int age;
// 	string address;
// 	string hobby;
// 	void witcher()
// 	{
// 		cout << "Your name is " << this->name << "."
// 			 << endl
// 			 << "You are " << this->age << " years old"
// 			 << endl
// 			 << "Your address is " << this->address << endl
// 			 << "Your hobby is " << this->hobby << endl;
// 	}
// };
int main()
{
	//hi,hello
	string calc;
	string again;
	string pass;
	string s;
	string o;
	string wake;
	cin >> wake;
	if (wake == "wakeupjarvis")
	{
		goto hell;
	}
	else
	{
		goto end;
	}
hell:
	cout << "Good morning sir" << endl;
	cin >> o;
	cout << "How are you?" << endl;
	cin >> s;
	if (s == "fine")
	{
		cout << "Good to hear sir, ";
	}
	else
	{
		cout << "sorry to hear, " << endl;
	}
	//task

	char op;
	cout << "Can i do something for you (enter y/n)" << endl;
	cin >> op;
	switch (op)
	{
	case 'n':
		cout << "okay bye" << endl;
		goto end;
		break;
	case 'y':
		cout << "okay,what can i do for you? ";
		cin >> calc;
		if (calc == "calculate")
		{
			cout << "Here you go sir" << endl;
			goto calculator;
		}
		else if (calc == ("Whoami?")||("myinfo"))
		{
			cout<<"You are: my boss.\nYour name is: Witcher.\nYou are: 15 years old\n"<<endl;
			// goto userinfo;
			goto end;
		}
		else if (calc == "witcher")
		{
			goto password;
		}
		else
		{
			cout << "Sorry,i couldn't understand";
			goto end;
		}
		break;

	default:
		cout << "Sorry,i couldn't understand";
		break;
	}
//calculator
calculator:
	char sign;
	float num1, num2;
	cout << "Enter 2 numbers: ";
	cin >> num1 >> num2;
	cout << "Enter an operator: ";
	cin >> sign;
	switch (sign)
	{
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '/':
		cout << num1 / num2;
		break;	
	default:
		cout << "Error! select a valid operator";
	}
	char exit;
	cout << endl
		 << "Enter c to continue & e to exit: ";
	cin >> exit;
	switch (exit)
	{
	case ('c'):
		goto calculator;
		break;
	case ('e'):
		goto end;
		break;
	default:
		cout << "Error!,invalid option.";
	}
//Witcher
password:
	cout << "Enter password to continue: ";
	cin >> pass;
	if (pass == "ringaringaroses")
	{
		cout << "Welcome to the 'WITCHER WORLD'" << endl;
		goto end;
	}
	else
	{
		cout << "Wrong password!wanna try again?(y/n): ";
		cin >> again;
		if (again == "y")
		{
			goto password;
		}
		if (again == "n")
		{
			goto end;
		}
		else
		{
			cout << "Invalid option";
			goto end;
		}

	// userinfo:
		// jarvis.witcher;
		// witcher.name = "Witcher";
		// witcher.age = 15;
		// witcher.hobby = "Coding";
		// witcher.address= "Dang";

	end:
		return 0;
	}
}
