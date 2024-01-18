<h1>Plates Between Candies</h1>

<p>There is a long table with a line of <b>plates and candles</b> arranged on top of it. You are given a <b>0-indexed string s</b> consisting of characters <b>'*' and '|'</b> only, where a <b>'*' represents a plate</b> and a <b>'|' represents a candle</b>.

You are also given a <b>0-indexed 2D integer array queries</b> where <b>queries[i] = [lefti, right]</b> denotes the <b>substring s[lefti...righti] (inclusive)</b>. For each query, you need to find the <b>number of plates between candles</b> that are in the substring. A plate is considered between candles if there is at <b>least one candle to its left</b> and at least <b>one candle to its right</b> in the substring.

<pre>For example, s = "||**||**|*", and a query [3, 8] denotes the substring "*||**|". The number of plates between candles
in this substring is 2, as each of the two plates has at least  one candle in the substring to its left and right.</pre>

Return an integer array answer where answer[i] is the answer to the ith query.
</p>

<h2>Input Format</h2>

<p>
The first argument contains the string <b>s</b>s representing the table.
The second line contains a 0-based 2D array as queries.
</p>

<h2>Output Format</h2>

<p>
Return an array of integers <b>answers</b> with answers[i] as the answer to the query.
</p>

<h2>Constraints</h2>

<pre>
3 <= s.length <= 10<sup>5</sup>
s consists of '*' and '|' characters.
1 <= queries.length <= 10<sup>5</sup>
queries[i].length == 2
0 <= queries[i][0] <= queries[i][1] < s.length
</pre>

<h2>Test Cases</h2>

<h4>Test Case 1</h4>

![Example](https://assets.leetcode.com/uploads/2021/10/04/ex-1.png)

<pre>
s = "**|**|***|"
queries = [[2,5],[5,9]]
Output: [2,3]
</pre>

<h4>Test Case 2</h4>

![Example](https://assets.leetcode.com/uploads/2021/10/04/ex-2.png)

<pre>
s = "***|**|*****|**||**|*"
queries = [[1,17],[4,5],[14,17],[5,11],[15,16]]
Output: [9,0,0,0,0]
</pre>

<h2>Companies</h2>

<ul>
  <li>Google</li>
</ul>
