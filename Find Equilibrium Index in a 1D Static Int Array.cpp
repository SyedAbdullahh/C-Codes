#include <iostream>
using namespace std;
const int SIZE = 7;
int main()
{
    int arr[SIZE];
    int s2 = SIZE - 2;
    int sum1, sum2, temp1;
    int flag=0;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nEnter Value for [" << i << "]:";
        cin >> arr[i];
        while(arr[i] < -5000 || arr[i]>5000)
        {
            cout << "\nInvalid Input...";
            cout << "\nEnter Value for [" << i << "]:";
            cin >> arr[i];

        }
    }
    for (int i = 1; i <s2; i++)
    {
        sum1 = 0;
        sum2 = 0;
        for (int j = 0; j < i;j++)
        {
            sum1 += arr[j];
            

        }
        temp1 = i + 1;
        
        for (int k = temp1; k < SIZE;k++)
        {
            sum2 += arr[k];
        }
        if (sum1 == sum2)
        {
            cout << "Equilibrium Index:" << i << endl;
            flag = 1;
            break;
        }

    }
    if (flag == 0)
    {
        cout << "No Equilibrium Index Found...";
    }
}
