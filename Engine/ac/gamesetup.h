//=============================================================================
//
// Adventure Game Studio (AGS)
//
// Copyright (C) 1999-2011 Chris Jones and 2011-20xx others
// The full list of copyright holders can be found in the Copyright.txt
// file, which is part of this source code distribution.
//
// The AGS source code is provided under the Artistic License 2.0.
// A copy of this license can be found in the file License.txt and at
// http://www.opensource.org/licenses/artistic-license-2.0.php
//
//=============================================================================

#ifndef __AC_GAMESETUP_H
#define __AC_GAMESETUP_H

// game setup, read in from CFG file
// this struct is redefined in acdialog.cpp, any changes might
// need to be reflected there
// [IKM] 2012-06-27: now it isn't
struct GameSetup {
    int digicard,midicard;
    int mod_player;
    int textheight;
    int mp3_player;
    int want_letterbox;
    int windowed;
    int base_width, base_height;
    short refresh;
    char  no_speech_pack;
    char  enable_antialiasing;
    char  force_hicolor_mode;
    char  disable_exception_handling;
    char  enable_side_borders;
    char *data_files_dir;
    char *main_data_filename;
    char *translation;
    char *gfxFilterID;
    char *gfxDriverID;
    GameSetup();
};

#endif // __AC_GAMESETUP_H