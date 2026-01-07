# Number

1. int
2. float
3. double


## int

Stores whole numbers, without decimals
size: 2 or 4 bytes

e.g) 1

```c
int myNum = 1000;
printf("%d", myNum); // 1000
```

## float

Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
size: 4 bytes

e.g) 1.99

```c
float myNum = 5.75;
printf("%f", myNum); // 5.750000
```


## double

Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
size: 8 bytes

e.g) 1.99

```c
double myNum = 19.99;
printf("%lf", myNum); // 19.990000
```


## Set Decimal Precision

You have probably already noticed that if you print a floating point number, the output will show many digits after the decimal point:

```c
float myFloatNum = 3.5;
double myDoubleNum = 19.99;

printf("%f\n", myFloatNum); // Outputs 3.500000
printf("%lf", myDoubleNum); // Outputs 19.990000
```


If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point:

```c
float myFloatNum = 3.5;

printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
printf("%.1f\n", myFloatNum); // Only show 1 digit
printf("%.2f\n", myFloatNum); // Only show 2 digits
printf("%.4f", myFloatNum);   // Only show 4 digits
```