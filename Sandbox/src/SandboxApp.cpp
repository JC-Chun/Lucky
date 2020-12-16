#include <Lucky.h>

class Sandbox : public Lucky::Application
{
public:

	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Lucky::Application* Lucky::CreateApplication()
{
	return new Sandbox();
}