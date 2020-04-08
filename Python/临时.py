def func(n):
    for i in range(2,n):
        if n%i == 0:
            return False
    else:
            return True


print(func(eval(input("请输入数值"))))