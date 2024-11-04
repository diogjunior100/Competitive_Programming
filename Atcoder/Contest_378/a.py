from collections import Counter

numbers = list(map(int, input().split()))

color_count = Counter(numbers)

result = sum(count // 2 for count in color_count.values())

print(result)
