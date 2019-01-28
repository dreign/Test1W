Module Test1W

    Sub Main()
        Dim watch As New Stopwatch
        Console.WriteLine("开始计时")
        watch.Start()
        Dim total = 0
        Dim i As Integer
        For i = 1 To 10000
            total += NarcissisticNumber()
        Next
        watch.Stop()
        Dim time As String
        time = watch.ElapsedMilliseconds.ToString()
        Console.WriteLine($"VB执行时间：{time}，水仙花数：{total}")
        Console.ReadKey()
    End Sub

    Function NarcissisticNumber() As Integer
        Dim count As Integer
        Dim ge, shi, bai As Integer
        For n As Integer = 100 To 100000
            ge = n Mod 10
            shi = (n - ge) / 10 Mod 10
            bai = Int(n / 100)
            If (ge * ge * ge + shi * shi * shi + bai * bai * bai = n) Then
                count += 1
                'Console.WriteLine(n.ToString())
            End If
        Next
        NarcissisticNumber = count
    End Function

End Module
