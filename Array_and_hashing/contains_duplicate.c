bool containsDuplicate(int* nums, int numsSize) {
    int comparator(const void *x_void, const void *y_void){ //pointeur en paramètre(pour utiliser tout les types)
        int x = *(int*)x_void;      //on déréférence le pointeur avec la première étoile pour placer la valeur dans x.
        int y = *(int*)y_void;
        return x - y;
    }
    qsort(nums, numsSize, sizeof(int), comparator);
    for(int i = 1; i < numsSize; i++){
        if(nums[i] == nums[i-1]){
            return true;
        }
    }
    return false;
}