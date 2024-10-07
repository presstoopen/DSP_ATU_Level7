#include <stdio.h>
#include <math.h>

float data[512];
float N = 512;
float sum = 0;
float mean = 0;
float sum2 = 0;
float SD = 0;
int i;

int main()
{
    for(i=0; i<N; i++)
    {
        sum += i;
        data[i] = i;
    }
    mean = sum / N;

    for(i=0; i<N; i++)
    {
        sum2 += pow(data[i] - mean,2);
    }

    SD = sqrt(sum2 / (N - 1));

    printf("Standard Deviation = %0.2f", SD);

    return 0;
}