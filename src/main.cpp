#include <iostream>
#include "cgpa_calculation.h"
#include "cgpa_i_o.h"

int main () {
    auto entries = read_entries();
    float average = cgpa_average_calculation(entries);

    // Optional: Ergebnis ausgeben
    std::cout << "Durchschnitt: " << average << std::endl;

    return 0;
}