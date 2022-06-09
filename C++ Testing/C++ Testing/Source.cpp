
#include <iostream>

using namespace std;

bool isPow2(int num) {

    double final;

    final = num;

    while (final != 1) {

        final /= 2;

        if (final < 1) {

            break;

        }

    }

    if (final == 1) {

        return true;

    }
    else {

        return false;
    }

}

int main() {

    cout << "Is 14 a power of 2?" << " " << isPow2(14) << endl;



    return 0;
}