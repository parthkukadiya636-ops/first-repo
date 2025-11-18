
int majorityElement(int* nums, int numsSize) {

int number = 0;
int count = 0;

for (int i = 0; i < numsSize; i++) {
    if (count == 0) {
        number = nums[i];
    }
    count += (nums[i] == number) ? 1 : -1;
}

return number;
}