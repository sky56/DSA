<h1>Max Chunks To Make Sorted</h1>

<p>You are given an integer array arr of length <b>n</b> that represents a permutation of the integers in the <b>range [0, n - 1]</b>.

We split arr into some number of <b>chunks</b> (i.e., partitions), and individually sort each chunk. After concatenating them, the result should equal the sorted array.

Return the <i>largest number of chunks</i> we can make to sort the array.</p>

<h2>Input Format</h2>

<pre>
The only argument given is the integer array arr.
</pre>

<h2>Output Format</h2>

<pre>
Return the maximum number of chunks that we could have made.
</pre>

<h2>Constraints</h2>

<pre>
1 <= arr.length <= 10<sup>5</sup>
0 <= arr[i] < arr.length
</pre>

<h2>Test Cases</h2>

<h4>Test Case 1</h4>

<pre>
arr = [4,3,2,1,0]
Output: 1
</pre>

<h4>Test Case 1</h4>

<pre>
arr = [1,0,2,3,4]
Output: 4
</pre>

<h2>Companies</h2>

<ul>
  <li>Google</li>
</ul>
