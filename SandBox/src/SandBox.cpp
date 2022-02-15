#include <SoonMoomEngine.h>
#include "SandBox.h"

SoonMoom::EngineCore* SoonMoom::CreateApplication()
{
	return new App::SandBox();
}

namespace App
{

}




