list = [22, 10, 46, 77, 56, 67, 32, 90, 84, 16]
print("List is ", list)
search = int(input("Enter a number to search : "))
ans = False
for i in range(len(list)):
    if list[i] == search:
        ans = True
        print(search, 'is present in the list at index', i)
        break
if ans == False:
    print(search, 'is not present in the list.')


