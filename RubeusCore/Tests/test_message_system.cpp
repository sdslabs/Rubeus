RMessageSystem MessageSystem;
RWindowComponent * GameWindow = new RWindowComponent(
	"Hello World",
	1280, 720,
	EWindowParameters::WINDOWED_MODE,
	EWindowParameters::NON_RESIZABLE_WINDOW,
	1
);

MessageSystem.m_MessageBus.addSystem(GameWindow);
MessageSystem.addMessage(GameWindow, GameWindow, change_window_title, "chal raha hain bro :*)");

RLoaderComponent * loader = new RLoaderComponent();
MessageSystem.m_MessageBus.addSystem(loader);

GameWindow->m_MessageSystem.addMessage(GameWindow, loader, EMessageCode::load_image, "Assets/test8.png");

while(!GameWindow->closed())
{
	GameWindow->clearWindow();

	MessageSystem.evaluateMessages();

	GameWindow->updateWindow();
}

delete loader;
delete GameWindow;
