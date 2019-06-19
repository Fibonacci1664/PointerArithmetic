/*
 * Main.cpp
 *
 *  Created on: 19 Jun 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	const int NUM_OF_STRINGS = 5;

	string texts[NUM_OF_STRINGS] = {"one", "two", "three", "four", "five"};

	string *pTexts = texts;

	cout << *pTexts << endl;

	pTexts++;					// Move to the next element;

	cout << *pTexts << endl;

	pTexts = pTexts + 2;		// Move a further two elements along the array.

	cout << *pTexts << endl;

	pTexts -= 3;				// Move back three elements in the array.

	cout << *pTexts << endl;

	string *pEnd = &texts[NUM_OF_STRINGS]; 	// Set pointer to address of last element

	while(pTexts != pEnd)						// Compare first and last elements
	{
		cout << *pTexts << endl;

		pTexts++;								// Increment the pointer from the first element
												// to the next and continue to do so until
												// while condition is met.
	}

	/*
	 * The while loop above will not print out the last elements contents of 'five' because
	 * once the condition is met the while loop exits and the cout does not execute.
	 *
	 * If the last element was to be printed, simply change the variable in the square
	 * brackets on line 34 to read ' [NUM_OF_STRINGS] ' this will now print out the last
	 * element
	 *
	 * ** NOTE!!, NEVER TRY TO READ OR WRITE INFORMATION TO THE PASRT AFTER THE EQUALS
	 * ON LINE 34, READING WILL MORE THAN LIKELY JUST RETURN USELESS GARBAGE, HOWEVER
	 * WRITING INFORMATION CAN RESULT IN TRASHING YOUR OS, RESULTING IN HAVING TO RESTART YOUR
	 * SYSTEM OR WORSE!!
	 */

	// Set ' pTexts ' back to element 0;
	pTexts = &texts[0];

	cout << *pTexts << endl;

	// Below can be found a method for finding the number of elements in an array

	long numOfElements = pEnd - pTexts;		/*
											 * Remember that 'pEnd' points to NUM_OF_STRINGS which
											 * is 5, which is off the end of the array, as the
											 * array although having 5 elements is numbered
											 * 0 - 4.
											 *
											 * 'pTexts' is set to the first element, and so when
											 * we subtract we get the number of elements in the
											 * array, by using our pointers.
											 */

	cout << "Number of elements in the array = " << numOfElements << endl;

	// Below is how to find the middle of the array

	pTexts += NUM_OF_STRINGS / 2;

	cout << *pTexts << endl;


	return 0;
}


