#include <Oppas.h>

class Sandbox : public Oppas::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Oppas::Application* Oppas::CreateApplication()
{
	return new Sandbox();
}