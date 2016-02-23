# Enter your code here. Read input from STDIN. Print output to STDOUT
a,b,n=map(int,raw_input().split())

n1=2
while(n1<n):
    f=(b*b)+a
    a=b
    b=f
    n1=n1+1
print f
