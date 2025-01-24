#include <bits/stdc++.h>
using namespace std;

pair<int, int> addPair(pair<int, int> a, pair<int, int> b) {
    pair<int, int> sum(a.first + b.first, a.second + b.second);
    return sum;
}

void dirL(pair<int, int>& dir) {
    if(dir.first == 0 && dir.second == 1) {
        dir.first = -1;
        dir.second = 0;
    } else if(dir.first == -1 && dir.second == 0) {
        dir.first = 0;
        dir.second = -1;
    } else if(dir.first == 0 && dir.second == -1) {
        dir.first = 1;
        dir.second = 0;
    } else if(dir.first == 1 && dir.second == 0) {
        dir.first = 0;
        dir.second = 1;
    }
}

void dirR(pair<int, int>& dir) {
    if(dir.first == 0 && dir.second == 1) {
        dir.first = 1;
        dir.second = 0;
    } else if(dir.first == 1 && dir.second == 0) {
        dir.first = 0;
        dir.second = -1;
    } else if(dir.first == 0 && dir.second == -1) {
        dir.first = -1;
        dir.second = 0;
    } else if(dir.first == -1 && dir.second == 0) {
        dir.first = 0;
        dir.second = 1;
    }
}

bool isRobotBounded(string instructions) {
    pair<int, int> pos(0, 0), dir(0, 1);
    instructions = instructions + instructions + instructions + instructions;
    int n = instructions.size();
    for(int i = 0; i < n; i++) {
        if(instructions[i] == 'G') {
            pos = addPair(pos, dir);
        } else if(instructions[i] == 'L') {
            dirL(dir);
        } else {
            dirR(dir);
        }
    }
    if(pos.first == 0 && pos.second == 0) return true;
    return false;
}

int main()
{
    string s = "GLRLLGLL";
    cout << isRobotBounded(s);
    return 0;
}