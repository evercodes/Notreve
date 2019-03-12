
#include <Notreve.h>


class Sandbox : public Notreve::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Notreve::Application* Notreve::CreateApplication()
{
	return new Sandbox();
}

