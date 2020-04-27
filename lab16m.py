import math
print("a=", end='')
a=int(input())
z = math.pow((math.cos(a)),2) + math.pow((math.cos(a)),4)
print('z=',z)

print('input numbers=')
a=[int(i) for i in input().split()]
b=[]
d=[]
c=1
for i in range(len(a)):
    if a[i]<0:
        b.append(a[i])
    if i%2==1:
        c*=a[i]
    if a[i]>0:
        d.append(a[i])
sorted(d)
print(d[0])
print("dob",c)
print("negative number:",*b)

print('A=', end='')
A=int(input())
A*=10
print('B=', end='')
B=int(input())
D=0
for i in range(2,11):
    B=(B/100*5)+B
    print('B=',int(B))
    D+=B
C=D-A
print('money from parents',C)
