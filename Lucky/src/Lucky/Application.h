#pragma once

namespace Lucky {

	class __declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	// To be defined in CLIENT 
	Application* CreateApplication();

}
