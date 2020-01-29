//Function Definitions
#include "Student.h"

Student::Student() {
	newstudentID = 0;
	newgpa = 0.0;

}

Student::~Student() {

}
//Accessor definitions
string Student::getName(){
	return newname;
}
int Student::getstudentID(){
	return newstudentID;
}
string Student::getclassesTaken(int num){
	return newclassesTaken[num];
}
char Student::getgrade(int num){
	return newgrade[num];
}
float Student::getgpa(){
	return newgpa;
}
string Student::getsemester(int num) {
	return newsemester[num];
}
bool Student::findgrade(char gradewanted,int num) {
	if (newgrade[num] == gradewanted)
		return true;
	else
		return false;
}

//Mutator definitions
void Student::setName(string name) {
	newname = name;
}
void Student::setClass(string className, int num) {
	newclassesTaken[num] = className;
	//newclassesTaken[num][1] = grade;
}
void Student::setGrade(int num, char grade) {
	newgrade[num] = grade;
}
void Student::setID() {
	newstudentID = rand() % 1000 - 1;
}
void Student::setSemester(string semester, int num) {
	newsemester[num] = semester;
}
void Student::setGPA() {
	int As = 0; //keeps track of how many A's Student has
	int Bs = 0;
	int Cs = 0;
	int Ds = 0;
	int Fs = 0;
	for (int i = 0; i < 100; i++) { //cycles through entire array to find fitting cases
		switch (newgrade[i]) {
		case 'A': As++;
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
	float GPA = 0.0;
	float finalGPA = 0.0;
	GPA = float((As * 4) + (Bs * 3) + (Cs * 2) + (Ds * 1));
	finalGPA = GPA / (As + Bs + Cs + Ds + Fs);
	//cout << endl << As<< " " <<Bs <<" "<< Cs << " " << Ds << " " << Fs << " Calculated GPA: " << finalGPA;
	newgpa = finalGPA;
}