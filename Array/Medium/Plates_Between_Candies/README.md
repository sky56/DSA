<h1>Plates Between Candies</h1>

<p>There is a long table with a line of plates and candles arranged on top of it. You are given a 0-indexed string s consisting of characters '*' and '|' only, where a '*' represents a plate and a '|' represents a candle.

You are also given a 0-indexed 2D integer array queries where queries[i] = [lefti, righti] denotes the substring s[lefti...righti] (inclusive). For each query, you need to find the number of plates between candles that are in the substring. A plate is considered between candles if there is at least one candle to its left and at least one candle to its right in the substring.

For example, s = "||**||**|*", and a query [3, 8] denotes the substring "*||**|". The number of plates between candles in this substring is 2, as each of the two plates has at least one candle in the substring to its left and right.
Return an integer array answer where answer[i] is the answer to the ith query.

</p>

<h2>Input Format</h2>

<p>
The only argument given is the integer array <b>nums</b>.
</p>

<h2>Output Format</h2>

<p>
Return an array of integers containing the majority elements in any order.
</p>

<h2>Constraints</h2>

<pre>
1 <= nums.length <= 5 * 10<sup>4</sup>
-10<sup>9</sup> <= nums[i] < 10<sup>9</sup>
</pre>

<h2>Test Cases</h2>

<h4>Test Case 1</h4>

<pre>
nums = [3,2,3]
Output: [3]
</pre>

<h4>Test Case 2</h4>

<pre>
nums = [1,2]
Output: [1,2]
</pre>

<h2>Companies</h2>

<ul>
  <li>Google</li>
</ul>
