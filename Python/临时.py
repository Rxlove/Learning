ss = input("请输入一个字符串：")
c = input("请输入一个字符：")
cnt = 0
for i in ss:
    if i == c:
        cnt = cnt + 1
print("{0}中共有{1}个{2}！".format(ss,cnt,c))