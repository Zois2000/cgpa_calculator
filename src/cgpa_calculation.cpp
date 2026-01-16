#include "cgpa_calculation.h"
#include "cgpa_i_o.h"

float cgpa_average_calculation(std::vector<CourseGrade> course_list) {
    float sum = 0;
    float cgpa_average = 0;

    for (const auto& item : course_list) {
        sum += item.grade;
 
   }
   return cgpa_average = sum / course_list.size();
}