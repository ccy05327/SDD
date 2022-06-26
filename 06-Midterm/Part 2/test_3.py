import unittest


# A function calculating the mode, also known as the most frequent value, in a given range

def mostFrequent(_list):
    maxCount = 0
    num = _list[0]
    numList = []

    for i in _list:
        count = _list.count(i)
        if (count > maxCount):
            maxCount = count
            num = i

    for i in _list:
        count = _list.count(i)
        if (count == maxCount):
            numList.append(i)

    numList = sorted(list(set(numList)))
    if (len(numList) == 1):
        return numList[0]
    else:
        return numList


class TestSetForTest3(unittest.TestCase):

    def test_frequent(self):
        testList = ([3]*5) + ([2]*4) + ([6]*7) + ([5]*2)
        self.assertEqual(mostFrequent(testList), 6)

    def test_frequent2(self):
        testList = ([8]*5) + ([4]*4) + ([6]*2) + ([1]*2)
        self.assertEqual(mostFrequent(testList), 8)

    def test_input_mixed(self):
        testList = (['t']*2) + ([5]*9) + (['0']*7) + ([4]*9)
        self.assertEqual(mostFrequent(testList), [4, 5])


unittest.main(argv=['ignored', '-v'], exit=False)
