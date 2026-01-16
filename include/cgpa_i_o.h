#pragma once
#include <vector>
#include <string>

struct CourseGrade {
	std::string course;
	float grade;
};

std::vector<CourseGrade> read_entries();