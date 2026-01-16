#include <iostream>
#include "cgpa_calculation.h"
#include "cgpa_i_o.h"

int main () {
    auto entries = read_entries();
    total_credits_calc(entries);
    average_calculation(entries);

    return 0;
}