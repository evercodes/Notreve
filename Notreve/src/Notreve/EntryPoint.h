#pragma once

#ifdef NT_PLATFORM_WINDOWS

extern Notreve::Application* Notreve::CreateApplication();

int main (int argc, char** argv)
{
	
	Notreve::Log::Init();

	NT_CORE_WARN("Initialized Log!");
	int a = 15;
	NT_INFO("Hello! Var={0}",a);

	auto app = Notreve::CreateApplication();
	app->Run();
	delete app;
}

#endif 

