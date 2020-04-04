sum_pn = 0
n = 0

for num in range(2,101):
    for i in range(2,num):
        if num%i == 0:
            break
    else:
        sum_pn = sum_pn+num
        n = n+1

print("100之内共有{0}个素数，求和为{1}。".format(n,sum_pn))