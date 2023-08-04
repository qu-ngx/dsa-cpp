class Counter
{

public:
    Counter();

    // Second constructer inits count with int startVal parameter
    Counter(int startVal);

    // Get current count
    int getCount();

    // Increase the current count by x
    void increaseBy(int x);

private:
    int count;
};