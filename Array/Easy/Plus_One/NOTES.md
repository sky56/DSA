<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>The trivial solution here is to update all the indices with the given value from the starting index to the ending index. These will lead to a time complexity of O(N^2) and we will run into a <b>TLE</b> error.</p>

```
Time Complexity: O(N^2)
Space Complexity: O(N)
```

<h2>Efficient Solution</h2>

<p>Here we need to use the concept of <b>Difference Array</b>. If we want to update a value K from indices I to J, then we can simply do A[i - 1] += K and A[j] -= K. After this operation, the prefix sum of this resultant array will be the solution. Thus each operation takes only O(1) time complexity.</p>

<h2>Edge Cases</h2>
<ul>
  <li>The starting index should not underflow.</li>
  <li>The ending index should not overflow.</li>
</ul>

<h2>Time Complexity</h2>

<p><b>O(N)</b> assuming there are N number of operations.</p>

<h2>Space Complexity</h2>

<p><b>O(N)</b> which is the size of the resultant array.</p>
