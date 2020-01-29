#ifndef Student_h
#define Student_h
#include <string>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h> //libraries used

using namespace std; //standard namespace library used

class Student //creates a class called student
{
public: //public modifier
	Student(); //Constructor


	//Accessor Functions
	string getName(); //returns name of student
	int getstudentID(); //returns students id
	string getclassesTaken(int num); //returns string list of taken classses with input ID for array
	char getgrade(int num); // returns grade based of ID of array
	float getgpa(); //returns GPA
	string getsemester(int num);//returns semester based of ID of array
	bool findgrade(char,int); //searches array for letter grade and ID location in array as inputs

	//Mutator Functions
	void setName(string); //sets name of student 
	void setClass(string,int); // sets name of classes student has taken // name of class, location in array
	void setGrade(int, char);  //sets grade with grade and location in array as inputs
	void setID();//sets ID to random value
	void setSemester(string semester, int num);//sets semester to user entered info with # in array as inputs
	void setGPA();//calculates GPA based off other grades entered

	~Student(); //Destructor
private://private modifier
	//member variables
	string newname;//name of student
	int newstudentID;//ID for student
	string newclassesTaken[100];//name of class array 100 large
	char newgrade[100];//letter grade of class array 100 large
	float newgpa; //floating point value for GPA
	string newsemester[100]; //name of semester of specific class 100 large

};

#endif 