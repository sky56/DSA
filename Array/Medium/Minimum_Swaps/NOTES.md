<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>A trivial solution is to first count all elements less than or equal to <b>k</b>. Now traverse for every sub-array and swap those elements whose value is greater than k.</p>

```
Time Complexity: O(N^2)
Space Complexity: O(1)
```

<h2>Efficient Solution</h2>

<p>Here we need to use the concept of <b>Sliding Window</b> where we first compute the number of elements in the array that are less than equal to k and call it lessThanK. Now we create a sliding window of size lessThanK and iterate through the window. In each window, we again calculate the count of elements less than or equal to k and compute the maximum count in each iteration. Finally, the result will be the difference between lessThanK and the maximum count</p>

<h2>Edge Cases</h2>
<ul>
  <li>If all the elements in arr are greater than k, the output is 0</li>
</ul>

<h2>Time Complexity</h2>

<p><b>O(N)</b> assuming all the elements are equal. The window will be equal to the size of the array.</p>

<h2>Space Complexity</h2>

<p><b>O(1)</b></p>
