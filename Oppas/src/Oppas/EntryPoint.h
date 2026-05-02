#pragma once


#ifdef OP_PLATFORM_WINDOWS

extern Oppas::Application* Oppas::CreateApplication();


int main(int argc, char** argv)
{
	printf("Oppas Engine\n");
	auto app = Oppas::CreateApplication();
	app->Run();
	delete app;
}

#endif