// c++ 11 standard Singleton

class Singleton11
{
    public:
	static Singleton11 & getInstance() 
	{
	    static Singleton11 instance;
	    return instance;
	}
	
	Singleton11(const Singleton11 &) = delete;
	Singleton11 & operator=(const Singleton11 &) = delete;
     
     private:
	Singleton11() = default;
	
};
