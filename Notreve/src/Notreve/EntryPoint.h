#pragma once

#ifdef NT_PLATFORM_WINDOWS

extern Notreve::Application* Notreve::CreateApplication();

int main (int argc, char** argv)
{
	
	auto app = Notreve::CreateApplication();
	app->Run();
	delete app;
}

#endif 

