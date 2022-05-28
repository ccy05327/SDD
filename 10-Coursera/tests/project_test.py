import unittest
import bubblesort as st
import file_max_cell as fc


class Project_Test(unittest.TestCase):
    def test_bsort(self):
        testList = [4, 3, 2, 1]
        expectedList = [1, 2, 3, 4]
        actualList = st.bubblesort(testList)
        self.assertEqual(actualList, expectedList)

    def test_desc(self):
        testList = [1, 2, 5, 4, 3]
        expectedList = [5, 4, 3, 2, 1]
        actualList = st.bubblesort(testList, 1)
        self.assertEqual(actualList, expectedList)

    def test_empty(self):
        testList = []
        expectedList = []
        actualList = st.bubblesort(testList)
        self.assertEqual(actualList, expectedList)
        
    def test_file_max_cell(self):
        a_max, a_series = fc.file_max_cell(
            '10-Coursera\scores.csv', 'math score')
        self.assertEqual(a_max, 100)
        self.assertEqual(len(a_series), 8)
        

if __name__ == '__main__':
    unittest.main()
