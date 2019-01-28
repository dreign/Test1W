class Test1W{
	public static void main(String args[]) {
        //System.out.println("begin");
        long startTime = System.currentTimeMillis();
        int total=0;
        for (int i = 0; i < 10000; i++) {
            total+=NarcissisticNumber();
        }
        long endTime = System.currentTimeMillis();
        System.out.println("time:" + (endTime - startTime)+",total:"+total );
    }

    public static int NarcissisticNumber() {
        int count=0;
        int ge, shi, bai;
        for (int n = 100; n < 100000; n++) {
            ge = n % 10;
            shi = (n - ge) / 10 % 10;
            bai = (int) (n / 100);
            if (ge * ge * ge + shi * shi * shi + bai * bai * bai == n) {
                count++;
                    //System.out.println(String.valueOf(n));
            }
        }
        return count;
	}
 }