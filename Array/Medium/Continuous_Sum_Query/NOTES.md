<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>The trivial solution here is to consider all the substrings and check for swap values for 0's. These will lead to a time complexity of O(N^2) and we will run into a <b>TLE</b> error.</p>

```
Time Complexity: O(N^2)
Space Complexity: O(1)
```

<h2>Efficient Solution</h2>

<p>The idea is that on every occurrence of 0's, we need to traverse left and right and count the number of consecutive 1's on each side. If the count exceeds the total number of 1's in the entire string, then the result is leftCount + rightCount + 1, else result is leftCount + rightCount.</p>

<h2>Edge Cases</h2>
<ul>
  <li>If there are no 1's, result is 0.</li>
  <li>If there are no 0's, result is size of string</li>
</ul>

<h2>Time Complexity</h2>

<p><b>O(N)</b> since we are traverring each element at most 2 times</p>

<h2>Space Complexity</h2>

<p><b>O(1)</b></p>
