<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>One naive solution is to take a <b>temporary array</b> and populate elements in the original array from <b>index k + 1 to n - 1</b> followed by copying elements from <b>index 0 to k</b>. Now this temporary array will have the rotated elements by k which can be copied back to the original array. But this requires an <b>auxiliary extra space of O(N)</b>.

Another naive solution is to <b>rotate</b> the complete array step by step till <b>k-times</b>. The TC will be <b>O(N * k)</b> and this is not an optimal solution since this will give a <b>TLE</b>.

</p>

<h2>Efficient Solution</h2>

<p>We use the concept of array <b>reversal</b> for this solution. On observing the array after rotated k-times, we find that a group of certain elements are only changing the position which can be obtained by performing these sequence of steps:

<ul>
  <li>Reverse the entire array</li>
  <li>Reverse the array from 0 to k - 1</li>
  <li>Reverse the array from k to n - 1</li>
</ul>
</p>

<h2>Edge Cases</h2>
<ul>
<li>If k > n, then we need to perform k = k % n, since k should not exceed n</b>.</li>
</ul>


<h2>Time Complexity</h2>

<p><b>O(N)</b></p>

<h2>Space Complexity</h2>

<p><b>O(1) Auxiliary Extra Space</b></p>
