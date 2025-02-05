#include <stdlib.h>

int*	twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
	int	i;
	int	j;
	int	*result;

	i = 0;
	j = 0;
	if (!nums || numsSize < 2){
		*returnSize = 0;
		return (NULL);
	}
	*returnSize = 2;
	result = (int *)malloc((*returnSize) * sizeof(int));
	if (!result){
		*returnSize = 0;
		return (NULL);
	}
	while (j != numsSize)
	{
		while (i != numsSize)
		{
			if (i == j){
            	i++;
            	if (i == numsSize || j == numsSize)
                	break;
			}
			if (nums[i] + nums[j] == target)
			{
				result[0] = j;
            	result[1]= i;
            	return (result);
			}
			i++;
		}
		i = 0;
		j++;
	}
	*returnSize = 0;
	return (NULL);
}