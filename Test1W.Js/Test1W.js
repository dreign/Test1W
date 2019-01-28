function NarcissisticNumber() {
    var count = 0;
    var ge, shi, bai;
    for (var n = 100; n < 100000; n++) {
        ge = parseInt(n % 10);
        shi = parseInt((n - ge) / 10 % 10);
        bai = parseInt(n / 100);
        if (ge * ge * ge + shi * shi * shi + bai * bai * bai == n) {
            count++;
            //console.log(n);
        }
    }
    return count;
}

function main() {
    var startTime = new Date();//获取当前时间
    var total = 0;
    for (var i = 0; i < 10000; i++) {
        total += NarcissisticNumber();
    }
    var endTime = new Date();
    var dateDiff = endTime.getTime() - startTime.getTime();//时间差的毫秒数
    console.log("time:" + dateDiff + ",total:" + total);
}
