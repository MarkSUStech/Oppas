#pragma once

#include "Core.h"

namespace Oppas {
	class OPPAS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

//To define in the client
	Application* CreateApplication();
}


