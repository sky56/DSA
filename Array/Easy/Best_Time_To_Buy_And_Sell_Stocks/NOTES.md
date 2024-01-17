<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>The naive approach will be that we <b>fix every prices[i] as the potential buy price</b> and then traverse each element in the right to get the maximum prices[i] for selling and calculate the profit accordingly.

<pre>
  Time Complexity: O(N<sup>2</sup>)
  Space Complexity: O(1)
</pre>
</p>

<h2>Efficient Solution</h2>

<p> To <b>maximize</b> the profit, we have to <b>minimize the cost price</b> and <b>maximize the selling price</b>. Thus we iterate every element in the array and on every iterate we keep <b>track of the minimum cost price</b>. We take the difference of the current element with the minimum cost price to calculate the profit and also update the maximum profit.
</p>

<h2>Edge Cases</h2>
<ul>
  <li>If there is no profit, the result should be 0.</li>
</ul>

<h2>Time Complexity</h2>

<p><b>O(N)</b></p>

<h2>Space Complexity</h2>

<p><b>O(1)</b></p>
