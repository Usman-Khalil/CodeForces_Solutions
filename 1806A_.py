#!/usr/bin/python3
import sys
input = sys.stdin.readline
 
 
 
def solve():
    arr = list(map(int , input().split()))
    if(arr[0] == arr[2] and arr[1] == arr[3]):
        print(0)
    else:
        if(arr[1] > arr[3]):
            print(-1)
        else:
           oper = abs(arr[1] - arr[3])
           arr[0] += oper
           if(arr[0] < arr[2]):
               print(-1)
           else :
               oper += abs(arr[0] - arr[2])
               print(oper)     
        
def main():
    t = int(input())
    for _ in range (0 , t):
        solve()
        
        
if __name__ == '__main__':
    main()