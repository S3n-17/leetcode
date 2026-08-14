/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j;
    *returnSize=2;
    int *ans=(int *)malloc(2*sizeof(int));
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(i!=j && nums[i]+nums[j]==target){
                ans[0]=i;
                ans[1]=j;
                break;
            }
        }
    }
    return (ans);
}