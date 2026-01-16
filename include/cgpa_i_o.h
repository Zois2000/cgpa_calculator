#pragma once
#include <vector>
#include <string>

struct CourseGrade {
	std::string course;
	float grade;
    int credit_points;
};

std::vector<CourseGrade> read_entries();