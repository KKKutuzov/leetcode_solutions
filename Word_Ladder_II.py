class Solution:
    def findLadders(self, beginWord: str, endWord: str, wordList: List[str]) 
        -> List[List[str]]:
        n = len(wordList)
        if not endWord in wordList:
            return []
        print('asd')
        g = [[] for i in range(n+1)]
        def check(a,b):
            flag = 1
            for i in range(len(a)):
                if a[i] != b[i]:
                    if flag == 1:
                        flag = 0
                    else:
                        return False
            return flag == 0
        if check(beginWord,endWord):
            return [[beginWord,endWord]]
        indx = -1
        for i in range(n):
            if wordList[i] == endWord:
                indx = i+1
            if check(beginWord,wordList[i]):
                g[0].append(i+1)
        for j in range(1,n+1):
            if check(wordList[j-1],beginWord):
                g[j].append(0)
            for i in range(n):
                if check(wordList[j-1],wordList[i]):
                    g[j].append(i+1)
        used = [False for i in range(n+1)]
        weight = [0 for i in range(n+1)]
        used[0] = True
        from queue import Queue
        q = Queue()
        for elm in g[0]:
            q.put(elm)
            used[elm] = True
            weight[elm] = 1
        while q.qsize() > 0:
            v = q.get()
            for elm in g[v]:
                if not used[elm]:
                    q.put(elm)
                    used[elm] = True
                    weight[elm] = weight[v] + 1
        if not used[indx]:
            return []
        to_return = []
        def make_answer(g,w,indx):
            l = w[indx]
            if l == 0:
                return [[indx]]
            answer = []
            for elm in g[indx]:
                if w[elm] == w[indx]-1:
                    for way in make_answer(g,w,elm):
                        answer.append([indx] + way)
            return answer
                            to_return = []
        for elm in make_answer(g,weight,indx): 
            to_return.append([beginWord] +[wordList[i-1] for i in elm[::-1][1
                :]])
        return to_return
        