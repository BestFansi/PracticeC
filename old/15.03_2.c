/*
2469. Temperature Conversion
You are given a non-negative floating-point number rounded to two decimal places representing a temperature in degrees Celsius (Celsius). celsius
You need to convert the temperature from Celsius to Kelvin and Fahrenheit, and return the results as an array. ans = [kelvin, fahrenheit]
Return the array `ans`. Answers with an error margin of no more than `10⁻⁵` from the actual answer will be considered correct.

Note:
Kelvin = Celsius + 273.15
Fahrenheit = Celsius * 1.80 + 32.00
*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double* ans = (double*)malloc(2 * sizeof(double));
    ans[0] = celsius + 273.15;
    ans[1] = celsius * 1.80 + 32.00;
    *returnSize = 2;
    return ans;
}
