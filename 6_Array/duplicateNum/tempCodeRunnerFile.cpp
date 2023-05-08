 for (int i = 0; i < n; i++)
    {
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0)
            ans.push_back(abs(nums[i]));

        nums[index] = -1 * nums[index];
    }