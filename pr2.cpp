#include<iostream>

using namespace std;

int main()
{
	int size, arr[20], i, j, temp;
	cout << "enter your array size" << endl;
	cin >> size;
	cout << "enter the elements" << endl;
	for (i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	cout << "sorting ..." << endl;
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "the sorted elements are :" << endl;
	for (i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;

}