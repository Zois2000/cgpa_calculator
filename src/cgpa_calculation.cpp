#include <iostream>
#include "cgpa_calculation.h"
#include "cgpa_i_o.h"

void total_credits_calc(std::vector<CourseGrade> course_list) {
    int sum = 0;

    for (const auto& item : course_list) {
        sum += item.credit_points;
    }

	std::cout << "Total credit points: " << sum << "\n";
}

void average_calculation(std::vector<CourseGrade> course_list) {
    float sum = 0;
    float grade_average = 0;

    for (const auto& item : course_list) {
        sum += item.grade;
    }

    grade_average = sum / static_cast<float>(course_list.size());

    std::cout << "Durchschnittsnote: " << grade_average << "\n";
}