/*
NAME: IKECHUKWU AKUJOBI
CLASS: COSC 504
DATE: 04-22-2020
TOPIC: FINAL PROJECT

QUESTION

COSC 504
Spring 2020
Programming Project
Due May 5, 2020


In this project, you are to implement a studentList.  The studentList shows the students registered in different courses.
The studentList will only include the student’s first name, last name, ID, list of courses, credit hours for each course,
and the course grade.   You are to calculate the GPA for each student.
The GPA is calculated by multiplying the credit hours (which is given below for each course) by the grade value (A=4.0, B= 3.0, C=2.0, D=1.0, and F=0) for each course.
Then you calculate the sum of the GPA for all the courses and divide it by the total credits of all the courses.
A sample of student’s information is listed below.
You will save all the information below in an input file called “SeniorClass”.
You will read from the file to perform the operations listed below.
First Name || Last Name || ID ||  Course Name ||  Credits ||  Grade
James Smith    32145 Math411 3 A
					 Engl422 3 B
					 Phys355 4 A
					 Cosc361 4 B
Amanda George  31109 Math411 3 B
					 Chem344 4 B
					 Cosc361 4 B
					 Eng4l22 3 C
Lucy Williams  36749 Psyc388 3 C
					 Fren421 3 D
					 Hist410 3 C
					 Engl422 3 B
					 Anat390 3 B
Adam Howard	   31546 Chem344 4 B
					 Math411 3 A
				 	 Hist410 3 C
					 Engl422 3 B
					 Phil477 3 C
George Brown   31220 Musc444 4 A
					 Arts305 4 A
					 Engl422 3 B
					 Hist410 3 B
Willy Gates	   30543 Engl419 4 A
					 Mrkt478 3 A
					 Econ366 3 B
					 Mrkt311 4 C
Ashley James  31321 Chem344 4 C
					Math411 3 A
					Hist410 3 B
					Engl422 3 D
					Phil477 3 C
Dan Edwards	  34476 Math411 3 B
					Engl422 3 C
					Phys355 4 D
					Cosc361 4 C
David Sammy	  35109 Psyc388 3 D
					Coun421 3 B
					Hist410 3 C
					Engl422 3 B
					Anat390 3 B
Racheal John  38850 Musc444 4 B
					Arts305  4 B
					Engl422 3 C
					Hist410 3 A
Brandon  Jackson 35561	Chem344 4 C
						Math411 3 C
						Hist410 3 C
						Engl422 3 D
						Phil477 3 B
Dina  Lowe	36741   Psyc388 3 A
					Coun421 3 D
					Hist410 3 B
					Engl422 3 D
					Anat390 3 C
Brad  Green 30179   Engl419 4 C
					Mrkt478 3 B
					Econ366 3 A
					Mrkt311 4 B
Kevin  Day	37409   Math411 3 A
					Chem344 4 A
					Cosc361 4 A
					Engl422 3 A
Katty Hill	39137   Math411 3 B
					Engl422 3 B
					Phys355 4 C
					Cosc361 4 B
Philips Bush 32210  Chem344 4 B
					Math411 3 A
					Hist410 3 A
					Engl422 3 B
					Phil477 3 A
Hellen  Edwards	38889   Psyc388  3 C
						Coun421  3 A
						Hist410  3 A
						Engl422  3 C
						Anat390  3 D
Heidi   Abraham  37701	Psyc388  3 B
						Fren421  3 A
						Hist410  3 B
						Anat390  3 A
Brandon  Lowe   34402   Engl419  4 A
						Mrkt478  3 C
						Econ366  3 A
						Mrkt311  4 A
Tiffany  Green	36667   Chem344  4 A
						Math411  3 A
						Hist410  3 A
						Engl422  3 A
						Phil477  3 A
Edward   Smith	36560	Chem344 4 A
						Math411 3 A
						Hist410 3 A
						Engl422 3 A
						Phil477 3 B

Display a Menu, so the user would be able to select any of the following operations:
CreateClassList
InsertNewStudent
addCourse
deleteStudent
deleteCourse
GPAfinder
Sort (Based on Last name, First name, GPA)
Search
Update
honorStudents
WarnStudents
failStudents
Print
modify
Quit
Your program should include all the following functions:
CreateClassList:  Reads the student’s information from the input file and place all student’s names along with their information in a linked list, in alphabetically order, by last name.  Call the print function after you create the list.
InsertNewStudent:  Will insert a new student into the class, along with all  the student’s information as: first name, last name, ID, course name, credits, and grade, in the proper location in the list sorted alphabetically by last name.  After insertion, you should show the count of the class.  Then print the list after you insert.
addCourse:  You should be able to add a new course given the student’s name or ID, make sure to do all the necessary updates once you add a course.
deleteStudent:  You should be able to delete the student’s record, once you enter student’s first name followed by last name, or by using the student’s ID.  If the student is not registered in the class, a message should appear indicating that the student is not registered.  Show the count of the class after deleting.  Then print the list after you delete. If any students have same first name and same last name, then you will have to delete by ID.
deleteCourse: You should be able to delete any of the courses a student is registered in.  To do so, you will have to ask for the student’s name or ID, and the course that needs to be deleted.  Make sure to do all necessary updates after the deletion.
GPAfinder: Calculates the GPA for any student by multiplying the credit hours (which is given below for each course) by the grade value (A=4.0, B= 3.0, C=2.0, D=1.0, and F=0) for each course.  Then you calculate the sum of the GPA for all the courses and divide it by the total credits of all the courses.

Sort:  You should be able to sort the list by first name, GPA, and ID.  You could use any sorting algorithm.  Then print the list after you sort.  You should ask the user how you want to sort, either by first name, or  GPA, or  ID.  When you print, you will have to use a different print function than the one described below, because the one below prints the names sorted alphabetically by last name.
Search:  By giving the student ID, you should be able to search for that student in the list.  You should return the student’s first name, last name, ID, GPA,  and the courses registered.  If the student is not found in the list, you should print a message indicating so.
modify:  You should be able to modify the student’s grade .  So you should be able to ask the user for the student’s name or ID, then ask what course grade needs to be modified.  You should show update the student’s information and print the updated student’s information.
honorStudent:  Prints the number of students and names of  students whose GPA is greater than 3.6.
WarnStudent:  Prints the number of students and the names of the students whose GPA is less than 2.5.
failStudent:  Prints the names of students whose GPA is less than 2.0
Print: Prints all the students information alphabetically, sorted by last name, and the total number of students in the class.



*/


#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<cstdlib>

using namespace std;

//Input Stream
ifstream infile;

//Node Prototype
struct nodeType
{
	//variable declarations
	string firstName;  //first name
	string lastName;   //last name
	int ID;            //student ID
	string courseName; //course name
	int no_of_credits; //credit hours
	char courseGrade;  //course grade
	double GPA;        //GPA
	
	nodeType* link;    //pointer

};
//array of struct
nodeType* studentList[100];


//Function Prototypes
string menu();  //Prompts the menu screen


//option 1
void createClassList();  //Reads the student’s information from the input file and place all student’s names along with their information in a linked list
void sortByLastName();   //Sorts the list by first name, GPA, and ID

//option 2
void InsertNewStudent();  //Inserts a new student into the class
void insert(nodeType* &head);  //Helper function to insert a course

//option 3
void addCourse(string firstName, string lastName);  //Adds a new course given the student’s name or ID
void insert_at_endofSLL(nodeType* &head);   //Helps the addCourse function to add the new student to the end of the list

//option 4
void deleteStudent();   //function to delete a student from the list

//option 5
void deleteCourse();   //function to delete a course for a particular student
void deleteNode(nodeType* &head);     //Helper function to delete a course
void search_by_ID(int ID);      //helper function to search the list by ID
void search_by_name(string firstName, string lastName);      //helper function to search the list by name

//option 6
void printGPA();   //function to print the GPA

//option 7
void sort();    //function to sort the list by ID, first name and GPA

//option 8
void GPAfinder();   //function to get the GPA of the students
void GPA_calculator(nodeType* &head);    //helper function calculates the GPA of the students
void search();

//option 9
void modifyByCourse(nodeType* &head);   //function to modify the course grade of a student
void modify_grade();   //function to search the list by ID or name

//option 10
void honorStudent();    //Prints the students on the honor list

//option 11
void warnStudent();   //function to warn failing students

//option 12
void failStudent();   //function to show the failing students

//option 13
void print();      //Prints all the students information alphabetically, sorted by last name, and the total number of students in the class.



int main()
{
	//variable declaration
	nodeType* head = NULL;
	int i;
	string option;
	

	infile.open("SeniorClass.txt");

	//to traverse the list
	for (i = 0; i < 100; i++)
	{
		studentList[i] = NULL;
	}
	//print the menu screen
	option = menu();

	//prompt user to select an option
	while (option != "14")
	{
		if (option == "1" || 
			option == "2" || 
			option == "3" || 
			option == "4" || 
			option == "5" || 
			option == "6" || 
			option == "7" || 
			option == "8" || 
			option == "9" || 
			option == "10" || 
			option == "11" || 
			option == "12" || 
			option == "13")
		{

			//Option 1
			if (option == "1")
			{
				system("cls");
				cout << "***********************************************************************************" << endl;
				cout << "LIST OF STUDENTS BY LAST NAME" << endl;
				cout << "***********************************************************************************" << endl;

				//prints the list of students in alphabetical order (last name)
				//CREATES THE CLASS LIST
				createClassList();
				sortByLastName();
				GPAfinder();
				printGPA();
				//print();
				cout << endl;
				
			}

			//option 2
			else if (option == "2")
			{
				cout << "***********************************************************************************" << endl;
				cout << "ADD A STUDENT TO THE LIST " << endl;
				cout << "***********************************************************************************" << endl;
				//OPTION TO INSERT THE NEW STUDENT INTO THE LIST AND SORTS BY LAST NAME
				InsertNewStudent();
				sortByLastName();
				GPAfinder();
				printGPA();
				//print();  //PRINT THE RESULT
				cout << endl;

			}

			else if (option == "3")
			{
				system("cls");
				//OPTION TO ADD A COURSE TO A PARTICULAR STUDENT'S COURSE LIST BY SEARCHING FOR THE STUDENT BY NAME 
				string firstName, lastName;
				cout << endl;
				cout << "***********************************************************************************" << endl;
				cout << "ADD COURSE(S) FOR A PARTICULAR STUDENT" << endl;
				cout << "***********************************************************************************" << endl;
				cout << "First Name: ";
				cin >> firstName;
				cout << "Last Name: ";
				cin >> lastName;
				addCourse(firstName, lastName);
				sortByLastName();
				GPAfinder();
				printGPA();
				//print();  //PRINT THE RESULT

			}
			else if (option == "4")
			{
				system("cls");
				//option to delete a particular student from the list
				cout << endl;
				cout << "***********************************************************************************" << endl;
				cout << "DELETE STUDENT FROM THE LIST" << endl;
				cout << "***********************************************************************************" << endl;
				print();
				deleteStudent();   //CALL THE DELETE FUNCTION
				sortByLastName();
				print();
				cout << endl;
			}
			else if (option == "5")
			{
				system("cls");
				//OPTION TO DELETE A PARTICULAR COURSE FOR A SPECIFIC STUDENT
				cout << endl;
				cout << "***********************************************************************************" << endl;
				cout << "DELETE A COURSE FOR SPECIFIC STUDENT" << endl;
				cout << "***********************************************************************************" << endl;
				//CALL THE FUNCTIONS
				GPAfinder();
				deleteCourse();
				sortByLastName();
				cout << endl;

			}
			else if (option == "6")
			{
				system("cls");
				//OPTION TO PRINT THE GPA OF THE STUDENTS
				cout << endl;
				cout << "***********************************************************************************" << endl;
				cout << "CLASS GPA FOR EACH STUDENT" << endl;
				cout << "***********************************************************************************" << endl;
				GPAfinder();
				sortByLastName();
				printGPA();
				cout << endl;


			}
			else if (option == "7")
			{
				system("cls");
				//OPTION TO SORT THE LIST BY GPA, ID OR NAME
				cout << endl;
				cout << "***********************************************************************************" << endl;
				cout << "SORT CLASS BY GPA OR ID OR NAME" << endl;
				cout << "***********************************************************************************" << endl;
				GPAfinder();
				sort();
				printGPA();
				cout << endl;
			}

			else if (option == "8")
			{
				system("cls");
				//OPTION TO SEARCH THE LIST FOR A STUDENT
				cout << endl;
				cout << "***********************************************************************************" << endl;
				cout << "SEARCH LIST FOR A PARTICULAR STUDENT" << endl;
				cout << "***********************************************************************************" << endl;
				GPAfinder();
				search();
				sortByLastName();
				cout << endl;
			}
			else if (option == "9")
			{
				system("cls");
				//OPTION TO MODIFY THE GRADE OF A PARTICULAR STUDENT
				cout << "***********************************************************************************" << endl;
				cout << "MODIFY GRADE FOR A PARTICULAR STUDENT" << endl;
				cout << "***********************************************************************************" << endl;
				modify_grade();
				cout << endl;
			}

			else if (option == "10")
			{
				system("cls");
				//OPTION TO PRINT THE LIST OF HONOR STUDENTS
				cout << "***********************************************************************************" << endl;
				cout << "LIST OF HONOR STUDENTS" << endl;
				cout << "***********************************************************************************" << endl;
				honorStudent();
				cout << endl;
			}
			else if (option == "11")
			{
				system("cls");
				//OPTION TO PRINT THE LIST OF STUDENTS TO BE WARNED
				cout << "***********************************************************************************" << endl;
				cout << "LIST OF WARN STUDENTS" << endl;
				cout << "***********************************************************************************" << endl;
				warnStudent();
				cout << endl;
			}

			else if (option == "12")
			{
				system("cls");
				//OPTION TO PRINT THE LIST OF FAILING STUDENTS
				cout << "***********************************************************************************" << endl;
				cout << "LIST OF FAILING STUDENTS" << endl;
				cout << "***********************************************************************************" << endl;
				failStudent();
				cout << endl;
				
			}
			else if (option == "13")
			{
				system("cls");
				//OPTION TO PRINT THE LIST OF STUDENTS BY LAST NAME (SAME AS OPTION 1)
				cout << "***********************************************************************************" << endl;
				cout << "LIST OF STUDENTS BY LAST NAME" << endl;
				cout << "***********************************************************************************" << endl;
				print();
				cout << endl;
			}
			option = menu();
			cout << endl;
		}
		else
		{
			//PRINT IF THE USER ENTERS AN INVALID ENTRY
			cout << "INVALID ENTRY!!! SELECT ONE OF THE OPTIONS PROVIDED" << endl << endl;
			cout << "***********************************************************************************" << endl;
			option = menu();
			cout << endl;
		}

	}//END OF WHILE-LOOP
	
	//PAUSE THE SYSTEM
	system("pause");
	return 0;

}


//*************************FUNCTIONS CREATED*************************************//

//Prompts the Menu Screen
string menu()
{
	//variable declaration
	string option;

	cout << "***********************************************************************************" << endl;
	cout << "\t\t\t" << "MENU LIST" << endl;
	cout << "***********************************************************************************" << endl << endl;
	cout << "1:  CREATE CLASS LIST" << endl;
	cout << "2:  INSERT NEW STUDENT" << endl;
	cout << "3:  ADD COURSE" << endl;
	cout << "4:  DELETE STUDENT" << endl;
	cout << "5:  DELETE COURSE" << endl;
	cout << "6:  FIND GPA" << endl;
	cout << "7:  SORT" << endl;
	cout << "8:  SEARCH" << endl;
	cout << "9:  MODIFY" << endl;
	cout << "10: HONOR STUDENT" << endl;
	cout << "11: WARN STUDENT" << endl;
	cout << "12: FAILING STUDENT" << endl;
	cout << "13: PRINT" << endl;
	cout << "14: QUIT" << endl << endl;
	cout << "SELECT ONE OF THE OPTIONS: ";
	cin >> option;
	cout << endl;
	return option;
	
}//end of menu

 


//******************************OPTION 1*********************************************


//Function Reads the student’s information from the input file and place all student’s names along with their information in a linked list, in alphabetically order, by last name. 
void createClassList()
{
	//variable declaration
	nodeType *node, *head, *prev = NULL;
	nodeType* newnode;
	string firstName;
	int i = 0;
	char character;

	infile >> firstName;

	//check if we are at the end of the file
	while (!infile.eof())
	{
		head = NULL;
		newnode = studentList[i];
		character = ' ';

		while (character != '\n' && character != infile.eof())
		{
			//if the list is empty, create a newnode and input the information
			if (newnode == NULL)
			{
				node = new nodeType;
				node->firstName = firstName;
				infile >> node->lastName;
				infile >> node->ID;
				node->link = NULL;
				newnode = node;
				head = newnode;
				prev = newnode;


			}
			//if not, create a new node and move to the next node
			else
			{
				node = new nodeType;
				infile >> node->courseName;
				infile >> node->no_of_credits;
				infile >> node->courseGrade;
				node->link = NULL;
				prev->link = node;
				prev = node;
			}

			character = infile.peek();
		}
		//Enter the data for the next node
		studentList[i] = head;
		infile >> firstName;
		i++;
	}
}//end of createClassList


//Sorts the list by name
//Bubble sort
void sortByLastName()
{
	//variable declaration
	nodeType *current;
	int i = 0;
	int j;
	int temp; //temporary holder
	while (studentList[i] != NULL)
	{
		temp = i;
		j = i + 1;
		while (studentList[j] != NULL)
		{
			if (studentList[j]->lastName < studentList[temp]->lastName)
				temp = j;
			j++;
		}
		current = studentList[i];
		studentList[i] = studentList[temp];
		studentList[temp] = current;

		i++;
	}
}



//******************************OPTION 2*********************************************


//Function Inserts a new student into the class, along with all  the student’s information
void InsertNewStudent()
{
	nodeType *newnode = NULL;
	bool found = false;
	int i;
	int counter1 = 0;
	int counter2 = 0; 
	

	if (studentList[counter1] == NULL)
	{
		createClassList();
	}
	insert(newnode);

	while (studentList[counter2] != NULL)
	{
		counter2++;
	}
	studentList[counter2] = newnode;

}//end of InsertNewStudent



//Helper function to insert a course
void insert(nodeType *&head)
{
	//variable declaration
	nodeType *node, *ptr = NULL;
	int i;
	int num;

	cout << "Number of course(s) to insert: ";
	cin >> num;
	cout << endl;

	for (i = 0; i <= num; i++)
	{

		if (i == 0 && head == NULL)
		{
			//prompt user for name of student and ID
			node = new nodeType;
			cout << "First Name: ";
			cin >> node->firstName;
			cout << "Last Name: ";
			cin >> node->lastName;
			cout << "Student ID: ";
			cin >> node->ID;
			node->link = NULL;
			head = node;
			ptr = node;
			cout << endl;
		}
		else
		{
			//prompt user for course information
			node = new nodeType;
			cout << "Course Name: ";
			cin >> node->courseName;
			cout << "Credit Load: ";
			cin >> node->no_of_credits;
			cout << "Grade: ";
			cin >> node->courseGrade;
			node->link = NULL;
			ptr->link = node;
			ptr = node;
			cout << endl;
		}
	}

}//end of insert


//******************************OPTION 3*********************************************

//function to add a course for a student
void addCourse(string firstName, string lastName)
{
	//variable declaration
	int i = 0;
	bool found = false;
	nodeType *newnode;


	if (studentList[i] == NULL)
	{
		createClassList();
	}

	while (studentList[i] != NULL && !found)
	{
		if (studentList[i]->lastName == lastName&&studentList[i]->firstName == firstName)
		{
			newnode = studentList[i];
			insert_at_endofSLL(newnode);
			studentList[i] = newnode;
			found = true;
		}
		i++;
	}

	if (found == false)
	{
		cout << endl;
		cout << "****************************************************************************************" << endl;
		cout << "Last Name does not exist!!! Try again" << endl;
		cout << "****************************************************************************************" << endl;

	}

}//end of addCourse


 //helper function to the addCourse function to add the new student to the end of the list
void insert_at_endofSLL(nodeType*&head)
{
	nodeType*newnode;

	nodeType*node = new nodeType;
	cout << "Enter Course Name: ";
	cin >> node->courseName;
	cout << "Enter Credit Hour: ";
	cin >> node->no_of_credits;
	cout << "Enter Student Grade: ";
	cin >> node->courseGrade;
	node->link = NULL;


	if (head == NULL)
	{
		head = node;
	}
	else
	{
		newnode = head;
		while (newnode->link != NULL)
			newnode = newnode->link;
		newnode->link = node;
	}
	cout << endl;
}//end of insert_at_endofSLL



 //******************************OPTION 4*********************************************


//function to delete a student from the list
void deleteStudent()
{
	//variable declaration
	string firstName, lastName;
	int i = 0, counter = 0; 
	int ID;
	bool found = false;
	char cha;

	if (studentList[i] == NULL)
	{
		createClassList();
	}

	while (studentList[counter] != NULL)
	{
		counter++;
	}
	cout << "Number of Student Before Deletion: " << counter << endl;

	cout << endl << endl;;
	cout << "PICK AN OPTION" << endl;
	cout << "A: ID" << endl;
	cout << "B: Name" << endl << endl;
	cout << "OPTION: ";
	cin >> cha;
	cout << endl;

	while (cha != 'A' && cha != 'B')
	{
		cout << "Enter The Correct option: ";
		cin >> cha;
		cout << endl;
	}
	if (cha == 'A')
	{
		cout << "Enter student ID: ";
		cin >> ID;
		cout << endl;

		while (studentList[i] != NULL)
		{
			if (studentList[i]->ID == ID)
			{
				while (studentList[i + 1] != NULL)
				{
					studentList[i] = studentList[i + 1];
					i++;
				}
				found = true;
				studentList[i] = NULL;
				break;
			}
			i++;
		}
	}
	if (cha == 'B')
	{
		cout << "First Name: ";
		cin >> firstName;
		cout << "Last Name: ";
		cin >> lastName;
		cout << endl;

		while (studentList[i] != NULL && !found)
		{
			if (studentList[i]->lastName == lastName && studentList[i]->firstName == firstName)
			{
				while (studentList[i + 1] != NULL)
				{
					studentList[i] = studentList[i + 1];
					i++;
				}
				found = true;
				studentList[i] = NULL;
				break;
			}
			i++;
		}
	}

	if (found == false)
	{
		cout << endl;
		cout << "***********************************************************************************" << endl;
		cout << "Student is not in the class list" << endl;
		cout << "***********************************************************************************" << endl;

	}
	else
	{

		counter = 0;
		while (studentList[counter] != NULL)
		{
			counter++;
		}
			
		cout << "Number of Student After Deletion: " << counter << endl;
	}



}



 //******************************OPTION 5*********************************************

 //function to delete a course for a particular student
void deleteCourse()
{
	//variable declaration
	int i = 0, ID;
	bool found = false;
	nodeType*newnode;
	string firstName, lastName;
	char cha;

	if (studentList[i] == NULL)
	{
		createClassList();
	}
	
	//prompt user for input
	cout << "PICK AN OPTION" << endl;
	cout << "A: ID" << endl;
	cout << "B: Name" << endl << endl;
	cout << "OPTION: ";
	cin >> cha;
	cout << endl;

	while (cha != 'A' && cha != 'B')
	{
		cout << endl;
		cout << "Enter The Correct option: ";
		cin >> cha;
	}
	if (cha == 'A')
	{
		cout << endl;
		cout << "Enter student ID: ";
		cin >> ID;
		cout << endl;
		while (studentList[i] != NULL && !found)
		{
			if (studentList[i]->ID == ID)
			{
				cout << "Before: "; 
				search_by_ID(ID);
				nodeType *node = studentList[i];
				deleteNode(node);
				sortByLastName();
				GPAfinder();
				printGPA();
				studentList[i] = node;
				found = true;
			}
			i++;
		}
		
	}
	if (cha == 'B')
	{
		cout << "First Name: ";
		cin >> firstName;
		cout << "Last Name: ";
		cin >> lastName;
		cout << endl;
		while (studentList[i] != NULL && !found)
		{
			if (studentList[i]->lastName == lastName && studentList[i]->firstName == firstName)
			{
				cout << "Before: "; search_by_name(firstName, lastName);
				nodeType*node = studentList[i];
				deleteNode(node);
				sortByLastName();
				GPAfinder();
				printGPA();
				studentList[i] = node;
				found = true;
			}
			i++;
		}
		
	}
	if (found == false)
		cout << " Student IS NOT registered" << endl;
	//else if (found == true && cha == 'A')
		//search_by_ID(ID);
	//else
		//search_by_name(firstName, lastName);
	cout << endl << endl;

}//end of deleteCourse

//Helper function to delete a course
void deleteNode(nodeType*&head)
{
	bool found = false;
	string course;
	nodeType*ptr, *prev = NULL;

	ptr = head;
	cout << endl << "What course do you want to delete: ";
	cin >> course;
	cout << endl;

	if (ptr->courseName == course)
	{
		ptr = ptr->link;
		delete head;
		head = ptr;
		found = true;
	}
	else
	{
		prev = head->link;
		while (ptr->link != NULL && !found)
		{
			prev = ptr;
			ptr = ptr->link;
			if (ptr->courseName == course)
			{
				prev->link = ptr->link;
				delete ptr;
				found = true;
			}

		}
	}
	if (found == false)
		cout << "Class does not exist" << endl;

}//end of deleteNode


 //helper function to search the list by ID
void search_by_ID(int ID)
{
	//variable declaration
	int  i = 0;
	bool found = false;
	int counter = 0;

	while (studentList[i] != NULL && !found)
	{
		if (studentList[i]->ID == ID)
		{
			found = true;

			nodeType* newnode = studentList[i];
			while (newnode != NULL)
			{
				if (counter == 0)
				{
					//prints the name,ID and GPA
					cout << "Name (Last Name, first Name)" << endl;
					cout << newnode->lastName << ", ";
					cout << newnode->firstName << endl;
					cout << "ID: " << newnode->ID << endl;
					cout << setprecision(3) << "GPA: " << newnode->GPA << endl;

				}
				else
				{
					//prints the course, credit load and grade
					cout << newnode->courseName << "  " << "  ||  ";
					cout << newnode->no_of_credits << "  " << "  ||  ";
					cout << newnode->courseGrade << "  ";

				}
				cout << endl;
				//continue to traverse the list
				newnode = newnode->link;
				counter++;
			}

		}
		i++;
	}
	if (found == false)
		cout << "Student is not registered!!!" << endl;

}//end of search_by_ID


 //helper function to search the list by name
void search_by_name(string firstName, string lastName)
{
	//variable declaration
	int  i = 0;
	bool found = false;
	int counter = 0;

	while (studentList[i] != NULL && !found)
	{
		if (studentList[i]->lastName == lastName && studentList[i]->firstName == firstName)
		{
			found = true;

			nodeType*newnode = studentList[i];
			while (newnode != NULL)
			{
				if (counter == 0)
				{
					//prints the name,ID and GPA
					cout << "Name (Last Name, first Name)" << endl;
					cout << newnode->lastName << ", ";
					cout << newnode->firstName << endl;
					cout << "ID: " << newnode->ID << endl;
					cout << setprecision(3) << "GPA: " << newnode->GPA << endl;

				}
				else
				{
					//prints the course, credit load and grade
					cout << newnode->courseName << "  " << "  ||  ";
					cout << newnode->no_of_credits << "  " << "  ||  ";
					cout << newnode->courseGrade << "  ";
				}
				cout << endl;
				//continue to traverse the list
				newnode = newnode->link;
				counter++;
			}

		}
		i++;
	}
	if (found == false)
		cout << firstName << " " << lastName << " is not registered!!!!" << endl;

}//end of search_by_name



 //******************************OPTION 6*********************************************

//function to print the GPA
void printGPA()
{
	//variable declaration
	int i = 0;

	if (studentList[i] == NULL)
	{
		createClassList();
	}

	while (studentList[i] != NULL)
	{
		int c = 0;
		nodeType *newnode = studentList[i];
		while (newnode != NULL)
		{
			if (c == 0)
			{
				//print the name, ID and GPA
				cout << "Name (Last Name, first Name)" << endl;
				cout << newnode->lastName << ", ";
				cout << newnode->firstName << endl;
				cout << "ID: " << newnode->ID << endl;
				cout << setprecision(3) << "GPA: " << newnode->GPA << endl;
			}
			else
			{
				//print course, credit load and grade
				cout << newnode->courseName << "  " << "  ||  ";
				cout << newnode->no_of_credits << "  " << "  ||  ";
				cout << newnode->courseGrade << "  ";

			}
			cout << endl;
			//traverse
			newnode = newnode->link;
			c++;
		}
		cout << endl;
		cout << "*************************************" << endl;
		i++;
	}
	cout << endl << "TOTAL NUMBER OF STUDENTS: " << i << endl << endl;

	cout << "\t***THIS IS THE END OF THE LIST***" << endl << endl;

}//end of printGPA



 //******************************OPTION 7*********************************************

 //function to sort the list by ID, first name and GPA
 //Bubble sort
void sort()
{
	//variable declaration
	nodeType *current;
	int i = 0;
	int j;
	int temp;
	int ID;
	char cha;


	if (studentList[i] == NULL)
	{
		createClassList();
	}

	cout << "***********************************************************************************" << endl;
	cout << "SORT THE LIST BY: (PICK AN OPTION)" << endl;
	cout << "A: ID" << endl;
	cout << "B: First Name" << endl;
	cout << "C: GPA" << endl << endl;
	cout << "OPTION: ";
	cin >> cha;
	cout << endl;

	while (cha != 'A' && cha != 'B' && cha != 'C')
	{
		cout << "Enter The Correct Option: ";
		cin >> cha;
		cout << endl;
	}
	if (cha == 'A')
	{
		//sort by ID
		//bubble sort
		while (studentList[i] != NULL)
		{
			temp = i;
			j = i + 1;
			while (studentList[j] != NULL)
			{
				if (studentList[j]->ID < studentList[temp]->ID)
				{
					temp = j;
				}
				j++;
			}
			current = studentList[i];
			studentList[i] = studentList[temp];
			studentList[temp] = current;

			i++;
		}
	}
	else if (cha == 'B')
	{
		//sort by first name
		//bubble sort
		while (studentList[i] != NULL)
		{
			temp = i;
			j = i + 1;
			while (studentList[j] != NULL)
			{
				if (studentList[j]->firstName < studentList[temp]->firstName)
				{
					temp = j;
				}
				j++;
			}
			current = studentList[i];
			studentList[i] = studentList[temp];
			studentList[temp] = current;

			i++;
		}
	}
	if (cha == 'C')
	{
		//sort by GPA
		//bubble sort
		GPAfinder();
		while (studentList[i] != NULL)
		{
			temp = i;
			j = i + 1;
			while (studentList[j] != NULL)
			{
				if (studentList[j]->GPA < studentList[temp]->GPA)
					temp = j;
				j++;
			}
			current = studentList[i];
			studentList[i] = studentList[temp];
			studentList[temp] = current;

			i++;
		}
	}
}//end of sort




 //******************************OPTION 8*********************************************

//function to get the GPA of the students
void GPAfinder()
{
	//variable declaration
	int i = 0;
	nodeType *node;

	if (studentList[i] == NULL)
	{
		createClassList();
	}

	while (studentList[i] != NULL)
	{
		node = studentList[i];
		GPA_calculator(node);
		studentList[i] = node;
		i++;

	}


}//end of GPAfinder


//helper function calculates the GPA of the students
void GPA_calculator(nodeType *&head)
{
	double sum = 0.0, i = 0.0;
	nodeType *ptr = head->link;
	while (ptr != NULL)
	{
		if (ptr->courseGrade == 'A')
		{
			sum = sum + ptr->no_of_credits * 4;
		}
		else if (ptr->courseGrade == 'B')
		{
			sum = sum + ptr->no_of_credits * 3;
		}
		else if (ptr->courseGrade == 'C')
		{
			sum = sum + ptr->no_of_credits * 2;
		}
		else if (ptr->courseGrade == 'D')
		{
			sum = sum + ptr->no_of_credits * 1;
		}
		else
		{
			sum = sum + ptr->no_of_credits * 0;
		}
		i = i + ptr->no_of_credits;
		ptr = ptr->link;

	}
	head->GPA = sum / i;

}//end of GPA 


//function to search the list by ID or name
void search()
{
	//variable declaration
	int ID, i = 0;
	bool found = false;
	char cha;
	string firstName, lastName;

	if (studentList[i] == NULL)
	{
		createClassList();
	}
	cout << " PICK AN OPTION" << endl;
	cout << "A: ID" << endl;
	cout << "B: Name" << endl << endl;
	cout << "OPTION: ";
	cin >> cha;
	cout << endl;

	while (cha != 'A' && cha != 'B')
	{
		cout << "Enter The Correct option: ";
		cin >> cha;
		cout << endl;
	}
	if (cha == 'A')
	{
		cout << "Enter student ID: ";
		cin >> ID;
		search_by_ID(ID);
		cout << endl;
	}
	else if (cha == 'B')
	{
		
		cout << "First Name: ";
		cin >> firstName;
		cout << "Last Name: ";
		cin >> lastName;
		search_by_name(firstName, lastName);
		cout << endl;

	}


}//end of search



 //******************************OPTION 9*********************************************

 //function to modify the grade of the students
void modify_grade()
{
	//variable declaration
	int ID, i = 0;
	bool found = false;
	double k;
	char cha;

	if (studentList[i] == NULL)
	{
		createClassList();
	}
	cout << "***********************************************************************************" << endl;
	cout << "MODIFY THE LIST BY: (PICK AN OPTION)" << endl;
	cout << "A: ID" << endl;
	cout << "B: Name" << endl << endl;
	cout << "OPTION: ";
	cin >> cha;
	cout << endl;

	while (cha != 'A' && cha != 'B')
	{
		cout << "Enter The Correct option: ";
		cin >> cha;
		cout << endl;
	}
	if (cha == 'A')
	{
		cout << "Enter student ID: ";
		cin >> ID;
		cout << endl;

		while (studentList[i] != NULL && !found)
		{
			if (studentList[i]->ID == ID)
			{
				cout << "Before: " << endl;
				GPAfinder();
				search_by_ID(ID);
				found = true;
				nodeType *newnode = studentList[i];
				modifyByCourse(newnode);
				studentList[i] = newnode;
				GPAfinder();


				cout << endl << "After: ";
				if (found == true)
				{
					search_by_ID(ID);
				}

			}
			i++;
		}
	}
	else if (cha = 'B')
	{
		string firstName, lastName;
		cout << "First Name: ";
		cin >> firstName;
		cout << "Last Name: ";
		cin >> lastName;
		while (studentList[i] != NULL && !found)
		{
			if (studentList[i]->lastName == lastName &&studentList[i]->firstName == firstName)
			{
				cout << "Before: ";
				GPAfinder();
				search_by_name(firstName, lastName);
				found = true;
				nodeType*newnode = studentList[i];
				modifyByCourse(newnode);
				studentList[i] = newnode;
				GPAfinder();

				cout << endl << "After: ";

				if (found == true)
				{
					search_by_name(firstName, lastName);
				}

			}
			i++;
		}
	}
	if (found == false)
		cout << endl;
	/*
	cout << "***********************************************************************************" << endl;
	cout << "Details entered do no exist" << endl;
	cout << "***********************************************************************************" << endl;
	*/
}



//helper function to modify the course grade of a student
void modifyByCourse(nodeType *&head)
{
	//variable declaration
	string course;
	bool found = false;
	nodeType *ptr = head->link;

	cout << endl;
	cout << "Which course do you want to change its grade: ";
	cin >> course;
	cout << endl;

	while (ptr != NULL && !found)
	{
		if (ptr->courseName == course)
		{
			found = true;
			cout << "Enter New Grade: ";
			cin >> ptr->courseGrade;
			cout << endl;
		}

		ptr = ptr->link;
	}
	/*
	if (found == false)
		cout << endl;
	cout << "***********************************************************************************" << endl;
	cout << "This course does not exist. Please check input" << endl;
	cout << "***********************************************************************************" << endl;
	*/
	cout << endl;

}//end of modifyByCourse



 //******************************OPTION 10*********************************************

 //Prints the students on the honor list
void honorStudent()
{
	//variable declaration
	int i = 0;
	int counter = 0;

	if (studentList[i] == NULL)
	{
		createClassList();
	}

	GPAfinder();

	while (studentList[i] != NULL)
	{
		if (studentList[i]->GPA > 3.6)
		{
			counter++;
			cout << counter << ". " << studentList[i]->lastName << " ";
			cout << studentList[i]->firstName;
			cout << endl;


		}
		i++;
	}
	cout << endl;

}//end of honorStudent




 //******************************OPTION 11*********************************************

//function to warn failing students
void warnStudent()
{
	//variable declaration
	int i = 0;
	int counter = 0;

	if (studentList[i] == NULL)
	{
		createClassList();
	}

	GPAfinder();

	while (studentList[i] != NULL)
	{
		if (studentList[i]->GPA < 2.5)
		{
			counter++;
			cout << counter << ". " << studentList[i]->lastName << " ";
			cout << studentList[i]->firstName;
			cout << endl;

		}
		i++;
	}
	cout << endl;
}//end of warnStudents




//******************************OPTION 12*********************************************

//function to show the failing students
void failStudent()
{
	//variable declaration

	int i = 0;
	int counter = 0;

	if (studentList[i] == NULL)
	{
		createClassList();
	}

	GPAfinder();


	while (studentList[i] != NULL)
	{
		if (studentList[i]->GPA < 2)
		{
			counter++;
			cout << counter << ". " << studentList[i]->lastName << " ";
			cout << studentList[i]->firstName;
			cout << endl;

		}
		i++;
	}
	cout << endl;
}




 //******************************OPTION 13*********************************************


 //Prints all the students information alphabetically, sorted by last name, and the total number of students in the class.
void print()
{
	//variable declaration
	int i = 0;

	if (studentList[i] == NULL)
	{
		//call the createClassList function if the list is empty
		createClassList();
	}


	while (studentList[i] != NULL)
	{
		int c = 0;
		nodeType*newnode = studentList[i];
		while (newnode != NULL)
		{
			if (c == 0)
			{
				cout << "Name (Last Name, first Name)" << endl;
				cout << newnode->lastName << ", ";
				cout << newnode->firstName << endl;
				cout << "ID: " << newnode->ID << endl;
			}
			else
			{

				cout << newnode->courseName << "  " << "  ||  ";
				cout << newnode->no_of_credits << "  " << "  ||  ";
				cout << newnode->courseGrade << "  ";


			}
			cout << endl;
			newnode = newnode->link;
			c++;
		}
		cout << endl;
		cout << "*************************************" << endl;
		i++;
	}
	cout << endl << "TOTAL NUMBER OF STUDENTS IN THE CLASS: " << i << endl << endl;

	cout << "\t***THIS IS THE END OF THE LIST***" << endl << endl;

}//end of print