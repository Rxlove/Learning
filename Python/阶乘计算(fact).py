def fact(n):
    x = 1
    for i in range(1,n+1):
        x = x * i
    return x


n = input("请输入数值：")

print("{0}的阶乘为{1}".format(n,fact(eval(n))))