class Solution:
        def __init__(self):
        self.answer = []
        def my_gen(self, numRows):
        if numRows == 1:
            self.answer.append([1])
            return
        self.my_gen(numRows-1)
        to_append = [1]
        for i in range(1,numRows-1):
            to_append.append(self.answer[numRows-2][i-1] + self.answer[numRows
                -2][i])
        to_append.append(1)
        self.answer.append(to_append)
        def generate(self, numRows: int) -> List[List[int]]:
        self.my_gen(numRows)
        return self.answer
                