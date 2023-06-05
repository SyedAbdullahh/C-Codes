#include <iostream>
#include<string>

using namespace std;
const int SIZE = 8;
void GetData(string Courses[], int CrHrs[],int Marks[]);
void AssignGrades(int Marks[], string Grade[], float score[]);
void GetSGPA(float score[], int CrHrs[], int& CrErnd, float& SGPA);
void PrintData(string Courses[], int Marks[], string Grade[], int SGPA, int CrErnd);
bool CoursenameValidation(string, string Courses[],int);
int main()
{
	string Courses[SIZE];
	int CrHrs[SIZE];
	int Marks[SIZE];
	string Grade[SIZE];
	float score[SIZE];
	float SGPA;
	int CrErnd;
	GetData(Courses, CrHrs,Marks);
	AssignGrades(Marks, Grade, score);
	GetSGPA(score, CrHrs,CrErnd,SGPA);
	PrintData(Courses,Marks,Grade,SGPA,CrErnd);
	system("pause");


	

	


}
void GetData(string Courses[], int CrHrs[], int Marks[])
{
	
	for (int i = 0; i < SIZE; i++)
	{	
		
		cout << "Enter the Course Name: ";
		getline(cin,Courses[i]);
		while (!(CoursenameValidation(Courses[i], Courses, i)))
		{
			cout << "Invalid Input...This Course Already Exists.";
			cout << "Enter the Course Name: ";
			getline(cin, Courses[i]);
			

		}
		
			

		
		
		cout << "\nEnter the Credit Hours of " << Courses[i] << ": ";
		
		cin >> CrHrs[i];
		while (CrHrs[i] <= 0)
		{
			cout << "\n Invalid Input...";
			cout << "\nEnter the Credit Hours of " << Courses[i] << ": ";
			cin >> CrHrs[i];

		}
		cout << "\nEnter the Marks of Student in " << Courses[i] << ":";
		cin >> Marks[i];
		while (Marks[i] < 0||Marks[i] > 100)
		{
			cout << "\n Invalid Input....";
			cout << "\nEnter the Credit Hours of " << Courses[i] << ": ";
			cin >> Marks[i];

		}
		cin.ignore(256, '\n');

	}
	
}
void AssignGrades(int Marks[], string Grade[], float score[])
{
	for (int i = 0; i < SIZE; i++)
	{
		if (Marks[i] >= 90)
		{
			Grade[i] = "A+";
			score[i] = 4.00;

		}
		else if (Marks[i] >= 86)
		{
			Grade[i] = "A";
			score[i] = 4.00;

		}
		else if (Marks[i] >= 82)
		{
			Grade[i] = "A-";
			score[i] = 3.67;

		}
		else if (Marks[i] >= 78)
		{
			Grade[i] = "B+";
			score[i] = 3.33;

		}
		else if (Marks[i] >= 74)
		{
			Grade[i] = "B";
			score[i] = 3.00;

		}
		else if (Marks[i] >= 70)
		{
			Grade[i] = "B-";
			score[i] = 2.67;

		}
		else if (Marks[i] >= 66)
		{
			Grade[i] = "C+";
			score[i] = 2.33;

		}
		else if (Marks[i] >= 62)
		{
			Grade[i] = "C";
			score[i] = 2.00;

		}
		else if (Marks[i] >= 58)
		{
			Grade[i] = "C-";
			score[i] = 1.67;

		}
		else if (Marks[i] >= 54)
		{
			Grade[i] = "D+";
			score[i] = 1.33;

		}
		else if (Marks[i] >= 50)
		{
			Grade[i] = "D";
			score[i] = 1.00;

		}
		else if (Marks[i] >=0)
		{
			Grade[i] = "F";
			score[i] = 0.00;

		}





	}
}
void GetSGPA(float score[], int CrHrs[], int &CrErnd, float &SGPA)
{
	CrErnd = 0;
	float temp=0;
	float totalCr=0;
	for (int i = 0; i < SIZE; i++)
	{
		totalCr += CrHrs[i];
		if (score[i]>=1)
		{
			CrErnd+=CrHrs[i];
			temp += score[i] * CrHrs[i];
		}

	}
	SGPA = temp / totalCr;

}
void PrintData(string Courses[], int Marks[], string Grade[], int SGPA, int CrErnd)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << Courses[i] << "\t" << Marks[i] << "\t" << Grade[i] << endl;
	}
	cout << "SGPA: " << SGPA << endl;
	cout << "Earned Credit Hours: "<<CrErnd << endl;
}
bool CoursenameValidation(string course, string Courses[SIZE],int index)
{
	for (int i = 0; i < index; i++)
	{
		if (Courses[i] == course)
		{
			return false;
		}
	}
	return true;

}


