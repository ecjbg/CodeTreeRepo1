#include <iostream>
using namespace std;

int M, D;

bool isValidDate(int M, int D) {
    int daysInMonth[13] = {
        0, 31, 28, 31, 30, 31, 30, 
        31, 31, 30, 31, 30, 31
    };

    if (M >= 1 && M <= 12 && D >= 1 && D <= daysInMonth[M]) {
        return true;
    }
    return false;
}

int main() {
    cin >> M >> D;

    if (isValidDate(M, D)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
//nice qn,could solve using map too ig
//date prob #2
#include <iostream>
using namespace std;

int Y, M, D;

bool isLeapYear(int Y) {
    return (Y % 400 == 0) || (Y % 4 == 0 && Y % 100 != 0);
}

bool isValidDate(int Y, int M, int D) {
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30,
                          31, 31, 30, 31, 30, 31 };
    if (isLeapYear(Y)) {
        daysInMonth[2] = 29;
    }
    if (M < 1 || M > 12) return false;
    if (D < 1 || D > daysInMonth[M]) return false;
    return true;
}

void fn1(int Y, int M, int D) {
    if (!isValidDate(Y, M, D)) {
        cout << -1;
        return;
    }

    if (M >= 3 && M <= 5) {
        cout << "Spring";
    } else if (M >= 6 && M <= 8) {
        cout << "Summer";
    } else if (M >= 9 && M <= 11) {
        cout << "Fall";
    } else {
        // Dec, Jan, Feb are winter
        cout << "Winter";
    }
}

int main() {
    cin >> Y >> M >> D;
    fn1(Y, M, D);
    return 0;
}
