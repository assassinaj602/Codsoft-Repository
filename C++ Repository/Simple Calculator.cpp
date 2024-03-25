#include<iostream>
using namespace std;
int main()
{int loop;
do{
cout<<"----------------------------------------------------Simple Calculator------------------------------------------------"<<endl;
int number1,number2;
char operat;
cout<<"Enter Operand 1"<<endl;
cin>>number1;
cout<<"Enter operand 2"<<endl;
cin>>number2;
cout<<"Enter the operator "<<endl;
cin>>operat;


switch(operat)
{
	case '+':
		{cout<<"The addition of "<<number1<<" and "<<number2<<" is = "<<number1+number2<<endl;
		break;
		}
	case '-':
		{cout<<"The subtraction of "<<number1<<" and "<<number2<<" is = "<<number1-number2<<endl;
		break;
		}
	case '*':
		{cout<<"The Multiplication of "<<number1<<" and "<<number2<<" is = "<<number1*number2<<endl;
		break;
		}
	case '/':
		{if(number2!=0)
		  {cout<<"The division of "<<number1<<" and "<<number2<<" is = "<<number1/number2<<endl;
		}
		else{cout<<"The number gives undefined value"<<endl;
		}
		}
	default:
		{cout<<"Error in the values entered";
		}
}
cout<<"Enter 1 to re-use the calculator or 0 to terminate ";
cin>>loop;
}while(loop!=0);
}
