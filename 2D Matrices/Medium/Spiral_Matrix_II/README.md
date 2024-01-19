<h1>Sparse Matrix Multiplication</h1>

<p>Given two sparse matrices <b>mat1 of size m x k</b> and <b>mat2 of size k x n</b>, return the result of <b>mat1 x mat2</b>. You may assume that multiplication is always <b>possible</b>.
</p>

<h2>Input Format</h2>

<p>
The first argument is the 2-D integer matrix <b>mat1</b>.
The second argument is the 2-D integer matrix <b>mat2</b>.
</p>

<h2>Output Format</h2>

<p>Return a 2D integer matrix denoting mat1 * mat2
</p>

<h2>Constraints</h2>

<pre>
1 <= mat1.length, mat2.length <= 100
1 <= mat1[i].length, mat2[i].length <= 100
1 <= mat1[i][j], mat2[i][j] <= 100
</pre>

<h2>Test Cases</h2>

<h4>Test Case 1</h4>

```
mat1 = [[1,0,0],[-1,0,3]], mat2 = [[7,0,0],[0,0,0],[0,0,1]]
Output: [[7,0,0],[-7,0,3]]
```

<h4>Test Case 2</h4>

```
mat1 = [[1, 1]], mat2 = [[2],[3]]
Output: [[5]]
```

<h2>Companies</h2>

<ul>
  <li>Google</li>
</ul>
