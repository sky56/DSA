<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>The most trivial solution would be to run 3 loops for <b>nums[i], nums[j], and nums[k]</b> to check for <b>nums[i] < nums[j] < nums[k]</b> and break the loops when a valid triplet is encountered. The TC will be <b>O(N<sup>3</sup>)</b>.

A more optimal solution is to <b>fix the middle element</b> and traverse left to find a number smaller than it along with traverse right to find a number greater than it. In this approach, we will be able to compute the solution in <b>O(N<sup>2</sup>)</b> TC but that will also not suffice our solution since a solution in linear complexity is expected. </p>

<h2>Efficient Solution</h2>

<p>We take 2 variables as first and second representing the first smaller and the second smaller. Then we iterate the entire array and we have the following 3 possibilities in each of the iterations:
<u>
  <li>If the element is smaller than the first, we set the first to the current element.</li>
  <li>Else if the element is smaller than the second, we set the second to the current element.</li>
  <li>The third condition is the current element is greater than both first and second and hence we got a valid triplet.</li>
</u>
</p>

<h2>Edge Cases</h2>

<h2>Time Complexity</h2>

<p><b>O(N)</b></p>

<h2>Space Complexity</h2>

<p><b>O(1)</b></p>
