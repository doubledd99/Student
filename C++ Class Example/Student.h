#ifndef Student_h
#define Student_h
#include <string>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Student
{
public:
	Student(); //Constructor


	//Accessor Functions
	string getName(); //returns name of student
	int getstudentID(); //returns students id
	string getclassesTaken(int num); //returns string list of taken classses
	char getgrade(int num); // returns grade
	float getgpa(); //returns GPA
	string getsemester(int num);
	bool findgrade(char,int);

	//Mutator Functions
	void setName(string); //sets name of student manually
	void setClass(string,int); // sets name of classes student has taken // name of class, location in array, change grade or class information, grade of class
	void setGrade(int, char); 
	void setID();
	void setSemester(string semester, int num);
	void setGPA();

	~Student(); //Destructor
private:
	//member variables
	string newname;
	int newstudentID;
	string newclassesTaken[100];
	char newgrade[100];
	float newgpa;
	string newsemester[100];

};

#endif 