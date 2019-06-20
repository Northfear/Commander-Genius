/*
 * CGUINumberControl.h
 *
 *  Created on: 06.03.2012
 *      Author: gerstrong
 */

#ifndef CGUINUMBERCONTROL_H_
#define CGUINUMBERCONTROL_H_

#include "GsWidgetsManager.h"
#include "GsButton.h"
#include "GsText.h"

#include <string>
#include <graphics/GsSurface.h>

class CGUINumberControl : public GsWidgetsManager
{
public:

    CGUINumberControl(const std::string& text,
                      const GsRect<float> &rect,
                      const int startValue,
                      const int endValue,
                      const int deltaValue,
                      const int value,
                      const int fontid,
                      const bool slider);


	void increment();
	void decrement();

	bool sendEvent(const InputCommand command);

	int getSelection();
	void setSelection( const int value );

    void processLogic();

    std::string sliderStr();

	void processRender(const GsRect<float> &RectDispCoordFloat);

protected:
    bool mIncSel = false;
    bool mDecSel = false;

    GsSurface mTextLightSfcR;
    GsSurface mTextLightSfcL;

    int mValue = 0;
    const bool mSlider = false;


    const int mStartValue = 0;
    const int mEndValue = 0;
    bool mMustRedraw = true;

private:

	const int mDeltaValue;

	static int mTwirliconID;    


    std::shared_ptr<GsButton> mpLeftButton;
    std::shared_ptr<CGUIText> mpCtrlName;
    std::shared_ptr<CGUIText> mpCtrlValue;
    std::shared_ptr<GsButton> mpRightButton;
};

#endif /* CGUINUMBERCONTROL_H_ */
