<h1>Solution Approach</h1>

<h2>Brute Force Approach</h2>

<h2>Efficient Solution</h2>

<p> Suppose if we have 2 matrices mat1[m * k] and mat2[k * n] then the matrix product result[m * n] is defined as:

![Example](https://latex.codecogs.com/png.image?\inline&space;\small&space;\dpi{120}\text{result}[i][j]=\sum_{k=1}^{K}\text{mat1}[i][k]\times\text{mat2}[k][j]{where}\quad&space;1\leq&space;i\leq&space;M\quad\text{and}\quad&space;1\leq&space;j\leq&space;N&space;)

Therefore, we use the same formula to compute each element in the resultant matrix.
</p>

<h2>Edge Cases</h2>
<ul>
  <li>The columns of the first matrix should be equal to the rows of the second matrix.</li>
</ul>

<h2>Time Complexity</h2>

<p><b>O(M*K*N)</b></p>

<h2>Space Complexity</h2>

<p><b>O(M*N)</b></p>


