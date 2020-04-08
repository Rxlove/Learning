def divisor(x,y):
    m = max(x,y)
    n = min(x,y)
    r = m % n
    while r != 0:
        m = n
        n = r
        r = m % n
    return n

x,y = eval(input("请输入两个整数："))
print("{0}和{1}的最大公约数为{2}！".format(x,y,divisor(x,y)))