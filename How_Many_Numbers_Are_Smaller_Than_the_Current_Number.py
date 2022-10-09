class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        answer = []
        for elm in nums:
            ind = 0
            for tmp_elm in nums:
                if elm > tmp_elm:
                    ind += 1
            answer.append(ind)
        return answer
