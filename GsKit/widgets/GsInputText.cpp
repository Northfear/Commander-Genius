/*
 * CGUIInputText.cpp
 *
 *  Created on: 25.03.2012
 *      Author: gerstrong
 */

#include "GsInputText.h"
#include <graphics/GsGraphics.h>
#include <base/CInput.h>
#include <base/video/CVideoDriver.h>
#include <base/GsTimer.h>

#ifdef ANDROID
#if SDL_VERSION_ATLEAST(2, 0, 0)
#else
#include <SDL_screenkeyboard.h>
#endif
#endif


constexpr int MAX_TICK = 32; // Units in a logical loop
constexpr int MAX_INPUT_TEXT_SIZE = 20;


CGUIInputText::CGUIInputText(const std::string& text,
                             const int fontID) :
GsButton(text,
         nullptr,
         fontID)
{}

CGUIInputText::CGUIInputText(const std::string& text,
                             const GsRect<float> &rect,
                             const int fontID) :
GsButton(text,rect, nullptr, fontID)
{}


void CGUIInputText::processLogic()
{
	if(!mEnabled)
		return;

	// process the typing here!
	if(mTyping)
	{
        auto appText = mOrigText;

		if(gInput.getPressedIsTypingKey())
		{
            if(appText.size() < MAX_INPUT_TEXT_SIZE)
            {
                std::string c = gInput.getPressedTypingKey();

                appText.append(c);
                setText(appText);
            }
		}

        if(appText.length() > 0)
        {
            if(gInput.getPulsedKey(KBCKSPCE, 5))
            {
                appText.erase(appText.length()-1);
                setText(appText);
            }

            if(gInput.getPressedKey(KENTER) ||
               gInput.getPressedCommand(IC_JUMP) ||
               gInput.getPressedCommand(IC_STATUS) )
            {
                activateFunction();
            }
        }

        if(gInput.getPressedCommand(IC_BACK))
        {
            setTypeMode(false);
            mTick = false;
        }


        // Ticking cursor
        if(mTypeTick%MAX_TICK == 0)
        {
            mTick = !mTick;
            GsButton::setText(mTick ? mOrigText : mTextWithCursor);
        }

        mTypeTick++;
	}


    GsButton::processLogic();
}


void CGUIInputText::setText(const std::string& text)
{
    mOrigText = text;
    mTextWithCursor = text + "|";
    GsButton::setText(text);
}


void CGUIInputText::setTypeMode( const bool value )
{
#ifdef ANDROID
#if SDL_VERSION_ATLEAST(2, 0, 0)
#else
	if(!mTyping && value)
	{
		// Invoke Android native text edit field with on-screen keyboard
		char buf[256]; // it must be 256 for SDL_ANDROID_ToggleScreenKeyboardTextInput
		strncpy(buf, mText.c_str(), sizeof(buf));
		buf[sizeof(buf) - 1] = 0;
		SDL_ANDROID_ToggleScreenKeyboardTextInput(buf);
		mText.clear();		
	}
#endif
#endif

	mTyping = value;
}
