
int cbinsearch(int *arr, int size, int value) {
    int lBorder = 0;
    int rBorder = size;
    int median;
    int count = 1;
    while (lBorder < rBorder) {
        median = (lBorder + rBorder) / 2;
        if (arr[median] < value)
            lBorder = median;
        if (arr[median] > value)
            rBorder = median + 1;
        if (arr[median] == value) {
            int lShift = median - 1;
            while (arr[lShift] == value && lShift >= 0) {
                count += 1;
                lShift -= 1;
            }
            int rShift = median + 1;
            while (arr[rShift] == value && rShift <= rBorder) {
                count += 1;
                rShift += 1;
            }
            return count;
        }
    }
    return 0;
}
}
