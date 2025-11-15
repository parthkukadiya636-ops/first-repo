 int maxProduct(int* nums, int n) {
    int ans = nums[0];
    int max = 1;

    for(int i = 0; i < n; i++) {
        max *= nums[i];
        if (max > ans) ans = max;
        if (max == 0) max= 1;
    }

    max = 1;

    for(int i = n - 1; i >= 0; i--) {
        max *= nums[i];
        if (max > ans) ans = max;
        if (max == 0) max = 1;
    }

    return ans;
}