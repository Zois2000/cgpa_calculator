#include <cgpa_i_o.h>
#include <iostream>
#include <sstream>

std::vector<CourseGrade> read_entries() {
    std::vector<CourseGrade> entries;
    std::string input;

    std::cout << "Eingabe: <Kurs> <Note> <Credit Points>, mit q beenden\n";

    while (true) {
        std::getline(std::cin, input);

        if (input == "q") {
            break;
        }

        std::istringstream iss(input);

        std::string course;
        float grade;
        int credit_points;

        if (!(iss >> course >> grade >> credit_points)) {
            std::cout << "Ungültiges Format. Erwartet: <Kurs> <Note> <Credits>\n";
            continue;
        }

        entries.push_back({course, grade, credit_points});
    }

    return entries;
}
