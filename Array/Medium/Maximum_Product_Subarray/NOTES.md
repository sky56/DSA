<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>A brute force solution will be to <b>consider every subarray</b> and keep track of the product of every subarray along with updating the maximum result.

<pre>
Time Complexity: O(N<sup>2</sup>)
Space Complexity: O(1)
</pre>

</p>

<h2>Efficient Solution</h2>

<p>This can be solved efficiently using the variation of <b>Kadane's Algorithm</b>. We will traverse the array and on each iteration, we maintain a <b>currentProduct state</b> that will have the current product of the subarray. If the <b>current product becomes 0, we will reset it to 1</b> since it will not contribute to the result. Also at each iteration, the element itself might be the maximum product and hence it should also be considered while considering the maximum product.

Moreover, we need to <b>repeat</b> the process from the <b>end of the array to the start</b> because we might lose out of a potential solution if there are negatives at the beginning of the array. 
</p>

<h2>Edge Cases</h2>

<h2>Time Complexity</h2>

<p><b>O(N)</b></p>

<h2>Space Complexity</h2>

<p><b>O(1)</b></p>
