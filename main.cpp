#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*  problem 1
int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << sum << endl;
    int n;
    cin >> n;
    while (n>0) {
        sum += n;
        n--;
    }
    cout << sum << endl;
    return 0;
}*/

/*  problem 2
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i <= n-1; i++) {
        if (n % i == 0) {
            isPrime = false;
        }
    }
    if (isPrime) {
        cout << "Is a prime number";
    }
    else
        cout << "Is not a prime number";
    return 0;
}*/

/*  problem 3
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << ", ";

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        }
        else {
            n = n * 3 + 1;
        }
        cout << n;
        if (n != 1) {
            cout << ", ";
        }
    }
    return 0;
}*/

/*  problem 4
int main() {
    int n, counter = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0) {
        counter++;
        n /= 10;
    }
    cout << counter << endl;
    return 0;
}*/

/*  problem 5
int main() {
    int n, digit = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0) {
        digit = n % 10;
        cout << digit << " ";
        n /= 10;
    }
    return 0;
}*/

/*  problem 6
int main() {
    int a, b, mod = 0;
    cout << "Please enter two integers(greater one first): ";
    cin >> a >> b;
    mod = a % b;
    if (b == 0) {
        cout << a << endl;
    }
    while (mod != 0) {
        a = b;
        b = mod;
        mod = a % b;
    }
    cout << b << endl;
    return 0;
}*/

/*  problem 7
int main() {
    int n, sum = 0, counter = 0;
    while (sum <= 100) {
        cout << "Enter a number: ";
        cin >> n;
        sum += n;
        counter++;
    }
    cout << "Sum: " << sum << endl;
    cout << "Counter: " << counter << endl;
    return 0;
}*/

/*  problem 8
int main() {
    int balance = 500;
    cout << "Balance: " << balance << endl;
    int withdrawal = 0;
    while (balance > 0) {
        cout << "Please enter an amount to be withdrawn(0 to cancel): ";
        cin >> withdrawal;
        if (withdrawal == 0) {
            cout << "Quitting..." << endl;
            break;
        }
        if (withdrawal > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
            balance -= withdrawal;
            cout << "Balance: " << balance << endl;
        }
        }
    return 0;
}*/

/*  problem 9
int main() {
    char c;
    do {
        cout << "Please enter a character: ";
        cin >> c;
        if (c == 'Y' || c == 'N') {
            cout << "Accepted";
            break;
        }
        else {
            cout << "Invalid" << endl;
        }
    }
    while (c != 'Y' || c != 'N');
    return 0;
}*/

/*  problem 10
int main() {
    int n;
    int balance = 500;
    int withdrawal;
    cout << "Enter 1 for withdrawal" << endl << "2 to check balance" << endl << "3 to exit" << endl;
    do {
        cin >> n;
        if (n == 1) {
            cout << "Enter amount to withdraw: ";
            cin >> withdrawal;
            if (withdrawal > balance) {
                cout << "Insufficient balance" << endl;
            }
            else {
                balance -= withdrawal;
                cout << "Balance: " << balance << endl;
            }
        }
        else if (n == 2) {
            cout << "Balance: " << balance << endl;
        }
        else if (n == 3) {
            cout << "Quitting..." << endl;
        }
    }
    while (n != 3);
    return 0;
}*/

/*  problem 11
int main() {
    int n, a, b;
    int result = 0;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter 1 for addition" << endl << "Enter 2 for substraction" << endl << "Enter 3 for multiplication" << endl << "Enter 4 for division" << endl << "Enter 5 to quit." << endl;
    do {
        cin >> n;
        switch (n) {
            case 1:
                result = a + b;
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = a - b;
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = a * b;
                cout << "Result: " << result << endl;
                break;
            case 4:
                result = a / b;
                cout << "Result: " << result << endl;
                break;
            case 5:
                cout << "Quitting..." << endl;
                break;
            default:
                cout << "Invalid Input." << endl;
        }
    }
    while (n != 5);
    return 0;
}*/

/*  problem 12
int main() {
    int password = 123;
    int guess;
    int tries = 3;
    do {
        cout << "Password: ";
        cin >> guess;
        if (guess == password) {
            cout << "Correct!" << endl;
            tries = 0;
        }
        else {
            cout << "Wrong!" << endl;
            tries -= 1;
        }
    }
    while (tries > 0);
    return 0;
}*/

/*  problem 13
int main() {
    srand(time(0));
    int number = rand() % 101;
    int guess, counter = 0;
    do {
        cout << "Please guess a number: ";
        cin >> guess;
        if (guess == number) {
            cout << "You win!" << endl;
        }
        else if (guess > number) {
            cout << "Too big" << endl;
        }
        else if (guess < number) {
            cout << "Too small" << endl;
        }
        counter += 1;
    }
    while (guess != number);
    cout << "You took " << counter << " guesses to find the number." << endl;
    return 0;
}*/
