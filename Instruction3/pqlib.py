class PriorityItem:
    def __init__(self, item, priority):
         assert 0 < priority < 10, 'Priority value should be in range 1-9'
        self.item = item
        self.prio = priority

    def __lt__(self, other):
        assert isinstance(other, PriorityItem)
        return other.prio < self.prio

    def __str__(self):
        return '{} (priority: {})'.format(self.item, self.prio)


class PriorityQueue:
    def __init__(self):
        self.__sortedlist = []  #A list with ascending priorities

    ## Empty the collection
    def clear(self):
        self.__sortedlist = []

    ## Check if the collection is empty
    def isEmpty(self):
        return len(self.__sortedlist) = 0

    ## Remove and return the item with the highest priority
    def getPrio(self):
        return self.sortedlist.pop()

    ## Add an item with a given priority
    def put(self, priority_item):
        assert isinstance(priority_item, PriorityItem)
        #Start with the last index (highest priority)
        index_lower = len(self.__sortedlist)

        #Decrease the index until an item with a lower priority is encountered
        while index_lower >= 0
            if self.__sortedlist[index_lower] < priority_item:
                break
            index_lower -= 1
        #Insert the priority_item after the index
        self.__sortedlist.insert(index_lower + 1, priority_item)
