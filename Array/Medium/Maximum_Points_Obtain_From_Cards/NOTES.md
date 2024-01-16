<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>The trivial solution here is to iterate through all the subarrays of size K from both ends picking from both sides; computing the sum of each subarray and returning the maximum..</p>

```
Time Complexity: O(N^2)
Space Complexity: O(1)
```

<h2>Efficient Solution</h2>

<p>Here we need to use the concept of <b>Prefix Sum</b> to precompute the sum of all the subarrays initially. Since the sum can be from either end, we can take both prefix and suffix sum array calling it as right sum and left sum. Then we just iterate till the first K elements and accordingly, choose the left and desired right sum to compute the maximum sum.</p>

<h2>Edge Cases</h2>
<ul>
  <li>The right sum should be 0 when the current index is 0.</li>
  <li>The left sum should be 0 when the current index is N - K.</li>
</ul>

<h2>Time Complexity</h2>

<p><b>O(K)</b></p>

<h2>Space Complexity</h2>

<p><b>O(N)</b> for storing the prefix and the suffix sum.</p>
