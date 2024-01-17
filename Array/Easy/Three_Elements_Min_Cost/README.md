<h1>Three Elements Min Cost</h1>

<p>Given two arrays <b>arr[]</b> and <b>cost[]</b> where <b>cost[i]</b> is the cost associated with arr[i], the task is to find the <b>minimum cost of choosing three elements</b> from the array such that <b>arr[i] < arr[j] < arr[k]</b>.

If it is not possible to choose 3 such trees return <b>-1</b>.
</p>

<h2>Input Format</h2>

<pre>
The first argument is an integer array arr.
The second argument is an integer array cost.
</pre>

<h2>Output Format</h2>

<p>Return an integer denoting the minimum cost of choosing 3 elements in strictly in increasing order, if not possible, -1.</p>

<h2>Constraints</h2>

<pre>
3 <= arr.length, cost.length <= 10<sup>3</sup>
1 <= arr[i], cost[i] <= 10<sup>9</sup>
</pre>

<h2>Test Cases</h2>

<h4>Test Case 1</h4>

```
arr  = [2, 4, 5, 4, 10]
cost = [40, 30, 20, 10, 40]
Output: 90
```

<h4>Test Case 2</h4>

```
arr = [1, 2, 3, 4, 5, 6]
cost = [10, 13, 11, 14, 15, 12]
Output: 33
```

<h2>Companies</h2>

<ul>
  <li>Google</li>
</ul>
