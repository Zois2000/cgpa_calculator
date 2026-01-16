#include <cgpa_i_o.h>
#include <iostream>

std::vector<CourseGrade> read_entries() {
    std::vector<CourseGrade> entries;
    std::string input;

    std::cout << "Eingabe: <Kurs> <Note>, mit q beenden\n";

    while (true) {
        std::getline(std::cin, input);

        if (input == "q") {
            break;
        }

        size_t freespace_position = input.find(' ');
        if (freespace_position == std::string::npos) {
            std::cout << "Ungültiges Format! Kurs und Note müssen durch ein Leerzeichen getrennt werden.\n";
            continue;
        }

        std::string course = input.substr(0, freespace_position);
        std::string grade_str = input.substr(freespace_position + 1);
        float grade = std::stof(grade_str);

        entries.push_back({course, grade});
    }

    return entries;
}
