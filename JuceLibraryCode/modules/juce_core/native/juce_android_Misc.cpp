/*
  ==============================================================================

   This file is part of the JUCE library - "Jules' Utility Class Extensions"
   Copyright 2004-11 by Raw Material Software Ltd.

  ------------------------------------------------------------------------------

   JUCE can be redistributed and/or modified under the terms of the GNU General
   Public License (Version 2), as published by the Free Software Foundation.
   A copy of the license is included in the JUCE distribution, or can be found
   online at www.gnu.org/licenses.

   JUCE is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
   A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

  ------------------------------------------------------------------------------

   To release a closed-source product which uses JUCE, commercial licenses are
   available: visit www.rawmaterialsoftware.com/juce for more information.

  ==============================================================================
*/

void Logger::outputDebugString (const String& text)
{
    __android_log_print (ANDROID_LOG_INFO, "JUCE", text.toUTF8());
}

String LocalisedStrings::getUserLocale()
{
    //java.util.Locale userLocale = java.util.Locale.getDefault();
    // We want locale names localized to US English
    //String language (userLocale.getDisplayLanguage (java.util.Locale.US));
    //String country (userLocale.getDisplayCountry (java.util.Locale.US));
    return (/*language + */"-"/* + country*/);
}
