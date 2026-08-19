#!/usr/bin/python3
import sys
input = sys.stdin.readline
 
 
 
def solve():
    arr = list(map(int , input().split()))
    n = arr[0]
    p = arr[1]
    q = arr[2]
    if(n == p and q == n):
        print("Yes")
    elif(n - (p + q) >= 2):
        print("Yes")
    else:
        print("No")        
            
def main():
    t = int(input())
    for _ in range (0 , t):
        solve()
        
        
if __name__ == '__main__':
    main()