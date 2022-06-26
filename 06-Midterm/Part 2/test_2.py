import unittest

# A function taking a list and an index as parameters, calculating the percentage of the index in the list, rounding to second decimal


def percentageOfIndex(_list, _index):
    for i in _list:
        if type(i) != int and type(i) != float:
            return None
        else:
            continue
    return round(_list[_index]/sum(_list), 2)


class TestSetForTest2(unittest.TestCase):

    def test_percentage(self):
        self.assertEqual(percentageOfIndex(range(1, 25, 2), 7), 0.1)

    def test_percentage2(self):
        self.assertEqual(percentageOfIndex(range(1, 25, 3), 6), 0.21)

    def test_input_nan(self):
        self.assertEqual(percentageOfIndex(
            ['a', '2', 'q', 0, 4, '0'], 3), None)


unittest.main(argv=['ignored', '-v'], exit=False)
