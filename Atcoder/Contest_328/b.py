def is_repdigit_date(month, day):
    return all(digit == str(month)[0] for digit in str(month) + str(day))

def solve(N, days):
    sum = 0
    
    for month in range(1, N + 1):
        for day in range(1, days[month - 1] + 1):
            if is_repdigit_date(month, day):
                sum += 1
    
    return sum

def main():
    N = int(input())
    days = list(map(int, input().split()))

    result = solve(N, days)
    print(result)

main()

