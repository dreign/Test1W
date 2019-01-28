import time


def NarcissisticNumber():
    count = 0
    ge = 0
    shi = 0
    bai = 0
    for n in range(100, 10000):
        ge = n % 10
        shi = (n - ge) / 10 % 10
        bai = int(n / 100)
        if ge * ge * ge + shi * shi * shi + bai * bai * bai == n:
            count += 1
            continue
    return count


print("开始计时")
start = time.time()
total = 0
for each in range(10000):
    total += NarcissisticNumber()
end = time.time()
print("Python运行时间:"+str((end-start)*1000)+"，水仙花数："+str(total))
