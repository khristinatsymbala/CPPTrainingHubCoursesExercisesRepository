#pragma once

namespace ly
{
	class Application;
	class World
	{
	public:
		/*So, this code shows an example of using namespaces to organize code and ensure 
		interaction between classes.
		*/
		World(Application* owningApp);

		void BeginPlayInternal();
		void TickInternal(float deltaTime);

		virtual ~World();
	private:
		void BeginPlay();
		void Tick(float deltaTime);
		Application* mOwningApp;
		bool mBeginPlay{};
	};

	
}