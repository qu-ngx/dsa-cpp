class Counter
{
public:
    // The constructor
    Counter();

    // A second constructor inits the count based on the argument
    Counter(int startVal);

    // Get the current count
    int getCount();

    // Add x to the count
    void increaseBy(int x);

private:
    // The constructer's val
    int count;
};