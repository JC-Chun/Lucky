#pragma once

#ifdef LC_PLATFORM_WINDOWS

extern Lucky::Application * Lucky::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hello Lucky");
	auto app = Lucky::CreateApplication();
	app->Run();
	delete app;

}
#endif