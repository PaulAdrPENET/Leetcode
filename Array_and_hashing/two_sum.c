int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i = 0;
    int j = 0;
    int* output = (int*)malloc(2*sizeof(int));
    for(i; i < numsSize ; i++){
        for (j = i + 1 ; j< numsSize; j++){
            if ((nums[i]+ nums[j]) == target){
                output[0] = i;
                output[1] = j;
                *returnSize = 2;
                return output; 
            }
        }
    }
    return 0;
}