// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
    int leftBoard = 0;
    int rightoard = size - 1;
    int result = 0;
    while (leftBoard <= rightBoard) {
        int median = (rightBoard + leftBoard) / 2;
        if (*(arr + median) == value) {
            result++;
            int newMedian = median;
            while ((*(arr + median + 1)) == value) {
                result++;
                median++;
            }
            while ((*(arr + newMedian - 1)) == value) {
                result++;
                newMedian--;
            }
            return result;
        } else if (*(arr + median) > value) {
            rightBoard = median - 1;
        } else {
            leftBoard = median + 1;
        }
    }
    return result;
}
