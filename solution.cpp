#include <iostream>
#include <algorithm>

int solution(int N) {
    int binaryNum[32];
    int i = 0;
    while (N > 0) {
        binaryNum[i] = N % 2;
        N = N / 2;
        i++;
    }

    // Output for debugging purposes (remove in final version)
    for (int j = i - 1; j >= 0; j--) {
        std::cout << binaryNum[j];
    }
    std::cout << std::endl;

    int maxGap = 0;
    int currentGap = 0;
    bool enclosedByOnes = false;

    for (int j = 0; j < i; j++) {
        if (binaryNum[j] == 0) {
            if (enclosedByOnes) {
                currentGap += 1;
            }
        } else {
            maxGap = std::max(currentGap, maxGap);
            currentGap = 0;

            // Set enclosedByOnes to true when encountering a 1
            enclosedByOnes = true;
        }
    }

    return maxGap;
}

int main() {
    std::cout << solution(1041) << std::endl; // Output: 5
    std::cout << solution(32) << std::endl;   // Output: 0

    return 0;
}


