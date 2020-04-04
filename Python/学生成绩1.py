n = 0
ls = list()
numstr = input("请输入第1个数：")

while numstr != "" and numstr.isnumeric() == True:
    num = eval(numstr)
    ls.append(num)
    numstr = input("请输入第{0}个数：".format(len(ls)+1))

if len(ls) > 0:
    average = sum(ls)/len(ls)
    print("班级平均成绩为:{0:.2f}。".format(average))

    for i in ls:
        if i > average:
            n = n + 1
    print("高于平均成绩的有{0}人。".format(n))

    ls.sort(reverse=True)
    print("降序排列后成绩为：")
    for j in ls:
        print(j,end=",")
    print("")
    
else:
    print("输入有误，请重新输入。")