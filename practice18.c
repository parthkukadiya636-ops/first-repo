# include<stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int  test_main(){
    int nums[4] = {2,7,11,15};
    int returnSize = 2;
    twoSum(nums,4,9,&returnSize);
    return 0;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int result[2];
    for(int i= 0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            
            if(nums[i] + nums[j]==target){
                 result[0]=i;
                result[1] = j;
              printf("[%d,%d]",i,j);
              return 0;
                
            }
        }
        }
return NULL;
    }
    
