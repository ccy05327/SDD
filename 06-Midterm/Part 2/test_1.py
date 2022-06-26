import unittest


# A function calculating the total of a list from input
def listSum(_list):
    for i in _list:
        if type(i) != int and type(i) != float:
            return None
        else:
            continue
    return sum(_list)


class TestSetForTest1(unittest.TestCase):

    def test_is_sum(self):
        self.assertEqual(listSum([1, 2, 3]), 6)

    def test_is_sum_10(self):
        self.assertEqual(listSum(range(1, 11)), 55)

    def test_is_nan(self):
        self.assertEqual(listSum(['1', '2', '3', '4']), None)


unittest.main(argv=['ignored', '-v'], exit=False)
