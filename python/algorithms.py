# Bubble sorting algorithm implemented by Jeff Martin

# sorts into ascending order (small -> large)

def bubbleSort(i):
    length = len(i)
    flag = True
    while(flag):
        flag = False
        for idx in range(length-1):
            if (i[idx] > i[idx+1]):
                i[idx], i[idx+1] = i[idx+1], i[idx]
                flag = True
    return i
        
def quickSort(array, lo, hi):
    if hi > lo:
        p = partition(array, lo, hi)
        quickSort(array, lo, p-1)
        quickSort(array, p+1, hi)
    return array

def partition(array, lo, hi):
    pivot = array[hi]
    i = lo
    for j in range(hi-lo):
        if array[j] < pivot:
            array[i], array[j] = array[j], array[i]
            i += 1
    array[i], array[hi] = array[hi], array[i]
    return i

