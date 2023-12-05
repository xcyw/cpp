
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// global variables
const int SIZE = 5;

// function prototypes
void getNumbers(double numbers[]);
void writeToFile(ofstream& inFile, double numbers[], string file);
void displayFromFile(ifstream& outFile, double numbers[], string file);
void displayInReverse(double[]);

int main()
{
    ifstream inFile;
    ofstream outFile;
    string file;
    double numbers[SIZE];

    getNumbers(numbers);

    cin.ignore();

    cout << "Please enter the address for the file: ";
    getline(cin, file);

    cout << "\nWriting into the file.\n";
    writeToFile(outFile, numbers, file);

    cout << "\nDisplaying the values from the file.\n";
    displayFromFile(inFile, numbers, file);


    cout << "\nDisplay the values in reverse.\n";
    displayInReverse(numbers);

    inFile.close();

    cout << endl << endl;

    return 0;
}

// function definitions
void getNumbers(double numbers[])
{
    cout << "Please enter five numbers.\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter number #" << i + 1 << ": ";
        cin  >> numbers[i];
    }
}

void writeToFile(ofstream& outFile, double numbers[], string file)
{
    outFile.open(file);
    for (int i = 0; i < SIZE; i++)
    {
        outFile << numbers[i];
    }
    cout << "Done!";

    outFile.close();
}

void displayFromFile(ifstream& inFile, double numbers[], string file)
{
    inFile.open(file);

    if (inFile.fail())
    {
        cout << "Go home you are crazy.\n";
        exit(1);
    }

    for (int i = 0; i < SIZE; i++)
    {
        inFile >> numbers[i];
        cout << "The address of "    << &numbers[i]
             << " has the value of " << numbers[i] << endl;
    }
}

void displayInReverse(double numbers[])
{
    for (int i = SIZE - 1; i >= 0; i--)
    {
        cout << numbers[i] << endl;
    }

    cout << endl << endl;
}




