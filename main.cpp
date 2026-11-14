#include <iostream>
using namespace std;

int main() {
    int steps;
    int total = 0;
    int walks = 0;

    do {
        cout << "Steps of this walk (0 to stop): ";
        cin >> steps;

        if (steps < 0) {
            cout << "Invalid steps!" << endl;
            continue;
        }

        if (steps == 0) {
            break;
        }

        total += steps;
        walks++;

    } while (total < 10000);

    if (total >= 10000) {
        cout << "Goal reached after " << walks
             << " walks! Total: " << total << " steps" << endl;
    } else {
        cout << "Stopped after " << walks
             << " walks. Total: " << total << " steps" << endl;
    }

    return 0;
}
