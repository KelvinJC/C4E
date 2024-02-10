/*
Data type hierarchy

long double
double
float
long
int
short
char


Data type conversion 
during arithmetic operations e.g. 5 + 3.4
typically the data is converted to a type with a higher position in the hierarchy
i.e. the example becomes 5.0 + 3.4

But during assignment  e.g. int a = 5.6f + 4.3f
the data type on the right is converted to 
the data type on the left of the equality sign 
even if the higher data type is on the right
i.e. the 'a' equals 9.
*/