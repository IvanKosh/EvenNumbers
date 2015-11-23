/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 23 Ноябрь 2015 г., 21:59
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    int num;
    while (stream >> num) {
        cout << (num+1)% 2 << '\n';
    }
    return 0;
}
