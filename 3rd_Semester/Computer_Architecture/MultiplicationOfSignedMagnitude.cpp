#include <iostream>
#include <cmath>

int q = 0, b = 0, c = 0, e = 0, q1 = 0, b1 = 0;
int qnum[4] = {0}, bnum[4] = {0};
int acc[4] = {0}, res[4] = {0};
int sc = 0, asize = 0;

void binary()
{
    b1 = std::abs(b);
    q1 = std::abs(q);
    int r1, r2;
    
    for (int i = 0; i < 4; i++)
    {
        r1 = b1 % 2;
        b1 /= 2;
        r2 = q1 % 2;
        q1 /= 2;
        bnum[i] = r1;
        qnum[i] = r2;
    }
    
    sc = sizeof(qnum) / sizeof(int);
    asize = sc;
}

void add(int num[])
{
    c = 0;
    for (int i = 0; i < 4; i++)
    {
        res[i] = acc[i] + num[i] + c;
        c = (res[i] >= 2) ? 1 : 0;
        res[i] %= 2;
    }
    e = c;

    std::cout << "\n ADD B: ";
    for (int i = 3; i >= 0; i--)
    {
        acc[i] = res[i];
        std::cout << acc[i];
    }
    std::cout << " : ";
    for (int i = 3; i >= 0; i--)
    {
        std::cout << qnum[i];
    }
}

void rshift()
{
    int temp2 = acc[0];

    for (int i = 1; i < 4; i++)
    {
        acc[i - 1] = acc[i];
    }
    acc[3] = e;
    e = 0;
    
    for (int i = 1; i < 4; i++)
    {
        qnum[i - 1] = qnum[i];
    }
    qnum[3] = temp2;

    std::cout << "\n R-SHIFT: ";
    for (int i = 3; i >= 0; i--)
    {
        std::cout << acc[i];
    }
    std::cout << ":";
    for (int i = 3; i >= 0; i--)
    {
        std::cout << qnum[i];
    }
}

int main()
{
    int i;
    int p = 0, n = 1;

    std::cout << "\t\t******SIGNED MAGNITUDE MULTIPLICATION ALGORITHM******\n";
    std::cout << "\nEnter two numbers to multiply: ";
    std::cout << "\nBoth must be less than 16\n";

    do
    {
        std::cout << "Enter b: ";
        std::cin >> b;
        std::cout << "Enter Q: ";
        std::cin >> q;
    } while (b >= 16 || q >= 16);

    std::cout << "\nExpected product = " << b * q;
    
    binary();

    std::cout << "\nS.C. = " << sc;
    std::cout << "\n\nSigned Binary Equivalents are:";
    
    std::cout << "\n b = ";
    for (i = 3; i >= 0; i--)
    {
        std::cout << bnum[i];
    }

    std::cout << "\n q = ";
    for (i = 3; i >= 0; i--)
    {
        std::cout << qnum[i];
    }
    std::cout << "\n\n";

    while (sc != 0)
    {
        std::cout << "\nS.C. = " << sc;
        if (qnum[0] == 0)
        {
            std::cout << "\n-->";
            rshift();
        }
        else
        {
            std::cout << "\n-->";
            add(bnum);
            rshift();
        }
        sc--;
    }

    std::cout << "\nProduct is = ";
    if ((b < 0 && q > 0) || (b > 0 && q < 0))
        std::cout << n;
    else
        std::cout << p;

    for (i = 3; i >= 0; i--)
    {
        std::cout << acc[i];
    }
    for (i = 3; i >= 0; i--)
    {
        std::cout << qnum[i];
    }

    return 0;
}
