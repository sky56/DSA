<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>The most trivial solution  will be that for every query, iterate from the starting to ending index and count the number of plates between the candies in the given string.

<pre>
Time Complexity: O(N * Q)
Space Complexity: O(Q)
</pre>

</p>

<h2>Efficient Solution</h2>

<p> An efficient solution will be to <b>precompute</b> the following states that will assist in giving the output of each query in O(1) TC:

<ul>
  <li><b>cumulativePlatesCount[]</b>: This is the cumulative count of plates starting from left to right at each index. This data will help in retrieving the number of plates between 2 candles.</li>
  <li><b>leftMostCandle[]</b>: Against each plate, the value will be the immediate left index of the corresponding candle present.</li>
  <li><b>rightMostCandle[]</b>: Against each plate, the value will be the immediate right index of the corresponding candle present.</li>
</ul>

Once we precompute all these states using the <b>prefix-sum</b> technique, we now iterate over each <b>query</b> and compute the following:

<ul>
  <li><b>ImmediateLeftCandleIndex</b>: The data is fetched from leftMostCandle[]</li>
  <li><b>ImmediateRightCandleIndex</b>: The data is fetched from rightMostCandle[].</li>
  <li><b>Number of plates</b>: If both ImmediateLeftCanleIndex and ImmediateRightCandleIndex are valid, <b>cumulativePlatesCount[ImmediateRightCandleIndex] - cumulativePlatesCount[leftMostCandle]</b></li>
</ul>
  
</p>

<h2>Edge Cases</h2>
<ul>
  <li>ImmediateLeftCandleIndex > ImmediateRightCandleIndex, then result is 0 (there are no plates in between).</li>
  <li>ImmediateLeftCandleIndex or ImmediateRightCandleIndex are invalid.</li>
</ul>

<h2>Time Complexity</h2>

<p><b>O(N + Q)</b></p>

<h2>Space Complexity</h2>

<p><b>O(N + Q)</b></p>
