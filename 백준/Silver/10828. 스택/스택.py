import sys
input=sys.stdin.readline

def push(x):
    stack.append(x)

def pop():
    if not stack:
        return -1
    return stack.pop()

def size():
    return len(stack)

def empty():
    if not stack:
        return 1
    return 0

def top():
    if not stack:
        return -1
    return stack[-1]


n=int(input())
stack = []
for _ in range(n):
    order=input().split()
    if 'push' in order:
        push(order[1])
    elif 'pop' in order:
        print(pop())
    elif 'size' in order:
        print(size())
    elif 'empty' in order:
        print(empty())
    elif 'top' in order:
        print(top())