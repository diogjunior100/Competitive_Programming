while True:
    try:
        n, r = map(int, input().split())
        v = list(map(int, input().split()))
        new = []

        for i in range(1,n+1):
            new.append(i)

        set1 = set(v)
        set2 = set(new)

        diference = set1.symmetric_difference(set2)
        new_array = list(diference)

        if len(new_array) == 0:
            print("*")
        else:
            for elemento in new_array:
                print(elemento, end=" ")
            print()
         
    except EOFError:
        break 
