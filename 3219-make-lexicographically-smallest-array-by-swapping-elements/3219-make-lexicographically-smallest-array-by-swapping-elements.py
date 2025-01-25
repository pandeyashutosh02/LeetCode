class Solution(object):


    def lexicographicallySmallestArray(self, nums, limit):
        """
        :type nums: List[int]
        :type limit: int
        :rtype: List[int]
        """
        def process(indices, store, result):
            indices.sort()
            store.sort()
            for i in range(len(indices)):
                result[indices[i]] = int(store[i])

        cloned_nums = []
        for i in range(len(nums)):
            cloned_nums.append([nums[i], i])
        cloned_nums.sort(key=lambda x: x[0])

        result = [0] * len(nums)
        store = []
        indices = []
        for i in range(len(cloned_nums)):
            if not store:
                store.append(cloned_nums[i][0])
                indices.append(cloned_nums[i][1])
            else:
                if (cloned_nums[i][0] - cloned_nums[i-1][0]) > limit:
                    process(indices, store, result)
                    store = []
                    indices = []
                store.append(cloned_nums[i][0])
                indices.append(cloned_nums[i][1])

        process(indices, store, result)
        return result