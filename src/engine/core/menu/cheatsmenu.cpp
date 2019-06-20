#include "cheatsmenu.h"

#include "engine/core/CBehaviorEngine.h"


CheatsMenu::CheatsMenu(const Style style) :
GameMenu(GsRect<float>(0.075f, 0.24f, 0.85f, 0.4f), style )
{
    mpJumpSwitch =
        mpMenuDialog->addWidget( new Switch( "Fly Mode", style ) );

    mpGodSwitch =
        mpMenuDialog->addWidget( new Switch( "God Mode", style ) );

    mpNoClipSwitch =
        mpMenuDialog->addWidget( new Switch( "No Clipping", style ) );

    mpItemsSwitch =
        mpMenuDialog->addWidget( new Switch( "Free items", style ) );

    mpMenuDialog->fit();
}

void CheatsMenu::refresh()
{
    // TODO: More Cheats!!    
    mpJumpSwitch->enable( gBehaviorEngine.mCheatmode.jump );
    mpGodSwitch->enable( gBehaviorEngine.mCheatmode.god );
    mpNoClipSwitch->enable( gBehaviorEngine.mCheatmode.noclipping );
    mpItemsSwitch->enable( gBehaviorEngine.mCheatmode.items );
}


void CheatsMenu::release()
{
    gBehaviorEngine.mCheatmode.jump = mpJumpSwitch->isEnabled();
    gBehaviorEngine.mCheatmode.god = mpGodSwitch->isEnabled();
    gBehaviorEngine.mCheatmode.noclipping = mpNoClipSwitch->isEnabled();
    gBehaviorEngine.mCheatmode.items = mpItemsSwitch->isEnabled();
}

