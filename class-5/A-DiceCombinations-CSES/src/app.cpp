#include <bits/stdc++.h>

#define TYPE long long

const int MOD = 1e9+7;

void printDeque(std::deque<TYPE> dq) {
    while (!dq.empty()) {
        std::cout << dq.front() << " ";
        dq.pop_front();
    }
    std::cout << "\n";
}

TYPE sumDeque(std::deque<TYPE> dq) {
    TYPE out = 0;
    while (!dq.empty()) {
        out += dq.front();
        dq.pop_front();
    }
    return out;
}

int main()
{
    std::deque<TYPE> lastOuts;
    lastOuts.push_back(1);
    int n;
    std::cin >> n;
    for(int i = 1; i <= n; i++)
    {
        lastOuts.push_back(sumDeque(lastOuts)%MOD);
        while (lastOuts.size() > 6)
            lastOuts.pop_front();
        // printDeque(lastOuts);
    }
    std::cout << lastOuts.back()%MOD;
    return 0;
}
