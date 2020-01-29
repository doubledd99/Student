//Function Definitions
#include "Student.h"

Student::Student() {//constructor
	/*newstudentID = 0;
	newgpa = 0.0;*/
}

Student::~Student() {//destructor

}
//Accessor definitions
string Student::getName(){//returns name of selected student
	return newname;
}
int Student::getstudentID(){//returns ID of selected student
	return newstudentID;
}
string Student::getclassesTaken(int num){//returns class name with class ID # as input
	return newclassesTaken[num];
}
char Student::getgrade(int num){//returns letter grade of class with array # as input
	return newgrade[num];
}
float Student::getgpa(){//returns gpa of selected student
	return newgpa;
}
string Student::getsemester(int num) {//returns semester of selected student
	return newsemester[num];
}
bool Student::findgrade(char gradewanted,int num) {//returns grade of selected student WITH grade selected and # in array as inputs
	if (newgrade[num] == gradewanted)//if grade selected matches inputted grade searched returns true
		return true;
	else
		return false;
}

//Mutator definitions
void Student::setName(string name) {//sets iterations name to inputted value
	newname = name;
}
void Student::setClass(string className, int num) {//sets class name to inputted value 
	newclassesTaken[num] = className;
}
void Student::setGrade(int num, char grade) {//sets grade to inputted value
	newgrade[num] = grade;
}
void Student::setID() {//sets ID to random value between 0-999
	newstudentID = rand() % 1000 - 1;//selects random value between 0-999
}
void Student::setSemester(string semester, int num) {//sets semester to inputted value
	newsemester[num] = semester;
}
void Student::setGPA() {
	int As = 0; //keeps track of how many A's Student has
	int Bs = 0;
	int Cs = 0;
	int Ds = 0;
	int Fs = 0; //keeps track of how many F's Student has
	for (int i = 0; i < 100; i++) { //cycles through entire array to find fitting cases
		switch (newgrade[i]) {//switch statement that adds a tally to how many classes ended with a grade of certain value
		case 'A': As++;//adds one to "how many A's" earned
			break;
		case 'B': Bs++;
			break;
		case 'C': Cs++;
			break;
		case 'D': Ds++;
			break;
		case 'F': Fs++;
			break;
		}
	}
	float GPA = 0.0;//variable that stores intermediate calculated GPA value
	float finalGPA = 0.0;//final calculated GPA value as floating point variable
	GPA = float((As * 4) + (Bs * 3) + (Cs * 2) + (Ds * 1));//Multiplies each letter grade quantity by how many points each grade is worth,
	//A's are worth 4, B's 3 and so on
	finalGPA = GPA / (As + Bs + Cs + Ds + Fs);//divides previous value by how many total classes were added together
	newgpa = finalGPA;//sets iteration's GPA value to calculated value
}