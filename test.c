#include <stddef.h>
#include <vector>

class C
{
public:
	C();
	~C();
	
	void set(int* ptr);
private:
	std::vector<int*> m_ptr;
};

C::~C()
{
	for(std::vector<int*>::iterator it=m_ptr.begin();
			it!=m_ptr.end(); ++it)
			{
			}
}

void C::set(int* ptr)
{
	m_ptr.push_back(ptr);
}

int main(int argc, char*argv[])
{
	int* i=new int(5);
	
	C c;
	c.set(i);
	
	return 0;
}