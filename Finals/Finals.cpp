using namespace std;
#include <iostream>

// Variables for score
int scores[20];
int highest = 0;

// Variables for Fibonacci
int fibonacciTerm[1000];
int lastIndex = 0;
int target = 0;

void queryTarget() {
    try {
        cout << "Enter a positive integer: ";
        cin >> target;

        if(target < 0) throw(target);
    }
    catch (int targetNumber) {
        cout << "Invalid input! Target should be greater than 0" << endl;
    }
}

void fibonacci() {
    queryTarget();

    if (target > 0) {
        for (int i = 0; i < target; i++) {
            if (i == 0) fibonacciTerm[i] = 0;
            else if (i == 1 || i == 2) fibonacciTerm[i] = 1;
            else fibonacciTerm[i] = fibonacciTerm[i - 1] + fibonacciTerm[i - 2];

            if (fibonacciTerm[i] <= target) lastIndex = i;
            else break;
        }

        cout << "Fibonacci Series (display in reverse): ";
        for (int i = lastIndex; i >= 0; i--) {
            cout << fibonacciTerm[i] << " ";
        }
    }
}

int main()
{
    queryScores();
    fibonacci();
}