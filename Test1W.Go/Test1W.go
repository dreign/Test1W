package main
 
import (
    "fmt"
    "time"
)

func NarcissisticNumber() int {
    var count int =0;
    for n := 100; n < 100000; n++ {
        ge := n % 10;
        shi := (n - ge) / 10 % 10;
        bai := n / 100;
        if (ge * ge * ge + shi * shi * shi + bai * bai * bai == n) {
            count++;
            //fmt.Printf("%d",n)
        }
    }
    return count;
}

func main() {
    var total int =0;
    var startTime = time.Now();//获取当前时间
    for  i := 0; i < 10000; i++ {
        total += NarcissisticNumber();
    }
    //var endTime = time.Now();
    elapsed := time.Since(startTime)
    //fmt.Printf("%s%d%s%d","time:",endTime.Sub(startTime), "ms,total:", total);
    fmt.Printf("%s%d%s%d","time:",elapsed/1000/1000, "ms,total:", total);
}
