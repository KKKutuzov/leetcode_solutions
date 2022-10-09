class Solution:
    def poorPigs(self, buckets: int, minutesToDie: int, minutesToTest: int) -> 
        int:
        import math
        tests = int(minutesToTest/minutesToDie)
        return math.ceil(math.log(buckets)/math.log(tests+1));
        