<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>The trivial solution here is to iterate through all the subarrays of size K from both ends picking from both sides; computing the sum of each subarray and returning the maximum..</p>

```
Time Complexity: O(N^2)
Space Complexity: O(1)
```

<h2>Efficient Solution</h2>

<p>Here we need to use the concept of <b>Sliding Window</b> where we first compute the sum of the first k elements and make it as a candidate of the maximum sum. Now we keep on removing one element from the end of the window and add an element from the end of the array into the current sum. We also compute the maximum sum at each iteration.</p>

<h2>Edge Cases</h2>
<ul></ul>

<h2>Time Complexity</h2>

<p><b>O(N) when K = N</b></p>

<h2>Space Complexity</h2>

<p><b>O(1)</b></p>
