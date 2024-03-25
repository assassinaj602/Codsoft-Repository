#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{int number;
int guess = 0;
srand((unsigned int)time(NULL));
number=rand()%100;
do{
cout<<"Enter the value to guess from 1-100"<<endl;	
cin>>guess;

if(guess>number)
{cout<<"You guessed Higher than the guessed number"<<endl;

}
else if(guess<number)
{cout<<"You guessed lower than the Guessed Number"<<endl;
}
else 
{cout<<"Congratulations!You guessed the right Number!!!"<<endl;
}
}while(guess!=number);


	
	
	
	
	
	
}
