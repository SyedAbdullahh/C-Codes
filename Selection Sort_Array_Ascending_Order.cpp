#include <iostream>
using namespace std;

int main()
{
    const int size = 6;
    int size1 = size - 1; 
    int temp,i,ind_sm;
    int arr[size] = { 12,45,23,51,19,8 };
    int sm =1000;
    for (int j = 0; j <= size1; j++)
    {
        int sm = 1000; 
        for (i = j; i <= size1; i++)
        {
            if (arr[i] < sm)
            {
                
                sm =arr[i];
                ind_sm = i;

            }
        }
        //Just put the smallest value to the first index of unsorted array.
        // After each step, we ++ our initial index, because the new smallest will be stored at current initial index of unsorted part of array.
        temp = arr[j];
        arr[j] = arr[ind_sm];
        arr[ind_sm] =temp;


    }  
    
    for (int j = 0; j <= size1; j++)
    {
        cout << arr[j]<<",";
    }
    system("pause");

}


