#pics one element and place it at exact point to be placed

def isort(a):
    for x in range(1, len(a)):
        k = a[x]  # element present at index No. 1
        j = x - 1
        while j >= 0 and k < a[j]:
            a[j + 1] = a[j]
            j -= 1
        a[j + 1] = k


a = [3, 4, 58, 23, 87, 43]
isort(a)
print(a)
