#!/usr/bin/python3
import sys
input = sys.stdin.readline
 
 
 
def solve():
    arr = list(map(int , input().split()))
    n = arr[0]
    k = arr[1]
    x = arr[2]
    if(k == 1 and x == 1):
        print("No")
    else:
        if(k <= 2 and x == 1):
            if(n % 2 != 0):
                print("No")
            else:
                print("Yes")
                print(n // 2)
                for _ in range(0 , n // 2):
                    print(2 , end = ' ')    
                print()    
        elif(k >= 2 and x == 1):
            if(n % 2 != 0):
                print("Yes")
                print((n - 3) // 2 + 1)
                for _ in range(0 , (n - 3) // 2):
                    print(2 , end = ' ')
                print(3)    
            else:
                print("Yes")
                print(n // 2)
                for _ in range(0 , n // 2):
                    print(2 , end = ' ')  
                print()      
        else:
            print("Yes")
            print(n)
            for _ in range(0 , n):
                print(1 , end = ' ')
            print()    
            
def main():
    t = int(input())
    for _ in range (0 , t):
        solve()
        
        
if __name__ == '__main__':
    main()