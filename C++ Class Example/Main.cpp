/*
	Daniel Dooley
	Data Structures 2nd Semester 2020
	Due: 1/28/20
	Lab number 1
	Description: Create a student class that will store important information about a student. 
	As a part of this lab, a client file needs to be created to test the class by displaying to
	the screen all the attributes and display all classes that match a user requested grade. 
*/


#include <iostream> //libraries used to make code run
#include <string>
#include "Student.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std; //standard namespace library used


int main() {
	srand(time(NULL));//seeds random number generator
	Student Student_1; //creates an instance of Student class
	string setName; //used for storing user input
	string setClass; //used for storing user input
	int classesNum = 0; //integer value used to select through an array
	char grade = 'A';//used for storing user inputted grade earned for class
	bool keepEnter = true;//asks user if they wish to "keep entering" new classes taken
	char userEnter;//stores user inputted value
	cout << "Set students name: "; //asks for users name
	cin >> setName; //saves user inputted name to variable
	Student_1.setName(setName);//mutator function which sets name of student
	do {
		cout << "Enter a class name: ";//asks user for classes name
		cin >> setClass; //saves user inputted class name to variable
		Student_1.setClass(setClass,classesNum);//mutator function that sets name of class and stores whether it is the 1st 2nd 3rd and so on class entered
		cout << "Enter a grade for this class: "; // asks user to input the grade earned
		cin >> grade; //saves grade user entered to variable
		Student_1.setGrade(classesNum, grade);//mutator function that sets grade of class for a specific class
		cout << "Enter the semester this class was taken: ";//asks user which semester class was taken in
		string semester; //variable that stores the semester class was taken in
		cin >> semester; //saves user entered value to variable
		Student_1.setSemester(semester, classesNum); //mutator function that sets the semester in iteration to user entered value for specific class
		cout << "Enter '1' to enter another class: ";//asks user if they wish to keep entering new classes
		cin >> userEnter;//saves user input to variable
		classesNum++; //increases the  "ID" that is the integer in the array
		if (userEnter == '1') //if user enters '1' user must then enter another class,grade,semester
			keepEnter = true;//keeps loop alive
		else //user enters anything but a 'a'
			keepEnter = false;//loop is allowed to close and proceed
	} while (keepEnter);//while user wishes to enter another grade: 
	Student_1.setID();//Sets a random integer between 0-999 to student
	Student_1.setGPA();//calculates GPA based on grades entered		
	char userGrade; //creates a variable to store user input
	cout << "Select a grade you wish to search for: "; //asks user to select a letter grade to search for
	cin >> userGrade;//saves user input to variable
	for (int i = 0; i < 100; i++) {//loops from 0-100, (entire array)
		if (Student_1.findgrade(userGrade, i) == true) {//if the array of all grades match the user input grade
			cout << Student_1.getclassesTaken(i) << "	" << Student_1.getsemester(i) << endl;//outputs the class and grade to screen
		}
	}
	cout << endl <<"Student " << Student_1.getName() << "'s file: \n"; //displays who's file is slowing using accessor method
	cout << "Name:	" << Student_1.getName() << endl << "ID:	" << Student_1.getstudentID() << endl //prints students name and ID # via accessor method
		<< "GPA:	" << Student_1.getgpa() << endl; //displays students gpa via accessor method
	cout <<endl<< endl << "Classes taken: \n";//prints classes taken to screen with spacing
	int displayClass = classesNum-1; //creates new variable based off the previous value that increased with each loop and subtracts 1 for continuity
	do {
		cout << Student_1.getclassesTaken(displayClass) << "	grade:" << Student_1.getgrade(displayClass)<<"	"<< Student_1.getsemester(displayClass) << endl; //displays every class taken with grade earned and the semester taken in using accessor method
		displayClass--; //subtracts 1 from integer value that "is" how many classes still need to be displayed
	} while (displayClass >= 0); //keeps looping until end of list

	return 0;
}