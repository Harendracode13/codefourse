#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int solvedProblems = 0;

    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        // If at least two of them are sure (sum >= 2), they will solve the problem
        if (petya + vasya + tonya >= 2) {
            solvedProblems++;
        }
    }

    cout << solvedProblems << endl;

    return 0;
}
