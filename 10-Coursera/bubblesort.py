
def bubblesort(lst, dec=0):
    length = len(lst)
    for i in range(length-1):
        for j in range(length-i-1):
            if lst[j] > lst[j+1]:
                lst[j], lst[j+1] = lst[j+1], lst[j]
    if dec:
        lst.reverse()
    return lst