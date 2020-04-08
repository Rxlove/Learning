def isprime(n):
    for i in range(2,n):
        if n % i == 0:
            return False
    else:
        return True

num = eval(input("请输入数值："))
m = isprime(num)
if m is True and num > 1:
    print("{0}是素数！".format(num))
else:
    print("{0}不是素数！".format(num))