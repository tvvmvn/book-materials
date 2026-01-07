# Bitwise Operators

Bitwise operators are used to compare (binary) numbers:


1. &  AND 
Sets each bit to 1 if both bits are 1 

e.g) x & y 

2. | OR 
Sets each bit to 1 if one of two bits is 1 

e.g) x | y 

3. ^ XOR 
Sets each bit to 1 if only one of two bits is 

e.g) 1 x ^ y 

4. ~ NOT 
Inverts all the bits 

e.g) ~x 

5. << Zero fill left shift 
Shift left by pushing zeros in from the right and let the leftmost bits fall off 

e.g) x << 2 

6. >> Signed right shift 
Shift right by pushing copies of the leftmost bit in from the left, and let the rightmost bits fall off 

e.g) x >> 2


```python
print(6 & 3)
print(6 | 3)
print(6 ^ 3)
```