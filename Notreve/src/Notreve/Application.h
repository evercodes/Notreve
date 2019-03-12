#pragma once

#include "Core.h"

namespace Notreve {

	class  NOTREVE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run ();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}