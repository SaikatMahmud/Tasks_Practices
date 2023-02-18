// Function to find the area
double findArea(double radius)
{
    return PI * pow(radius, 2);
}

// Function to return the value of radius
static double findradius(string str)
{

    // Intialization
    double radius = 0;

    // For storing the value of R*R
    string st = "";

    // For counting the number of
    // spaces in the string
    int c = 0;

    // calulate the length of the
    int len = str.length();

    // getting the value of R*R
    // After = sign
    for (int i = 0; i < len; i++) {
        if (str[i] == '=') {
            c = 1;
        }
        else if (c == 1 && str[i] != ' ') {
            st = st + str[i];
        }
    }

    // Converting the digits into integer
    // Taking square root of that number
    radius = (double)sqrt(stoi(st));
    return radius;
}
