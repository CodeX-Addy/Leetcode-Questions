//  The program in C:


int* findDuplicates(int* nums, int numsSize, int* returnSize){
    int index = 0;
    int* ans = (int *) malloc(numsSize*sizeof(int));
    int duplicate = 0;
    for(int i=0; i<numsSize; i++){
        index = abs( nums[i] ) - 1;
        if(nums[index]<0)
            ans[duplicate++] = index+1; 

        nums[index] = - nums[index];
    }
    *returnSize = duplicate;
    return ans;


// Description:
// 1. Iterating each index one by one
// 2. Considering all the initial elements are positive
// 3. check the value of index, at abs(num[i]) - 1, this always give same ans for same value of element no matter its index
// 4. we'll then check if the value at this index is negative, if no then make it negative
// 5. but if yes, then it means that we are about to locate at the same index that previously we changed and make that negative so it means it is a duplicate element, store this element in another dynamically created array
// 6. repeat steps 3-5
// 7. Return the array , update the return size pointer as in code.
