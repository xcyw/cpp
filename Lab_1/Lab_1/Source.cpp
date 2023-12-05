/*********************************************
LAB #1 
---------------------------------------------
2/6/2023
---------------------------------------------
CLASS:   CS1B
PROF:    MED MOGASEMI
STUDENT: ASHLEY SYHONGPAN
---------------------------------------------
This program prompts the user to input
student's test answers. It then compares the
student's answers to the correct answers. It
then outputs whether the student pass or failed,
the question numbers they got wrong, and how
many wrong and right answers the students had.
*********************************************/

/*** PREPROCESSOR DIRECTIVES ***/
#include <iostream>
using namespace std;

/*** FUNCTION PROTOTYPES ***/
void input(char studentAnswers[], int questionNum);
void checkAnswers(char studentAnswers[], char correctAnswers[], int& wrongQuestion, int& i, int questionNum);

int main()
{
	int questionNum   = 20;
	int wrongQuestion = 0;
	int wrongAnswer   = 0;
	int temp          = 0;
	int index         = 0;
	char correctAnswers[20] = { 'A', 'D', 'B', 'B', 'C',
								'B', 'A', 'B', 'C', 'D',
								'A', 'C', 'D', 'B', 'D',
								'C', 'C', 'A', 'D', 'B' };
	char studentAnswers[20];
	int  wrongQuestions[20];

	string testResult;

	// this function prompts the user for the student's test answers
	input(studentAnswers, questionNum);

	// this for loop checks all answers in the test
	for (int i = 0; i < questionNum; i++)
	{
		// this function compares the student's answers to the correct test answers
		checkAnswers(studentAnswers, correctAnswers, wrongQuestion, wrongAnswer, i);

		// this keeps count of the wrong question number
		if (temp < wrongAnswer)
		{
			wrongQuestions[index] = wrongQuestion;
			index++;
			temp              = wrongAnswer;
		}

	} // END - for (int i = 0; i < questionNum; i++)

	// this checks if the student passed or failed
	if (wrongAnswer < 6)
		testResult = "passed";
	else
		testResult = "failed";

	cout << endl << endl;
	cout << "The student " << testResult << " the exam.\n\n";

	cout << "Correct Answers: "   << (20 - wrongAnswer) << endl;
	cout << "Incorrect Answers: " << wrongAnswer        << endl << endl;

	cout << "Questions that were answered incorrectly:\n";

	// this loops until the number of all wrong questions is output
	for (int j = 0; j < wrongAnswer; j++)
	{
		cout << wrongQuestions[j] << endl;
	} // END - for (wrongAnswer; wrongAnswer > 0; wrongAnswer--)

	return 0;
} // END - main()

/*** FUNCTION DECLARATIONS ***/

void input(char studentAnswers[], int questionNum)
{
	char answer;

	cout << "Please enter the student's answers for each of the questions.\n";
	cout << "Please Enter after typing each answer.\n";
	cout << "Pleaase enter only an A, B, C, or D for each question.\n";

	// this loops until the program recieves enough answers
	for (int i = 1; i <= questionNum; i++)
	{
		cout << "Question " << i << ": ";
		// this error checks whether the input is anything other than a, b, c, or d (not case sensitive)
		do
		{
			cin.get(answer);
			answer = toupper(answer);
			
			studentAnswers[i-1] = answer;
			if ((answer != 'A') && (answer != 'B') &&
				(answer != 'C') && (answer != 'D'))
			{
				cout << "Use only an A, B, C, or D!\n";
				cout << "Please try again.\n";
			} // END - if ((answer != 'A') && (answer != 'B') &&
			  //           (answer != 'C') && (answer != 'D'))

			cin.ignore();
		} while ((answer != 'A') && (answer != 'B') &&
				 (answer != 'C') && (answer != 'D')); // END - do

	} // END - for (int i = 1; i <= questionNum; i++)
}

void checkAnswers(char studentAnswers[], char correctAnswers[], int& wrongQuestion, int& wrongAnswer, int i)
{
	if (studentAnswers[i] != correctAnswers[i])
	{
		wrongQuestion = i + 1;
		wrongAnswer++;
	} // END - if (studentAnswers[i] != correctAnswers[i])
} // END - checkAnswers(char studentAnswers[], char correctAnswers[], int& wrongQuestion, int& wrongAnswer, int i)

/********************************************* OUTPUT *********************************************
Please enter the student's answers for each of the questions.
Please Enter after typing each answer.
Pleaase enter only an A, B, C, or D for each question.
Question 1: b
Question 2: D
Question 3: b
Question 4: B
Question 5: e
Use only an A, B, C, or D!
Please try again.
c
Question 6: d
Question 7: a
Question 8: b
Question 9: c
Question 10: F
Use only an A, B, C, or D!
Please try again.
d
Question 11: a
Question 12: c
Question 13: d
Question 14: b
Question 15: d
Question 16: c
Question 17: c
Question 18: A
Question 19: d
Question 20: b


The student passed the exam.

Correct Answers: 18
Incorrect Answers: 2

Questions that were answered incorrectly:
1
6

C:\Users\ashle\source\repos\Lab_1\x64\Debug\Lab_1.exe (process 24548) exited with code 0.
Press any key to close this window . . .

****************************************************************************************************/
