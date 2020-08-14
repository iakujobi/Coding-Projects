/*---------------------------------------------------------------------------*/
/*                          D O C U M E N T A T I O N                        */
//---------------------------------------------------------------------------*/
//
//
//  Author:             Ike Akujobi
//  Date of Creation:   10/07/2019
//  Version:            1.0.0
//  Revised by:         n/a
//  Revision Date:      n/a
//
//
//
//-------------------------------------------------
//::  PROGRAM DESCRIPTION:                       ::
//-------------------------------------------------
//
//  In this project, we are going to design a
//  program that computes set operations. The
//  domain for this project are alphabets including
//  lower-case as well as upper case.
//
//  That is, 𝑈 = {𝑎,𝑏,𝑐,...,𝑧,𝐴,𝐵,𝐶,...𝑍}.
//
//-------------------------------------------------
//
//      This program takes the INPUT:
//          1) Set U (set_U.txt)
//          2) Set A (set_A.txt)
//          3) Set B (set_B.txt)
//      --
//
//      It performs complex set operations using
//      the basic set operations:
//          1) Set Intersection
//          2) Set Difference
//          3) Checking if Set Differences are equal
//          5) Set Cardinality
//
//      Else the sets are considered:
//          6) Disjoint
//      --
//
//      The performed operations are PRINTED to the
//      console.
//
//-------------------------------------------------
//::  Function(s):                               ::
//-------------------------------------------------
//
//      1) void insert_set_elements( );
//      2) int  menu();
//      3) void intersection( );
//      4) void difference( );
//      5) void cardinality( );
//      6) void is_differene_same();
//      7) int  set_difference_menu();
//      8) int  difference_equality_checker_menu();
//
/*///////////////////////////////////////////////////////////////////////////*/
/*///////////////////////////////////////////////////////////////////////////*/
/*---------------------------------------------------------------------------*/
/*                        G L O B A L    S E C T I O N                       */
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-
//------------------------
// Libraries
//------------------------
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//------------------------
// I/O stream
//------------------------
fstream set_U;               // Set U (Universal Set)
fstream set_A;               // Set A
fstream set_B;               // Set B

							 //------------------------
							 // Global Variable
							 //------------------------
int menu_val;
//-----------------------------------------------------------------
// Function Prototype(s) - Main Menu
//-----------------------------------------------------------------
int menu();
//-----------------------------------------------------------------
// Function Prototype(s) - Set Operations - CARDINALITY
//-----------------------------------------------------------------
// Computes   |( set )|
void cardinality(int& cardinalityVal);
//-----------------------------------------------------------------
// Function Prototype(s) - Set Operations - INTERSECTION
//-----------------------------------------------------------------
// Computes   (set 1  n  set 2)
int set_intersection_menu();
void intersection(fstream& set_1, fstream& set_2, char set_to_check_letter);
//-----------------------------------------------------------------
// Function Prototype(s) - Set Operations - DIFFERENCE
//-----------------------------------------------------------------
void difference(fstream& set_1, fstream& set_2, char set_to_check_letter_1, vector<string>& diff_temp_container, int& cardinality_counter);
//-----------------------------------------------------------------
// Function Prototype(s) - Set Operations - DIFFERENCE MENU
//-----------------------------------------------------------------
// Computes   (set 1  −  set 2)
int set_difference_menu();
//----------------------------------------------------------------------
// Function Prototype(s) - Set Operations - DIFFERENCE CHECKER MENU
//----------------------------------------------------------------------
// Checks if  (Set 1  -  Set 2) == (Set 2  -  Set 1)
int difference_equality_checker_menu();
void is_differene_same(vector<string> diff_set_container_1, vector<string> diff_set_container_2);

////////////////////////////////////////////////////
//
//
/*///////////////////////////////////////////////////////////////////////////*/
/*///////////////////////////////////////////////////////////////////////////*/
/*---------------------------------------------------------------------------*/
/*                           M A I N    M O D U L E                          */
/*---------------------------------------------------------------------------*/
//------------------------
// Start Application
//------------------------

int main() {

	// Opening the Input files:
	set_U.open("SET-U.txt", std::fstream::in | std::fstream::out);
	set_A.open("SET-A.txt", std::fstream::in | std::fstream::out);
	set_B.open("SET-B.txt", std::fstream::in | std::fstream::out);

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Insert elements into Sets A and B
	

	 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 // Re-Opening the Input files:
	set_U.open("SET-U.txt", std::fstream::in | std::fstream::out);
	set_A.open("SET-A.txt", std::fstream::in | std::fstream::out);
	set_B.open("SET-B.txt", std::fstream::in | std::fstream::out);
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Starting Program: calling the Menu Function:
	menu_val = 0;
	// Begin While-Loop
	while (menu_val != 4) {
		if (menu_val == 0) {
			menu_val = menu();
		}
		else if (menu_val == 1) {
			menu_val = set_intersection_menu();
		}
		else if (menu_val == 2) {
			menu_val = set_difference_menu();
		}
		else if (menu_val == 3) {
			menu_val = difference_equality_checker_menu();
		}
	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Exit While-loop and Close the Input files:
	set_U.close();
	set_A.close();
	set_B.close();

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	//End Program:
	return 0;
}

//
//
/*///////////////////////////////////////////////////////////////////////////*/
/*///////////////////////////////////////////////////////////////////////////*/
/*---------------------------------------------------------------------------*/
/*                   F U N C T I O N    D E F I N I T I O N S                */
//-----------------------------------------------------------------------------


//----------------------
// MAIN MENU
//----------------------
int menu() {
	// This Function continously runs.
	//
	// The INPUTs are:
	//  (0) - quit program
	//  (1) - intersection operation runs
	//  (2) - difference operation runs
	//  (3) - is_differene_same,
	//  (4) - bool quit is set to 1
	//

	// Variable Declerations:
	bool run = 1; // 0==keeps menu function running, 1==stops menu function
	int input;

	// Variable Initializations:
	input = 0; //SET / RESET input

			   // Menu Screen Begins:
	cout << "---------------------------------------------------------" << endl;
	cout << "                     MAIN MENU                          |" << endl;
	cout << "                     ---------                          |" << endl;
	cout << "Input a number to perform an operation                  |" << endl;
	cout << "or to quit the application:                             |" << endl
		<< "                                                        |" << endl;
	cout << "1 = intersection                                        |" <<
		endl << "2 = difference                                          |" <<
		endl << "3 = is_difference_same                                  |" <<
		endl << "4 = quit                                                |" << endl;
	cout << "---------------------------------------------------------" << endl << endl;

	while (run != 0) {
		// Input a Value:
		cout << "Input: ";
		cin >> input;
		if (input == 0) {
			cout << "That is not a valid input!" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		// Error Handling - Check #1:
		// Check to see if dataType is correct
		if (!cin) {
			cout << input << "That is not a valid input!" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		// Error Handling - Check #2:
		// If dataType is correct, Check to see if Menu Parameters, If NOT
		// then...
		else if (!((input >= 0) && (input <= 4))) {
			cout << "That is not a valid input!" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			if (input >= 1 && input <= 4) {
				run = 0;
			}
		}
	}//End While Loop


	 // If dataType is correct and an actual Menu Parameters have been
	 // entered then ...:
	if (input == 1) {
		return 1; // set_intersection_menu();
	}
	else if (input == 2) {
		return 2; //set_difference_menu();
	}
	else if (input == 3) {
		return 3; //difference_equality_checker_menu();
	}
	else if (input == 4) {
		// Give another function the power to end the program:
		return 4; // return_( run );
	}
	else {
		return -1;
	}
}
//------------------------------------------------------------
// SET OPERATIONS - MENU & OPERATION - CARDINALITY
//------------------------------------------------------------
void cardinality(int& cardinalityVal) {
	cardinalityVal++;
}

//------------------------------------------------------------
// SET OPERATIONS - MENU & OPERATION - INTERSECTION
//------------------------------------------------------------
int set_intersection_menu() {

	// Variable Declerations:
	bool quit = 0; // 0==keeps menu function running, 1==stops menu function
	char input_1, input_2;
	string output_buffer;

	int cardinality_counter = 0;

	// Menu Screen Begins:
	cout << endl << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << "                  INTERSECTION MENU                     |" << endl;
	cout << "                  -----------------                     |" << endl;
	cout << " Options:   A= Set A  |  B= Set B  |  U= Universal Set  |" << endl;
	cout << "            0= Go Back to main menu                     |" << endl
		<< "                                                        |" << endl;
	cout << " 1) Input a letter for your First  Set                  |" << endl;
	cout << " 2) Input a letter for your Second Set                  |" << endl;
	cout << "---------------------------------------------------------" << endl << endl;

	while (quit == 0) {
		// Input a Value:
		cout << "First  Set: ";
		cin >> input_1;

		// Error Handling - Check #1:
		// Check to see if dataType is correct
		if (!cin) {
			cout << input_1 << " is not a valid input!" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		// Error Handling - Check #2:
		// If dataType is correct, Check to see if Menu Parameters, If NOT then...
		else if (!(input_1 == 'A') && !(input_1 == 'B') && !(input_1 == 'U') && !(input_1 == '0')) {
			cout << input_1 << " is not a valid input!" << endl;
		}
		else if (input_1 == '0') {
			return 0;
		}

		//////////////////////////////////////////////////////
		// For   'Input_1', if its dataType is correct and an actual Menu Parameters have been entered then
		// Allow 'Input_2' to be inputted in:
		else {
			cout << "Second Set: ";
			cin >> input_2;

			// Error Handling - Check #1:
			// Check to see if dataType is correct
			if (!cin) {
				cout << input_2 << " is not a valid input!" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			// Error Handling - Check #2:
			// If dataType is correct, Check to see if Menu Parameters, If NOT
			// then...
			else if (!(input_2 == 'A') && !(input_2 == 'B') && !(input_2 == 'U') && !(input_2 == '0')) {
				cout << input_1 << " is not a valid input!" << endl;
			}
			else if (input_2 == '0') {
				return 0;
			}
			else {
				//Makes Sure files Begin reading from the very beginning (Reset) :
				set_U.clear();
				set_U.seekg(0, std::ios::beg);

				set_A.clear();
				set_A.seekg(0, std::ios::beg);

				set_B.clear();
				set_B.seekg(0, std::ios::beg);

				////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Now, After recieving BOTH User input Values then run
				// Find the Intersection of the sets:
				cout << endl;

				if (((input_1 == 'A') && (input_2 == 'B')) || ((input_1 == 'B') && (input_2 == 'A'))) {
					cout << "(Set 1  n  Set 2):" << endl;
					cout << "--------------------" << endl;
					intersection(set_A, set_B, 'B');// Perform Operation

					cin.clear();
					return 0;                       // Return Back to the main
													// menu
				}
				else if (((input_1 == 'A') && (input_2 == 'U')) || ((input_1 == 'U') && (input_2 == 'A'))) {
					cout << "(Set 1  n  Set 2):" << endl;
					cout << "--------------------" << endl;
					intersection(set_A, set_U, 'U');// Perform Operation

					cin.clear();
					return 0;                       // Return Back to the main
													// menu
				}
				else if (((input_1 == 'B') && (input_2 == 'U')) || ((input_1 == 'U') && (input_2 == 'B'))) {
					cout << "(Set 1  n  Set 2):" << endl;
					cout << "--------------------" << endl;
					intersection(set_B, set_U, 'U');// Perform Operation

					cin.clear();
					return 0;                       // Return Back to the main
													// menu
				}
				else if (((input_1 == 'A') && (input_2 == 'A'))) {
					cout << "(Set 1  n  Set 2):" << endl;
					cout << "--------------------" << endl;
					cout << "{" << " ";

					while (set_A >> output_buffer) {// Perform Operation
													// Count the number of values found in the intersection
													// Operation:

						cardinality(cardinality_counter);

						//Print the intersecting elements:
						cout << output_buffer << " ";
					}
					cout << "}";
					cout << endl << endl;
					cout << "(Set 1  n  Set 2) Cardinality:" << endl;
					cout << "------------------------------" << endl;
					cout << cardinality_counter << endl;
					cout << endl << endl;

					cin.clear();
					return 0;                       // Return Back to the main
													// menu
				}

				else if (((input_1 == 'B') && (input_2 == 'B'))) {
					cout << "(Set 1  n  Set 2):" << endl;
					cout << "--------------------" << endl;
					cout << "{" << " ";

					while (set_B >> output_buffer) {// Perform Operation
													// Count the number of values found in the intersection
													// Operation:
						cardinality(cardinality_counter);

						//Print the intersecting elements:
						cout << output_buffer << " ";
					}

					cout << "}";
					cout << endl << endl;
					cout << "(Set 1  n  Set 2) Cardinality:" << endl;
					cout << "------------------------------" << endl;
					cout << cardinality_counter << endl;
					cout << endl << endl;

					cin.clear();
					return 0;                       // Return Back to the main
													// menu
				}

				else if (((input_1 == 'U') && (input_2 == 'U'))) {
					cout << "(Set 1  n  Set 2):" << endl;
					cout << "--------------------" << endl;
					cout << "{" << " ";

					while (set_U >> output_buffer) {
						// Count the number of values found in the intersection
						// Operation:
						cardinality(cardinality_counter);

						//Print the intersecting elements:
						cout << output_buffer << " ";
					}

					cout << "}";
					cout << endl << endl;
					cout << "(Set 1  n  Set 2) Cardinality:" << endl;
					cout << "------------------------------" << endl;
					cout << cardinality_counter << endl;
					cout << endl << endl;

					cin.clear();
					return 0;                       // Return Back to the main
													// menu
				}
			}
		}
	}
	return 1;
}
void intersection(fstream& set_1, fstream& set_2, char set_to_check_letter) {

	// Variable Declerations:
	string buffer_1, buffer_2;
	int cardinality_counter = 0;

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "{" << " ";

	while (set_1 >> buffer_1) {
		// Append elements in Set 1 that intersect with Set 2 into output file:
		while (set_2 >> buffer_2) {
			if (buffer_1 == buffer_2) {
				// Count the number of values found in the intersection Operation:
				cardinality(cardinality_counter);

				//Print the intersecting elements:
				cout << buffer_2 << " ";
			}
		}
		//RESET Set_2 for Checking w/ the next Set_1 element:
		if (set_to_check_letter == 'U') {
			//Makes Sure files Begin reading from the very beginning:
			set_U.clear(); // clear bad state after eof
			set_U.seekg(0);
		}
		if (set_to_check_letter == 'B') {
			set_B.clear(); // clear bad state after eof
			set_B.seekg(0);
		}
	}

	cout << "}";
	cout << endl << endl;
	cout << "(Set 1  n  Set 2) Cardinality:" << endl;
	cout << "------------------------------" << endl;
	cout << cardinality_counter << endl;
	cout << endl << endl;
}

//------------------------------------------------------------
// SET OPERATIONS - MENU & OPERATION - DIFFERENCE MENU
//------------------------------------------------------------
int set_difference_menu() {

	// Variable Declerations:
	int count = 0; // keeps count of whether or not menu criteria has been met
	char input_1, input_2;
	string output_buffer;
	int cardinality_counterVal = 0;
	vector<string> diff_container;
	vector<string>::iterator index; //counter for 'diff_container' vector

									// Menu Screen Begins:
	cout << endl << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << "                    DIFFERENCE MENU                     |" << endl;
	cout << "                    ---------------                     |" << endl;
	cout << " Options:   A= Set A  |  B= Set B  |  U= Universal Set  |" << endl;
	cout << "            0= Go Back to main menu                     |" << endl
		<< "                                                        |" << endl;
	cout << " 1) Input a letter for your First  Set                  |" << endl;
	cout << " 2) Input a letter for your Second Set                  |" << endl;
	cout << "---------------------------------------------------------" << endl << endl;

	while (count != 1) {
		// Input a Value:
		cout << "First  Set: ";
		cin >> input_1;

		// Error Handling - Check #1:
		// Check to see if dataType is correct
		if (!cin) {
			cout << input_1 << " is not a valid input!" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		// Error Handling - Check #2:
		// If dataType is correct, Check to see if Menu Parameters, If NOT
		// then...
		else if (!(input_1 == 'A') && !(input_1 == 'B') && !(input_1 == 'U') && !(input_1 == '0')) {
			cout << input_1 << " is not a valid input!" << endl;
		}
		else if (input_1 == '0') {
			return 0;
		}
		//////////////////////////////////////////////////////
		// For   'Input_1', if its dataType is correct and an actual Menu
		// Parameters have been entered then
		// Allow 'Input_2' to be inputted in:
		else {
			cout << "Second Set: ";
			cin >> input_2;

			// Error Handling - Check #1:
			// Check to see if dataType is correct
			if (!cin) {
				cout << input_2 << " is not a valid input!" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			// Error Handling - Check #2:
			// If dataType is correct, Check to see if Menu Parameters, If NOT
			// then...
			else if (!(input_2 == 'A') && !(input_2 == 'B') && !(input_2 == 'U') && !(input_2 == '0')) {
				cout << input_1 << " is not a valid input!" << endl;
			}
			else if (input_2 == '0') {
				return 0;
			}
			else {
				//Reset Counter:
				cardinality_counterVal = 0;

				// Reset File lineptr.
				// Make Sure the file begins reading from the very beginning (Reset):
				set_U.clear();
				set_U.seekg(0, std::ios::beg);

				set_A.clear();
				set_A.seekg(0, std::ios::beg);

				set_B.clear();
				set_B.seekg(0, std::ios::beg);

				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Now, After recieving BOTH User input Values then run
				// Find the Intersection of the sets:
				cout << endl;

				if (((input_1 == 'A') && (input_2 == 'B'))) {
					difference(set_A, set_B, 'B', diff_container, cardinality_counterVal);// Perform Operation
					count++;
				}
				else if (((input_1 == 'B') && (input_2 == 'A'))) {
					difference(set_B, set_A, 'A', diff_container, cardinality_counterVal);// Perform Operation
					count++;
				}
				else if (((input_1 == 'A') && (input_2 == 'U'))) {
					difference(set_A, set_U, 'U', diff_container, cardinality_counterVal);// Perform Operation
					count++;
				}
				else if (((input_1 == 'U') && (input_2 == 'A'))) {
					difference(set_U, set_A, 'A', diff_container, cardinality_counterVal);// Perform Operation
					count++;
				}
				else if (((input_1 == 'B') && (input_2 == 'U'))) {
					difference(set_B, set_U, 'U', diff_container, cardinality_counterVal);// Perform Operation
					count++;
				}
				else if (((input_1 == 'U') && (input_2 == 'B'))) {
					difference(set_U, set_B, 'B', diff_container, cardinality_counterVal);// Perform Operation
					count++;
				}
				else if (((input_1 == 'A') && (input_2 == 'A')) ||
					((input_1 == 'B') && (input_2 == 'B')) ||
					((input_1 == 'U') && (input_2 == 'U'))) {
					//Print the intersecting elements:
					cout << output_buffer << "{ }";
					cout << endl << endl;

					cout << "Cardinality:" << endl;
					cout << "------------" << endl;
					cout << cardinality_counterVal << endl;
					cout << endl << endl;

					return 0;
				}
			}
		}
	}
	//IF Count equals '2' THEN :
	cout << "{" << " ";

	// output Values in vector until it reaches it's end:
	for (index = diff_container.begin(); index != diff_container.end(); ++index) {
		cout << *index << " ";
	}
	cout << "}";
	cout << endl << endl;
	cout << "Cardinality:" << endl;
	cout << "------------" << endl;
	cout << cardinality_counterVal << endl;
	cout << endl << endl;

	// And Return back to main menu:
	return 0;
}
//-----------------------------------------------------------------
// SET OPERATIONS - MENU & OPERATION - DIFFERENCE CHECKER MENU
//-----------------------------------------------------------------
int difference_equality_checker_menu() {

	// Variable Declerations:
	int count = 0; // keeps count of whether or not menu criteria has been met
	char input_1, input_2;
	string output_buffer;
	int temp_cardinality_counterVal = 0, cardinality_counterVal_1 = 0, cardinality_counterVal_2 = 0;
	vector<string> temp_diff_container, diff_set1, diff_set2; // set containers

															  // Menu Screen Begins:
	cout << endl << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << "                 IS_DIFFERENCE_SAME MENU                |" << endl;
	cout << "                 -----------------------                |" << endl;
	cout << " Options:   A= Set A  |  B= Set B  |  U= Universal Set  |" << endl;
	cout << "            0= Go Back to main menu                     |" << endl
		<< "   FORM (A - B) & (B - A)                               |" << endl;
	cout << " 1) Input a letter for your First  Set                  |" << endl;
	cout << " 2) Input a letter for your Second Set                  |" << endl;
	cout << "---------------------------------------------------------" << endl << endl;

	while (count != 2) {
		// Input a Value:
		cout << "First  Set: ";
		cin >> input_1;

		// Error Handling - Check #1:
		// Check to see if dataType is correct
		if (!cin) {
			cout << input_1 << " is not a valid input!" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		// Error Handling - Check #2:
		// If dataType is correct, Check to see if Menu Parameters, If NOT
		// then...
		else if (!(input_1 == 'A') && !(input_1 == 'B') && !(input_1 == 'U') && !(input_1 == '0')) {
			cout << input_1 << " is not a valid input!" << endl;
		}
		else if (input_1 == '0') {
			return 0;
		}
		//////////////////////////////////////////////////////
		// For   'Input_1', if its dataType is correct and an actual Menu
		// Parameters have been entered then
		// Allow 'Input_2' to be inputted in:
		else {
			cout << "Second Set: ";
			cin >> input_2;

			// Error Handling - Check #1:
			// Check to see if dataType is correct
			if (!cin) {
				cout << input_2 << " is not a valid input!" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}

			// Error Handling - Check #2:
			// If dataType is correct, Check to see if Menu Parameters, If NOT
			// then...
			else if (!(input_2 == 'A') && !(input_2 == 'B') && !(input_2 == 'U') && !(input_2 == '0')) {
				cout << input_1 << " is not a valid input!" << endl;
			}
			else if (input_2 == '0') {
				return 0;
			}
			else {
				//Reset Counter:
				temp_cardinality_counterVal = 0;

				// Reset File lineptr.
				// Make Sure the file begins reading from the very beginning (Reset):
				set_U.clear();
				set_U.seekg(0, std::ios::beg);

				set_A.clear();
				set_A.seekg(0, std::ios::beg);

				set_B.clear();
				set_B.seekg(0, std::ios::beg);

				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Now, After recieving BOTH User input Values then run
				// Find the Intersection of the sets:
				cout << endl;
				if (((input_1 == 'A') && (input_2 == 'B'))) {
					difference(set_A, set_B, 'B', temp_diff_container, temp_cardinality_counterVal);// Perform Operation
					count++;
				}
				else if (((input_1 == 'B') && (input_2 == 'A'))) {
					difference(set_B, set_A, 'A', temp_diff_container, temp_cardinality_counterVal);// Perform Operation
					count++;
				}
				else if (((input_1 == 'A') && (input_2 == 'U'))) {
					difference(set_A, set_U, 'U', temp_diff_container, temp_cardinality_counterVal);// Perform Operation
					count++;
				}
				else if (((input_1 == 'U') && (input_2 == 'A'))) {
					difference(set_U, set_A, 'A', temp_diff_container, temp_cardinality_counterVal);// Perform Operation
					count++;
				}
				else if (((input_1 == 'B') && (input_2 == 'U'))) {
					difference(set_B, set_U, 'U', temp_diff_container, temp_cardinality_counterVal);// Perform Operation
					count++;
				}
				else if (((input_1 == 'U') && (input_2 == 'B'))) {
					difference(set_U, set_B, 'B', temp_diff_container, temp_cardinality_counterVal);// Perform Operation
					count++;
				}
				else if (((input_1 == 'A') && (input_2 == 'A')) ||
					((input_1 == 'B') && (input_2 == 'B')) ||
					((input_1 == 'U') && (input_2 == 'U'))) {

					//Print the intersecting elements:
					cout << output_buffer << "{ }";

					cout << endl << endl;
					cout << "Cardinality:" << endl;
					cout << "------------" << endl;
					cout << temp_cardinality_counterVal << endl;
					cout << endl << endl;

					return 0;
				}
			}
		}

		if (count == 1) {
			// pass elements of  'temp_diff_container'  to  'diff_set 1':
			diff_set1 = temp_diff_container;
			cardinality_counterVal_1 = temp_cardinality_counterVal;

			// Then clear 'temp_diff_container' for re-use:
			temp_diff_container.clear();
		}
		else if (count == 2) {
			// pass elements of  'temp_diff_container'  to  'diff_set 2':
			diff_set2 = temp_diff_container;
			cardinality_counterVal_2 = temp_cardinality_counterVal;
		}
	}
	//IF Count equals '2' THEN :
	is_differene_same(diff_set1, diff_set2);

	cout << endl << endl;
	cout << "Cardinality:" << endl;
	cout << "------------" << endl;
	cout << "Set 1: " << cardinality_counterVal_1 << endl;
	cout << "Set 2: " << cardinality_counterVal_2 << endl;
	cout << endl << endl;

	// And Return back to main menu:
	cin.clear();
	return 0;
}

//------------------------------------------------------------
// SET OPERATIONS - MENU & OPERATION - DIFFERENCE OPERATIONS
//------------------------------------------------------------
void difference(fstream& set_1, fstream& set_2, char set_to_check_letter_1, vector<string>& diff_temp_container, int& cardinality_counter) {

	// Variable Declerations:
	string buffer_1, buffer_2;
	bool difference_Found = 0;  // 1 = Difference found,
								// 0 = No difference found

								///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	while (set_1 >> buffer_1) {
		// Check the elements in Set 1 that ARE THE SAME with the elements in
		// Set 2:
		while ((set_2 >> buffer_2) && (difference_Found == 0)) {

			// IF no differences are Found keep running the while-loop until the
			// end, Else, stop the while-loop if a Difference has been found:

			if (buffer_1 == buffer_2) {
				// The element ins Set 1 is
				// NOT the same as the element in Set 2:
				difference_Found = 1;
			}
		}

		// IF you ran checked element 1 with all elements in set 2 and its
		// NOT the same with any of them then account for it:
		if (difference_Found == 0) {
			// Count the number of elements that are NOT found in Set 2:
			cardinality(cardinality_counter);

			//Print the element that was ONLY found in Set 1 (and NOT Set 2):
			diff_temp_container.push_back(buffer_1);
		}
		else {
			// Reset If 'difference_Found' returns a '1' value:
			difference_Found = 0;
		}

		//RESET Set_2 for Checking w/ the next Set_1 element:
		if (set_to_check_letter_1 == 'U') {
			//Makes Sure files Begin reading from the very beginning:
			set_U.clear(); // clear bad state after eof
			set_U.seekg(0);
		}
		if (set_to_check_letter_1 == 'B') {
			set_B.clear(); // clear bad state after eof
			set_B.seekg(0);
		}
		if (set_to_check_letter_1 == 'A') {
			set_A.clear(); // clear bad state after eof
			set_A.seekg(0);
		}
	}
}
void is_differene_same(vector<string> diff_set_container_1, vector<string> diff_set_container_2) {

	// Sort elements in vector so tht they can be compared:
	sort(diff_set_container_1.begin(), diff_set_container_1.end());
	sort(diff_set_container_2.begin(), diff_set_container_2.end());

	//Output:
	cout << "Is  (Set 1  -  Set 2) == (Set 2  -  Set 1) ? :" << endl;
	cout << "-----------------------------------------------" << endl;

	//Compare elements in both sets:
	if (diff_set_container_1 == diff_set_container_2) {
		// If Elements are all the same:
		cout << "TRUE" << endl;
	}
	else {
		// Else, If Elements are NOT all the same:
		cout << "FALSE" << endl;
	}
}