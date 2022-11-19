#include<iostream>
#include<iomanip>
using namespace std;
void login(int arr[],int SIZE,float balance[]);
void deposit(int,float balance[]);
void l_menu(int id, int SIZE, int arr[], float balance[]);
void create();
void withdraw();
void r_balance();
void quit();
void menu(int id[], int SIZE, float balance[],int p=0);
void main()
{
	const int SIZE = 11;
	int id[SIZE];
	float balance[SIZE];
	for (int i = 1; i < SIZE; i++)
	{
		id[i] = 0;
		balance[i] = 0;
	}
	menu(id, SIZE,balance);
}
void create(int arr[], int SIZE, float balance[])
{
	int id, flag = 0;
	cout << "\nEnter User ID:";
	cin >> id;

	while ((cin.fail())||id<=0||id>11) {

		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a number! and it must be between 0 and 10, both included \n";
		cin >> id;
	}

	
		for (int i = 1; i < SIZE; i++)
		{
			if (arr[i] == id)
			{
				flag = 1;
			}
		}





	if (flag ==0)
	{
		arr[id] = id;
		cout << "\nThank You! Your account has been created!\n";
		cout << "\nPress Enter To Continue...";
		cin.clear();
		cin.ignore(100, '\n');
		cin.get();
		menu(arr, SIZE, balance);


	}
	else
	{
		cout << "\nUser ID Already Exists..";
		cout << "\nPress Enter To Continue...";
		cin.clear();
		cin.ignore(100, '\n');
		cin.get();
		menu(arr, SIZE, balance);
	}
}
	
void login(int arr[],int SIZE,float balance[])
{
	system("cls");
	int id, flag=0;
	cout << "\nEnter User ID:";
	cin >> id;

		while (cin.fail()) {

			cin.clear(); 
			cin.ignore(100, '\n'); 
			cout << "Please enter a number!\n";
				cin >> id;
		}
		
			for (int i = 1; i < SIZE; i++)
			{
				if (arr[i] == id)
				{
					flag = 1;
				}
			}

		
		
	
	
	if (flag == 1)
	{
		cout << "\nAccess Granted!";
		cout << "\nPress Enter To Continue...";
		cin.clear();
		cin.ignore(100, '\n');
		cin.get();
		l_menu(id,SIZE,arr, balance);
		
	}
	else
	{
		cout << "\n******** Account Does not Exist !!! ********";
		cout << "\nPress Enter To Continue...";
		cin.clear();
		cin.ignore(100, '\n');
		cin.get();
		menu(arr, SIZE, balance);
	}

}
void menu(int id[], int SIZE, float balance[],int p)
{
	system("cls");
	int ov_ans = 1;

	char menu1_ans;
	
	
		
		while (ov_ans == 1)
		{
			cout << "Hi! Welcome to SYED ABDULLAH’s ATM Machine!\n Please select an option from the menu below :\nl->Login\nc->Create New Account\nq->Quit\n";
			cin >> menu1_ans;
			switch (menu1_ans)
			{
			case 'l':
			{
				login(id, SIZE, balance);
				break;
			}
			case'c':
			{
				create(id, SIZE, balance);
				break;
			}
			case'q':
			{
				cout << "Thanks for stopping by User "<<p<<" !BYE";
				cin.clear();
				cin.ignore(100, '\n');
				cin.get();
				system("cls");
				break;
			}
			default:
			{
				cout << "\nInvalid Input..Press 1 to Continue";
				cin >> ov_ans;
				while (cin.fail()) {

					cin.clear();
					cin.ignore(100, '\n');
					cout << "Please enter a numeric Value!\n";
					cin >> ov_ans;
				}
				break;
			}
			}

		}
		

	
}
void deposit(int id, int SIZE, int arr[], float balance[])
{
	system("cls");
	float temp;
	cout << "\nEnter the Amount of Deposit:";
	cin >> temp;
	while (cin.fail()) {

		cin.clear();
		cin.ignore(100, '\n'); 
		cout << "Please enter a numeric Value!\n";
		cin >> temp;
	}
	balance[id] += temp;
	cout << "\nAmount credited successfully";
	cout << "\nPress Enter To Continue...";
	cin.clear();
	cin.ignore(100, '\n');
	cin.get();

	l_menu(id, SIZE, arr, balance);


}
void withdraw(int id, int SIZE, int arr[], float balance[])
{
	system("cls");
	float f,temp;
	int i,k5,k1,k05,k01,k005,k002,k001;
	cout << "Amount of withdrawal:";
	cin >> f;
	i = f;
	temp = f - i;
	
	
	while (temp != 0||(i%10!=0)|| f > balance[id]|| cin.fail())
	{
		if (f > balance[id])
		{
			cout << "\nError..You have Insufficient Balance to Process this Transaction";
		}
		if (i % 10 != 0)
		{
			cout << "\nInput Must be a multiple of 10 ";
		}
		if (temp != 0)
		{
			cout << "\nInput must be an Integer Value";
		}
		if (cin.fail())
		{
			cout << "\nPlease enter a numeric Value!";
		}
		
		cin.clear();
		cin.ignore(100, '\n');
		cout << "\nEnter Amount of withdrawal Again or Enter -1 to go back: ";
		cin >> f;
		if (f == -1)
		{
			l_menu(id, SIZE, arr, balance);

		}
		i = f;
		temp = f - i;
		
	}

	balance[id] -= f;
	cout << "\nCash Withdrawal for Rs." << f << " requested";
	if (i >= 5000)
	{
		k5 = f / 5000;
		cout << "\nDenomination 5000s-" << k5;
		i = i % 5000;
	}
	if (i >= 1000)
	{
		k1 = i / 1000;
		cout << "\nDenomination 1000s-" << k1;
		i = i % 1000;
	}
	if (i >= 500)
	{
		k05 = i / 500;
		cout << "\nDenomination 500s-" << k05;
		i = i % 500;
	}
	if (i >=100)
	{
		k01 = i / 100;
		cout << "\nDenomination 100s-" << k01;
		i = i % 100;
	}
	if (i >= 50)
	{
		k005 = i / 50;
		cout << "\nDenomination 50s-" << k005;
		i = i % 50;
	}
	if (i >= 20)
	{
		k002 = i / 20;
		cout << "\nDenomination 20s-" << k002;
		i = i % 20;
	}
	if (i >= 10)
	{
		k001 = i / 10;
		cout << "\nDenomination 10s-" << k001;
		i = i % 20;
	}
	cout << "\nPress Enter To Continue...";
	cin.clear();
	cin.ignore(100, '\n');
	cin.get();
	l_menu(id, SIZE,arr, balance);




}
void r_balance(int id, int SIZE, int arr[], float balance[])
{
	system("cls");
	
	cout <<"\nYour Balance is Rs"<< balance[id];
	cout << "\nPress Enter To Continue...";
	cin.clear();
	cin.ignore(100, '\n');
	cin.get();
	l_menu(id,SIZE, arr,balance);
	

}
void l_menu(int id,int SIZE,int arr[],float balance[])
{
	system("cls");
	char l_ans;
	cout << "\nLogin Menu....\nd->Deposit Money\nw -> Withdraw Money\nr -> Request Balance\nm->Go back to Main Screen...\n";
	cin >> l_ans;
	switch (l_ans)
	{
	case 'd':
	{

		deposit(id,SIZE,arr,balance);
	
		break;
	}
	case'w':
	{
		withdraw(id, SIZE, arr, balance);

		break;
	}
	case'r':
	{
		r_balance(id, SIZE, arr, balance);
		break;
	}
	case 'm':
	{
		menu(arr, SIZE, balance,id);
		break;
	}
	default:
	{
		cout << "\nInvalid Input..";

		menu(arr, SIZE, balance,id);
		break;
	}
	}
}
