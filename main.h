#pragma once

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX

#include <d3d11_1.h>
#include <dxgi1_2.h>
#include <windows.h>
#include <MMSystem.h>

#ifdef USE_DINPUT8
#define DIRECTINPUT_VERSION 0x0800
#else
#define DIRECTINPUT_VERSION 0x0700
#endif
#include <dinput.h>
#include <dsound.h>

#ifdef _DEBUG
#define D3D_DEBUG_INFO
#endif
#include <d3d9.h>

//#include <richedit.h>
//#include <atlcom.h>
#include <atlbase.h>
//#include <atlhost.h>
#include <atlctl.h>
//#include <assert.h>

//#include <commctrl.h>

//#include "stdio.h"
//#include "wchar.h"

#include <OLEAUTO.h>

#include <wincrypt.h>

#include <intrin.h>
#include <xmmintrin.h>

#include <vector>
#include <string>
#include <algorithm>
using std::string;
using std::vector;

#include "HELPERS.H"

#include "def.h"

#include "math/math.h"
#include "math/vector.h"
#include "math/matrix.h"
#include "math/bbox.h"

#include "resource.h"

#include "Scintilla.h"
#include "scilexer.h"

#include "memutil.h"
#include "disputil.h"

#include "dispid.h"

#include "variant.h"
#include "vector.h"
#include "vectorsort.h"
#include "vpinball_i.h"
#include "regutil.h"

#include "IDebug.h"

#include "EventProxy.h"

#include "worker.h"

#include "XAudPlayer.h"
#include "media/FileIO.h"
#include "PinUndo.h"
#include "ISelect.h"

#include "IEditable.h"
#include "PropBrowser.h"
#include "CodeView.h"

#include "media/lzwreader.h"
#include "media/lzwwriter.h"

#include "media/wavread.h"

#include "PinInput.h"
#include "PinSound.h"
#include "PinBinary.h"

#include "VPinball.h"
#include "PinTable.h"

#include "Mesh.h"
#include "pin/collide.h"
#include "Pin3D.h"

#include "sur.h"
#include "paintsur.h"
#include "hitsur.h"
#include "hitrectsur.h"

#include "BallEx.h"

#include "pin/collideex.h"
#include "pin/ball.h"
#include "pin/hittimer.h"
#include "pin/hitable.h"
#include "pin/hitflipper.h"
#include "pin/hitplunger.h"
#include "pin/player.h"

#include "color.h"

#include "DragPoint.h"
#include "timer.h"
#include "surface.h"
#include "flipper.h"
#include "plunger.h"
#include "textbox.h"
#include "dispreel.h"
#include "lightseq.h"
#include "bumper.h"
#include "Trigger.h"
#include "Light.h"
#include "Kicker.h"
#include "Decal.h"
#include "Primitive.h"
#include "hittarget.h"
#include "Gate.h"
#include "Spinner.h"
#include "Ramp.h"
#include "flasher.h"
#include "rubber.h"
#include "mixer.h"
#include "hid.h"
#include "plumb.h"

#include "kdtree.h"

#include "wintimer.h"

#include "slintf.h"
#include "trace.h"

#include "extern.h"

#include "editablereg.h"

__forceinline float getBGxmult()
{
   return (float)g_pplayer->m_width * (float)(1.0 / EDITOR_BG_WIDTH)
      * (g_pplayer->m_pin3d.m_AAfactor);
}

__forceinline float getBGymult()
{
   return getBGxmult() /
      (((float)g_pplayer->m_screenwidth / (float)g_pplayer->m_screenheight) / (float)((double)EDITOR_BG_WIDTH / EDITOR_BG_HEIGHT));
}
