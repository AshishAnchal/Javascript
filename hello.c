#include <stdio.h>
#include <windows.h>

int main()
{
    for (int i = 200; i <= 1000; i += 100)
    {
        Beep(i, 200); // frequency, duration (ms)
    }
    return 0;
}
