/*
 * CBaseMenu.cpp
 *
 *  Created on: 28.11.2009
 *      Author: gerstrong
 */

#include <base/CInput.h>
#include <base/InputEvents.h>
#include <widgets/GsMenuController.h>

#include "GsBaseMenu.h"
#include "GsBitmapBox.h"

CBaseMenu::CBaseMenu(const GsRect<float>& rect,
                     const CGUIDialog::FXKind fx) :
mpMenuDialog( new CGUIDialog(rect, fx) )
{}


void CBaseMenu::select(const size_t value)
{
	if(value >= mpMenuDialog->getWidgetList().size())
		return;

	for(size_t c=0 ; c<value ; c++)
    {
        std::shared_ptr<CEvent> cmdEvent( new CommandEvent(IC_DOWN) );
        mpMenuDialog->sendEvent(cmdEvent);
    }
}


void CBaseMenu::setMenuLabel(const std::string &label)
{         
    GsRect<float> rect(-0.08f, -0.08f, 1.0f, 1.0f);
    mpMenuDialog->add( new GsBitmapBox(label, rect) );
}

void CBaseMenu::handleInput(const float)
{
    // Command (Keyboard/Joystick) are handled here
    for( int cmd = IC_LEFT ; cmd < MAX_COMMANDS ; cmd++ )
    {
        if( gInput.getPressedCommand(cmd) )
        {
            std::shared_ptr<CEvent> command(
                        new CommandEvent( static_cast<InpCmd>(cmd) ));
            sendEvent(command);
            break;
        }
    }
}

void CBaseMenu::ponder(const float dt)
{
    // If IC_BACK is invoked, make the menu controller close the controller
    if( gInput.getPressedCommand(IC_BACK) )
    {
        gEventManager.add( new CloseMenuEvent(false) );

        return;
    }

    handleInput(dt);

	mpMenuDialog->processLogic();
}


void CBaseMenu::render()
{
    mpMenuDialog->processRendering();
}
