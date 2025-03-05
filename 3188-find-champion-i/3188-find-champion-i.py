class Solution(object):
    def findChampion(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        res, team=0,0
        for i in range(len(grid)):
            cnt=grid[i].count(1)
            if cnt>res:
                res=cnt
                team=i

        return team
        