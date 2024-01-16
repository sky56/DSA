<h1>Continuous Sum Query</h1>

<p>There are <b>A</b> beggars sitting in a row outside a temple. Each beggar initially has an empty pot. When the devotees come to the temple, they donate some amount of coins to these beggars. Each devotee gives a fixed amount of coin(according to their faith and ability) to some <b>K</b> beggars sitting next to each other.

Given the amount <b>B</b> donated by each devotee to the beggars ranging from <b>L to R index, where 1 <= L <= R <= A</b>, find out the final amount of money in each beggar's pot at the end of the day, provided they don't fill their pots by any other means.

For i<sup>th</sup> devotee B[i][0] = L, B[i][1] = R, B[i][2] = P, given by the 2D array B</p>

<h2>Input Format</h2>

<pre>
The first argument is a single integer A.
The second argument is a 2D integer array B.
</pre>

<h2>Output Format</h2>

<p>Return an array(0 based indexing) that stores the total number of coins in each beggars pot.</p>

<h2>Constraints</h2>

<pre>
1 <= A <= 2 * 10<sup>5</sup>
1 <= L <= R <= A
1 <= P <= 10<sup>3</sup>
0 <= len(B) <= 10<sup>5</sup>
</pre>

<h2>Test Cases</h2>

<h4>Test Case 1</h4>

```
A = 5
B = [[1, 2, 10], [2, 3, 20], [2, 5, 25]]
Output: 10 55 45 25 25
```

<h2>Companies</h2>

<ul>
  <li>Google</li>
</ul>
