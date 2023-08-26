#include <stdio.h>

#define MAX_SIZE 100

int subset[MAX_SIZE];
int setSize;

void findSubsets(int s[], int targetSum, int currentIndex, int currentSum) 
{
    if (currentSum == targetSum) 
	{
        printf("Subset is :");
        for (int i = 0; i < setSize; i++) 
		{
            if (subset[i]) 
			{
                printf("%d", s[i]);
                if (i != setSize - 1) 
				{
                    printf(",");
                }
            }
        }
        printf(")\n");
    }

    if (currentIndex == setSize || currentSum > targetSum) 
	{
        return;
    }

    subset[currentIndex] = 1;
    findSubsets(s, targetSum, currentIndex + 1, currentSum + s[currentIndex]);

    subset[currentIndex] = 0;
    findSubsets(s, targetSum, currentIndex + 1, currentSum);
}

int main() {
    int s1[] = {6, 2, 8, 1, 5};
    int targetSum1 = 9;
    setSize = sizeof(s1) / sizeof(s1[0]);
    findSubsets(s1, targetSum1, 0, 0);

    int s2[] = {6, -4, 7, -1, 5, 2, 8, 1};
    int targetSum2 = 10;
    setSize = sizeof(s2) / sizeof(s2[0]);
    findSubsets(s2, targetSum2, 0, 0);

    return 0;
}
