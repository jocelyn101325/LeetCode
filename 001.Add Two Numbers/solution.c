/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int p,q;
    int *res=(int*)malloc(sizeof(int)*2);
    for(p=0;p<numsSize-1;p++){
        for(q=p+1;q<numsSize;q++){
            if(nums[p]+nums[q]==target){
                res[0]=p;
                res[1]=q;
                *returnSize=2;
                return res;
            }
        }
    }
    return res;
}