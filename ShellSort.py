# it divides list into small arrays

def shsort(myarr):
    n = len(myarr)
    g = n // 2

    while g > 0:
        for x in range(g, n):
            y = myarr[x]
            z = x
            while z >= g and myarr[z - g] > y:
                myarr[z] = myarr[z - g]
                z -= g
            myarr[z] = y
        g //= 2


mylist = [35, 2, 23, 64, 89]
shsort(mylist)
print(mylist)
