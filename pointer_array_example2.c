#include <stdio.h>
#include <limits.h> 

int main() {
    int nums[] = {10, 20, 30, 40, 50, 60, 70};
   int n = sizeof(nums) / sizeof(nums[0]); 
    int i, max = INT_MIN, min = INT_MAX;

  
    for (i = 0; i < n; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    printf("so lon nhat trong mang la: %d\n", max);
    printf("so nho nhat trong mang: %d\n", min);

    return 0;
}
