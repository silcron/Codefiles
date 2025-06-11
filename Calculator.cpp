#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "간단한 계산기입니다." << endl;
    cout << "예: 5 + 3" << endl;
    cout << "첫 번째 숫자를 입력하세요: ";
    cin >> num1;

    cout << "연산자를 입력하세요 (+, -, *, /): ";
    cin >> op;

    cout << "두 번째 숫자를 입력하세요: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "결과: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "결과: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "결과: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0)
                cout << "0으로 나눌 수 없습니다." << endl;
            else
                cout << "결과: " << num1 / num2 << endl;
            break;
        default:
            cout << "잘못된 연산자입니다." << endl;
    }

    return 0;
}
