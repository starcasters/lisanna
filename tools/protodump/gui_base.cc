#include <windows.h>
#include "gui_base.h"

int WINAPI GuiStart(HANDLE hInst)          // Start window maximized, minimized, etc.
{

	HINSTANCE hInstance = (HINSTANCE)hInst; 
    WNDCLASS wc;
    wc.cbClsExtra = 0;  // ignore for now
    wc.cbWndExtra = 0;  // ignore for now
    wc.hbrBackground = (HBRUSH) GetStockObject(WHITE_BRUSH);   // I want the window to have a white background
    wc.hCursor = LoadCursor( NULL, IDC_ARROW );            // I want it to have an arrow for a cursor
    wc.hIcon = LoadIcon( NULL, IDI_APPLICATION );        // I want it to have that envelope like icon
    wc.hInstance = hInstance;           // INSTANCE HANDLE -- see the GLOSSARY PART of this file for an explanation of what HINSTANCE is
    wc.lpfnWndProc = WndProc;           // Give name of WndProc function here.
    wc.lpszClassName = TEXT("#hktool_1");  // I have named it Philip.
                                        // You could name it anything
                                        // you want, but you have to
                                        // remember the name for when
                                        // you call CreateWindow().
    wc.lpszMenuName = 0;    // no menu - ignore
    wc.style = CS_HREDRAW | CS_VREDRAW; // Redraw the window

    RegisterClass( &wc );
	

    HWND hwnd = CreateWindow(
        TEXT("#hktool_1"),         // THIS IS THE LINK
                                // to the WNDCLASS structure that
                                // we created earlier.

        TEXT("window's title!"),// appears in title of window

        WS_OVERLAPPEDWINDOW,    // STYLE of window.  WS_OVERLAPPEDWINDOW just means
                                // the window we create should have a few common features
                                // like a minimize box, a maximize box, and it should
                                // be resizeable by dragging the "thick frame" around
                                // the window. There are other styles
                                // and they all start with WS_.  Check it out in the
                                // autocomplete by typing WS_ THEN PRESSING CTRL+SPACE
                                // to make the autocomplete window come up.
        10, 10,                 // x, y start coordinates of window
        200, 200,               // width, height of window
        NULL, NULL,             // nothing and nothing (ignore to start out)
        hInstance, NULL );      // hInstance -- (see glossary), nothing

	 CreateWindowEx(0,                    ///* more or ''extended'' styles */
                         "BUTTON",                         //* GUI ''class'' to create */
                         "click",                        //* GUI caption */
                         WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON,   //* control styles separated by | */
                         10,                                     //* LEFT POSITION (Position from left) */
                         10,                                     //* TOP POSITION  (Position from Top) */
                         100,                                    //* WIDTH OF CONTROL */
                         30,                                     //* HEIGHT OF CONTROL */
                         hwnd,                                   //* Parent window handle */
                         (HMENU__*)1,                        	 //* control''s ID for WM_COMMAND */
                         hInstance,                              //* application instance */
                         NULL);
		
    ShowWindow(hwnd, 1 );
    UpdateWindow(hwnd);

/*
    MSG msg;
    while( GetMessage( &msg, NULL, 0, 0 ) )
    {

        TranslateMessage( &msg );   // translates

        DispatchMessage( &msg );    // this line RESULTS IN
        // a call to WndProc(), passing the message and
        // the HWND.

    }

    return msg.wParam;    // return from WinMain
*/
	return 0;
}

LRESULT CALLBACK WndProc(   HWND hwnd,      // "handle" to the window that this message is for
                            UINT message,   // TYPE of message (e.g. WM_PAINT is a message asking to paint the window)
                            WPARAM wparam,  // information about the actual message
                            LPARAM lparam ) // MORE info about the message
{

    switch( message )
    {
    case WM_CREATE:
        // upon creation, let the speaker beep at 50Hz, for 10ms.
        Beep( 50, 10 );
        return 0;
        break;


    case WM_PAINT:
        {
            // we would place our Windows painting code here.
            HDC hdc;
            PAINTSTRUCT ps;
            hdc = BeginPaint( hwnd, &ps );
			TextOut(hdc, 0, 0, "Hello, Windows!", 15); 
            // draw a circle and a 2 squares

            EndPaint( hwnd, &ps );
        }
        return 0;
        break;
	case WM_COMMAND:
		if ((wparam & 0xffff) == 1) {
			onClick1();
		}
		return 0;
		break;
    case WM_DESTROY:
        PostQuitMessage( 0 ) ;
		TerminateProcess(GetCurrentProcess(),0);
		return 0;
        break;

    }


    return DefWindowProc( hwnd, message, wparam, lparam );
}
