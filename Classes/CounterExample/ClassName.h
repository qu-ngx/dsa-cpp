class Counter
{
public:
    // Initialize the counter to default of 0
    Counter();

    // Initialize the counter to a val
    Counter(int startValue);

    // Get the current count
    int getCount();

    // Add x to the count
    void increaseBy(int x);

private:
    // The counter's value
    int count;
};
