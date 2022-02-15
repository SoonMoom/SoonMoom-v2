#pragma once
#ifdef SM_PLATFORM_WINDOWS

extern SoonMoom::EngineCore* SoonMoom::CreateApplication();


int main(int argc, char** argv)
{
	auto app = SoonMoom::CreateApplication();
	app->Run();
	delete app;

	return 0;
}
#endif