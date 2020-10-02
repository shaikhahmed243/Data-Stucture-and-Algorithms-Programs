# compares adjacent elements and sorts them

def bsort(a):
    for i in range(len(a) - 1, 0, -1):
        for j in range(i):
            if a[j] > a[j + 1]:
                temp = a[j]
                a[j] = a[j + 1]
                a[j + 1] = temp


a = [2, 54, 23, 76, 9]
bsort(a)
print(a)
