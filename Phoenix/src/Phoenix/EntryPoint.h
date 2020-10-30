#pragma once

#ifdef PX_PLATFORM_WINDOWS

extern Phoenix::Application* Phoenix::CreateApplication();
int main(int argc, char** argv)
{
	printf("-------------------Phoenix Engine-----------------\n ");
	auto app = Phoenix::CreateApplication();
	app->Run();
	delete app;
}
#endif	