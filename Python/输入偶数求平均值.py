ls = list()
ls_all = list()
numstr = input("请输入第1个数：")

while numstr != "" and numstr.isnumeric() == True:
    num = eval(numstr)
    ls_all.append(num)
    numstr = input("请输入第{0}个数：".format(len(ls_all)+1))

if len(ls_all) > 0:
    for i in ls_all:
        if i % 2 == 0:
            ls.append(i)

if len(ls) > 0:
    average = sum(ls)/len(ls)
    print("\n共计输入了{0}个偶数\n其平均值为{1:.2f}".format(len(ls),average))

else:
    print("输入有误，请重新输入。")