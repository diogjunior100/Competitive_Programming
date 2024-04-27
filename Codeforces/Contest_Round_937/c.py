def solution(str):
    h, m = map(int, str.split(":"))

    if h == 0:
      hours = 12
      temp = "AM"
    elif h < 12:
      hours = h
      temp = "AM"
    elif h == 12:
       hours = h
       temp = "PM"
    else:
       hours = h - 12
       temp = "PM"
    return f"{hours:02d}:{m:02d} {temp}"



def main():
    t = int(input())
    for _ in range(t):
        str = input()
        converted_time = solution(str)
        print(converted_time)

if __name__ == "__main__":
  main()