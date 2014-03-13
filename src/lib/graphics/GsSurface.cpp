
#include <base/utils/Geometry.h>

#include "GsSurface.h"


GsRect<Uint16> GsWeakSurface::calcBlitRect(const GsRect<float> &rect)
{
    GsRect<Uint16> absRect(0, 0, mpSurface->w, mpSurface->h);

    absRect.transform(rect);
    return absRect;
}


void GsWeakSurface::drawRect(const GsRect<Uint16> &rect,
                         const int thickness,
                         const Uint32 contourColor )
{
    GsRect<Uint16> contRect = rect;

    // Upper side contour
    contRect.h = thickness;
    fill(contRect, contourColor);

    // Left side contour
    contRect.y = rect.y + thickness;
    contRect.w = thickness;
    contRect.h = rect.h - (2 * thickness);
    fill(contRect, contourColor);

    // Right side contour
    contRect.x = rect.x + rect.w - thickness;
    fill(contRect, contourColor);


    // Lower side contour
    contRect.x = rect.x;
    contRect.y = rect.y + rect.h - thickness;
    contRect.w = rect.w;
    contRect.h = thickness;
    fill(contRect, contourColor);
}



void GsWeakSurface::drawFrameRect(const GsRect<Uint16> &rect,
              const int thickness,
              const Uint32 contourColor)
{
    // Create the proper rect for all this
    GsRect<Uint16> fillRect = rect;

    drawRect( fillRect, thickness, contourColor );

}


void GsWeakSurface::drawRect(const GsRect<Uint16> &rect,
                         const int thickness,
                         const Uint32 contourColor,
                         const Uint32 fillColor )
{        
    // Create the proper rect for all this
    GsRect<Uint16> fillRect = rect;

    drawFrameRect(rect, thickness, contourColor);

    fillRect.x += thickness;
    fillRect.y += thickness;
    fillRect.w -= (2*thickness);
    fillRect.h -= (2*thickness);

    fill(fillRect, fillColor);
}

