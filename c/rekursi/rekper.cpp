#include <bits/stdc++.h>

using namespace std;


int N = 3;

#include <iostream>

void permuteHelper(int nums[], int size, int start, int result[][100], int &resultIndex) { 
    if (start == size) {
        // Base Case: Permutation complete
        for (int i = 0; i < size; i++) {
            result[resultIndex][i] = nums[i];
        }
        resultIndex++; 
    } else {
        for (int i = start; i < size; i++) {
            std::swap(nums[start], nums[i]);
            permuteHelper(nums, size, start + 1, result, resultIndex);
            std::swap(nums[start], nums[i]); // Backtracking
        }
    }
}

void permute(int nums[], int size) {
    int result[100][100]; // Stores up to 100 permutations of maximum size 100
    int resultIndex = 0;

    permuteHelper(nums, size, 0, result, resultIndex);

    // Print the results
    for (int i = 0; i < resultIndex; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int nums[] = {1, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);
    permute(nums, size);
    return 0;
}
