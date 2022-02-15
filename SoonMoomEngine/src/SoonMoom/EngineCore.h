#pragma once
#include "core.h"



namespace SoonMoom
{
	class SoonMoom_API EngineCore
	{
	public:
		EngineCore();
		~EngineCore();
		void Run();

	};

	//Define in Client
	EngineCore* CreateApplication();
}