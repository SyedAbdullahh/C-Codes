#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
void setCord(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void main()
{
	int t, w, k, j, q, tp;


	char c;
	cout << "Enter the number of seconds:";
	cin >> t;
	w =2* t;
	int w2 = 2 * t;
	k = t+2;
	k = t - k;
	k = k + 1;
	tp = t - 1;

	cout << "Enter the Character to represent sand:";
	cin >> c;

	for (int i =0; i <= t; i++)
	{

		for (j = 1; j <= i; j++)
		{
			cout << " ";
		}
		if (i == 0)
		{
			cout << " ";
			for (int i = 0; i <= w2; i++)
			{
				cout << "_";
			}

		}
		if (i != 0)
		{
			cout << "\\";

			for (int k = 1; k < w; k++)
			{


				cout << c;


			}
			w = w - 2;
			cout << "/";

		}
		cout << endl;


	}
	q = j-1;
	w = 0;
	// Part 2
	for (int i = 0; i <= t; i++)
	{

		


		for (j = q; j > i; j--)
		{
			
			cout << " ";
		}
		if (i == t)
		{
			cout << " ";
			for (int i=0; i <= w2; i++)
			{
				cout << "_";
			}

		}
		if (i != t)
		{
			cout << "/";
			for (int k = w; k >= 0; k--)
			{


				cout <<"-";


			}
			w = w + 2;
			cout << "\\";

		}
		cout << endl;


	}
	int x1 = 2, y1 = 3;
	int x2 = 2, y2 = (t*2)+2;
	// New 
	for (int p = 0; p <=tp; p++)
	{
		
		setCord(x1,y1);
		for (int j = 1; j < w2; j++)
		{
			cout << " ";
		}
		x1++;
		y1++;
		Sleep(750);
		setCord(x2, y2);
		for (int j = 1; j < w2; j++)
		{
			cout << c;
		}
		w2 = w2 - 2;;
		x2++; y2--;

		


	}
	setCord(0,0);
	system("pause");
	
	


}
