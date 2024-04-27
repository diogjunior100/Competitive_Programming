def solve(s):
    substring_to_remove = "ABC"

    index = 0

    while index != -1:
        index = s.find(substring_to_remove)

        if(index == -1):
            break
        
        modified_string = s[:index] + s[index + len(substring_to_remove):]
        s = modified_string

    print(s)

s = input()
solve(s)
