t=int(input()) ## this Will Take input for how Many Times Will it Take inputs.
for i in range(t):
    n=int(input()) ## This Will Take the size Of list Elements going to be Input. Elements Enterned More than Size Then Program Wont give any Output
    a=n
    if n%2==1:
        n=n-1
    li=[int(x) for x in input("Enter numbers Only With Spaces: ").split()] ## This Will take inputs From User "With Spaces" 
    for ele in range(0,n,2):
        li[ele],li[ele+1]=li[ele+1],li[ele]
        print(li[ele],li[ele+1],end=" ")
    if a%2==1:
        print(li[a-1])
    print()
    ## SAMPLE INPUT: 
    ## 1
    ## 6
    ## 1 2 3 4 5 6
    ###SAMPLE OUTPUT: 2 1 4 3 6 5
