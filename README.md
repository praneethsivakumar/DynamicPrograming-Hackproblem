This program finds the number of ways to tile a 2×N corridor using 
I-shaped and L-shaped tiles by using the recurrence
                  F(N)=F(N−1)+2F(N−2)  
with base values 
                  F(1)=1 and F(2)=3; 
It converts this recurrence into a 2×2 transformation matrix
                  [1 2]
                  [1​ 0​]
raises the matrix to the power N−2 using fast (binary) matrix 
exponentiation in 
                  O(logN) time,
and then multiplies the result with the base values to compute and print F(N).
