<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>
One approach to solve this problem will be <b>sorting</b> in the <b>reverse</b> order. Once the array is sorted, we can mark the first element as the largest and keep on iterating unless we encounter an <b>element different from the largest element</b>. That element will be our second largest element. TC will <b>O(NLogN + N)</b>.

Another approach to solving this problem is to use two passes, where in the first pass we mark the largest element in the array. In the second pass, we find the largest element but ignore the already marked largest element. The result we get in the second will be the second largest element in the array. TC will <b>O(N)</b> but with <b>two passes</b>.
</p>

<h2>Efficient Solution</h2>

<p>We initialise 2 state variables as:

<pre>
largest = nums[0]
secondLargest = -1
</pre>

We then traverse the entire array one by one and perform the following actions based on the below scenarios:

<ul>
  <li>If <b>nums[i] > largest</b>, we update <b>secondLargest to largest</b> and <b>largest to nums[i]</b>.</li>
  <li>If <b>nums[i] > secondLargest and nums[i] != largest</b>, we update <b>secondLargest = nums[i]</b>.</li>
</ul>

</p>

<h2>Edge Cases</h2>
<ul>
  <li>Size of the input nums should be greater than 2.</li>
  <li>There must exist at least 2 distinct elements in the array.</li>
</ul>

<h2>Time Complexity</h2>

<p><b>O(N)</b></p>

<h2>Space Complexity</h2>

<p><b>O(1)</b></p>
