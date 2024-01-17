<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<h2>Efficient Solution</h2>

<p>Since division is not allowed, therefore the best approach will be to take a <b>prefix product array</b> and <b>suffix product array</b>. Now to find the product of the array except an element, we can say that <b>answer[i] = prefix[i-1] * suffix[i+1]</b>.
</p>

<h2>Edge Cases</h2>
<ul>
  <li>For getting the answer of the first element, the prefix[i-1] should not be considered <b>Array Underflow)</b></li>
  <li>For getting the answer of the last element, the suffix[i+1] should not be considered <b>(Array Overflow)</b></li>
</ul>

<h2>Time Complexity</h2>

<p><b>O(N)</b></p>

<h2>Space Complexity</h2>

<p><b>O(N) for the answer</b></p>
