def fact(n):
    x = 1
    for i in range(1,n+1):
        x = x * i
    return x

s = 0
n = input("请输入数值：")
for i in range(1,eval(n)+1):
    s = s + fact(i)

print("{0}的阶乘为{1}！".format(n,s))