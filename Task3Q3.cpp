inline int addNumbers(int a, int b) {
    // Implement an inline function that adds two numbers
    // and returns the result. Write the function definition here.
    return a + b;
}

int multiplyNumbers(int x, int y, int z /*= 1*/) {
    // Implement a function that multiplies three numbers, with
    // the third number having a default value of 1.
    // Write the function definition here.
    return x * y * z;
}

int main() {
    int sum = addNumbers(5, 7);
    int product = multiplyNumbers(3, 4); // Use default argument
    return 0;
}
