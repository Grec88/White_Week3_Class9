//============================================================================
// Name        : Week4_Class9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

struct Specialization {
	string spec;

	explicit Specialization(const string& spec1) {
		spec = spec1;
	}
};

struct Course {
	string course;

	explicit Course(const string& course1) {
		course = course1;
	}
};

struct Week {
	string week;

	explicit Week(const string& week1){
		week = week1;
	}
};

struct LectureTitle {
  string specialization;
  string course;
  string week;

  LectureTitle(const Specialization& new_spec, const Course& new_course, const Week& new_week){
	  specialization = new_spec.spec;
	  course = new_course.course;
	  week = new_week.week;
  }
};

int main() {

	LectureTitle title(
	    Specialization("C++"),
	    Course("White belt"),
	    Week("4th")
	);
	return 0;
}
