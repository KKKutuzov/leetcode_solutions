class MyCalendar:
    def __init__(self):
        self.books = []
            def book(self, start: int, end: int) -> bool:
        for elm in self.books:
            if elm[0] < end and  elm[1] > start:
                return False
                self.books.append((start, end))
        return True
        # Your MyCalendar object will be instantiated and called as such:
# obj = MyCalendar()
# param_1 = obj.book(start,end)