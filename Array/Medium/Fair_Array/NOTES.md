<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<p>The simplest approach would be to traverse the array and for every i<sup>th</sup> index, compute the odd indexed sum and even indexed sum for the entire array and compare them to be equal. But this approach will give us TLE.

<pre>
  Time Complexity: O(N<sup>2</sup>)
</pre>

</p>

<h2>Efficient Solution</h2>

<p>We use the concept of <b>prefix sum</b> to solve this problem in linear time complexity. We maintain 4 state variables:
<ul>
<li>prefixOddArray</li>
<li>prefixEvenArray</li>
<li>suffixOddArray</li>
<li>suffixEvenArray</li>
</ul>

and populate them based on the decisions of the odd and even index.

Now when we remove an index from an array, then:

<pre>
  oddIndexedSum = prefixOddArray[i-1] + suffixEvenArray[i+1]
  evenIndexedSum = prefixEvenArray[i-1] + suffixOddArray[i+1]
</pre>

Thus, if both the sum are computed as equal, we count that index in our result.
</p>

<h2>Edge Cases</h2>
<ul>
<li>Special care needs to be taken for the <b>first element</b> while calculating <b>prefixOddArray[i-1]</b> and <b>prefixEvenArray[i-1]</b></li>
<li>Special care needs to be taken for the <b>last element</b> while calculating <b>suffixEvenArray[i-1]</b> and <b>suffixOddArray[i-1]</b></li>
</ul>


<h2>Time Complexity</h2>

<p><b>O(N)</b></p>

<h2>Space Complexity</h2>

<p><b>O(N)</b></p>
