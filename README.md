# Question 2 — Daily Step Goal (do-while)

## Description
This C++ program tracks Can's daily walking steps until he reaches the goal of 10,000 steps.

The program uses a `do-while` loop to read the steps of each walk.

Negative values are invalid, and entering `0` stops the program for the day.

## Code

```cpp
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
```

## Sample Input

```text
3500
-200
4000
2800
```

## Sample Output

```text
Steps of this walk (0 to stop): 3500
Steps of this walk (0 to stop): -200
Invalid steps!
Steps of this walk (0 to stop): 4000
Steps of this walk (0 to stop): 2800
Goal reached after 3 walks! Total: 10300 steps
```

## Concepts Used
- Do-While Loop
- Break
- Continue
- If Statements
- Input and Output
- Accumulator (Total Steps)

## Daily Step Goal
10,000 Steps

## Author
OSTIM Technical University Electrical & Electronics Engineering Student Gani Kahraman Aslan 2026 Ankara Turkey

## Language
C++
