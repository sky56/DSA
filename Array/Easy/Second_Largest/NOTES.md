<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>
The most trivial solution would be to run 3 loops for <b>nums[i], nums[j], and nums[k]</b> to check for <b>nums[i] < nums[j] < nums[k]</b>. For each valid condition of <b>nums[i] < nums[j]</b> and <b>nums[j] < nums[k]</b>, we keep track of the <b>corresponding minimum cost</b>.

<pre>
Time Complexity: O(N<sup>3</sup>)
Space Complexity: O(1)
</pre>
</p>

<h2>Efficient Solution</h2>

<p>Since the max input size in in order of <b>10<sup>3</sup></b>, therefore we can come up with a quadratic TC. We <b>fix the second element</b> and then iterate left to check the number smaller than it along with traversing right to check for an element greater than it. For each matched case, we maintain the <b>minimum leftCost</b> and <b>minimum rightCost</b>. If both leftCost and rightCost have valid values, the minimum sum of <b>leftCost + rightCost + cost[i]</b> becomes a valid solution. </p>

<h2>Edge Cases</h2>
<ul>
  <li>Size of the input arr should be greater than equal to 3</li>
  <li>If there is no valid triplet for nums[i] < nums[j] < nums[k], we return -1</li>
</ul>

<h2>Time Complexity</h2>

<p><b>O(N<sup>2</sup>)</b></p>

<h2>Space Complexity</h2>

<p><b>O(1)</b></p>
