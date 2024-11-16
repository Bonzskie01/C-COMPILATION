#include <iostream>
#include <thread>
#include <chrono>
#include <cmath>
#include <iomanip>

using namespace std;

//TextAnim..
void typing_animation(const string& text) {
	system("cls");
    int width = 120;
    int padding = (width - text.length()) / 2;
    for (char c : text) {
        cout << string(padding, ' ') << c;
        this_thread::sleep_for(chrono::milliseconds(50));
        padding = 0;
    }
    cout << endl;
}

int main() {
    typing_animation("Hi! This is the sample for typing effects in CPP!");
    return 0;
}