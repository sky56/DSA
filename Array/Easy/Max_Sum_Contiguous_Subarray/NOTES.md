<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>The trivial solution here is to consider all the subarrays and check for the maximum sum. These will lead to a time complexity of O(N^2) and we will run into a <b>TLE</b> error.</p>

```
Time Complexity: O(N^2)
Space Complexity: O(1)
```

<h2>Efficient Solution</h2>

<p><b>Kadane's Algorithm</b> states that only positive numbers contribute to the maximum sum. So the current sum will be computed on the access of every element and we will be updating the final result after each element. The current sum will be set to 0 whenever a negative number is encountered.</p>

<h2>Edge Cases</h2>
<ul>
  <li>If there is no positive number, the maximum will be the least negative number.</li>
</ul>

<h2>Time Complexity</h2>

<p><b>O(N)</b></p>

<h2>Space Complexity</h2>

<p><b>O(1)</b></p>
