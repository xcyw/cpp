#include <iostream>
#include <vector>
using namespace std;

void outputVector(vector<int>& values);

int main()
{
	vector<int> values;

	int input;


	cout << "Vector Input: ";
	cout << endl;
	for(int count = 0; count < 5; count++)
	{
		cin >> input;
		cin.ignore();

		values.push_back(input);
	}

	// displays current values
	outputVector(values);

	// inserts 3 to the front and outputs values
	values.insert(values.begin(), 3);
	outputVector(values);

	// erases 3 from the front and outputs values
	values.erase(values.begin());
	outputVector(values);

	// erases 5 from the back and outputs values
	values.pop_back();
	outputVector(values);

	cout << endl;

	// outputs how many values are in the vector
	cout << "There are " << values.size() << " values.";

	return 0;
}

void outputVector(vector<int>& values)
{
	cout << endl;
	cout << "Vector: ";
	for (int i = 0; i < values.size(); i++)
	{
		cout << values[i] << " ";
	}
	cout << endl;
}

/* OUTPUTS *
Vector Input:
1
2
4
9
5

Vector: 1 2 4 9 5

Vector: 3 1 2 4 9 5

Vector: 1 2 4 9 5

Vector: 1 2 4 9

There are 4 values.
C:\Users\ashle\source\repos\HW_10b\x64\Debug\HW_10b.exe (process 16912) exited with code 0.
Press any key to close this window . . .

*/