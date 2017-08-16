//c++ 03 standard

class Singleton03
{
    public:
	static Singleton03 & getInstance()
	{
	    static Singleton03 instance;
	    return instance;
	}
    private:
	Singleton03() {}
	Singleton03(const Singleton03 &);
	Singleton03 & operator=(const Singleton03 &);
};
