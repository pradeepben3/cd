int main(const double *indatav, int size, double *outdatav) 
{
    int i;
    for (i = 0; i < size; ++i)
        outdatav[i] = indatav[i] * 2.0;
        return 0;
}
