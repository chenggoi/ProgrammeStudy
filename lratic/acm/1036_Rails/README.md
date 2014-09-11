Rails
---
[Rails](http://acm.tju.edu.cn/toj/showp1036.html)
思路：車站是一個棧，按照 `1,2,3,4,...` 入栈，判斷出棧順序是否合法。

 - 輸入
 長度
 出棧字符串
 按 0 重新輸入長度
 輸入長度爲 0 ，退出

 - 輸出
 是否合法
 `Yes`
 `No`
 
>Tip：我花了一個小時解決問題，發現是 `Yes` 輸出寫成了 `YES` 。

模拟即可
	给定字符串
	從左到右依次與棧頂匹配。

	 - 匹配到則棧頂元素出棧，匹配下一個字符。全部匹配則 `Yes`
	 - 匹配失敗，則順序輸入的字串入棧。
	 - 若全部輸入字串入棧都入棧，棧頂元素卻不可以匹配，則 `No`

詳見代碼
	
