//*****************************************************************************
// Languages.h
//*****************************************************************************

#ifndef LANGUAGES_H
#define LANGUAGES_H

#include <stdint.h>

//*****************************************************************************
// Globale Definitionen
//*****************************************************************************

enum eFrontCover : uint8_t
{
  FRONTCOVER_DE_DE,     //00
  FRONTCOVER_DE_SW,     // 1
  FRONTCOVER_DE_BA,     // 2
  FRONTCOVER_DE_SA,     // 3
  FRONTCOVER_D3,        // 4
  FRONTCOVER_CH_BE,     // 5
  FRONTCOVER_CH_ZH,     // 6
  FRONTCOVER_CH_AG,     // 7
  FRONTCOVER_CH_GR,     // 8
  FRONTCOVER_GR_MLX,    // 9
  FRONTCOVER_GR_LXM,    //10
  FRONTCOVER_GR_LXMb,   //11
  FRONTCOVER_GR_LXMc,   //12
  FRONTCOVER_GR_TMLX,   //13
  FRONTCOVER_GR_TLXM,   //14
  FRONTCOVER_GR_TLXMb,  //15
  FRONTCOVER_GR_TLXMc,  //16
  FRONTCOVER_EN,        //17
  FRONTCOVER_ES,        //18
  FRONTCOVER_FR,        //19
  FRONTCOVER_IT,        //20
  FRONTCOVER_SD,        //21
  FRONTCOVER_NL,        //22
  FRONTCOVER_SW,        //23
  FRONTCOVER_BINARY,    
  FRONTCOVER_COUNT      
};

const char sLanguageStr[][20] PROGMEM =
{
  { "German" },            // 00
  { "German SW" },         // 01
  { "German BA" },         // 02
  { "German SA" },         // 03
  { "German Schwaebisch"}, // 04
  { "Swiss German BE" },   // 05
  { "Swiss German ZH" },   // 06
  { "Swiss German LU" },   // 07
  { "Swiss German GR" },   // 08
  { "Romontsch S MLX" },   // 09
  { "Romontsch S LXM" },   // 10
  { "Romontsch S LXMb" },  // 11
  { "Romontsch S LXMc" },  // 12
  { "Romontsch S TMLX" },  // 13
  { "Romontsch S TLXM" },  // 14
  { "Romontsch S TLXMb" }, // 15
  { "Romontsch S TLXMc" }, // 16
  { "English" },           // 17
  { "Spanish" },           // 18
  { "French" },            // 19
  { "Italian" },           // 20
  { "Sardinia" },          // 21
  { "Dutch" },             // 22
  { "Swedish" },           // 23
  { "Binary" }             // 24
};

extern eFrontCover currentFrontcover;

const char sWeekdayTable[][8][2] PROGMEM = {
  // FRONTCOVER_CH_BE, CH_ZH, CH_AG, CH_GR → Index 0
  {
    { ' ', ' ' }, // 00
    { 'S', 'U' }, // 01
    { 'M', 'E' }, // 02
    { 'Z', 'I' }, // 03
    { 'M', 'I' }, // 04
    { 'D', 'O' }, // 05
    { 'F', 'R' }, // 06
    { 'S', 'A' }  // 07
  },
  // FRONTCOVER_DE_DE,DE_SW, DE_BA, DE_SA, D3  → Index 1
  { { ' ', ' ' }, // 00
    { 'S', 'O' }, // 01
    { 'M', 'O' }, // 02
    { 'M', 'I' }, // 03
    { 'D', 'O' }, // 04
    { 'F', 'R' }, // 05
    { 'S', 'A' }, // 06
    { 'S', 'O' }  // 07
  },
  // FRONTCOVER_GR_MLX, GR_LXM, GR_LXMb, GR_LXMc, GR_TMLX, GR_TLXM, GR_TLXMb, GR_TLXMc → Index 2
  { { ' ', ' ' }, // 00
    { 'D', 'U' }, // 01
    { 'G', 'L' }, // 02
    { 'M', 'A' }, // 03
    { 'M', 'E' }, // 04
    { 'G', 'I' }, // 05
    { 'V', 'E' }, // 06
    { 'S', 'O' }  // 07
                     },
  // FRONTCOVER_EN → Index 3
  { { ' ', ' ' }, // 00
    { 'S', 'U' }, // 01
    { 'M', 'O' }, // 02
    { 'T', 'U' }, // 03
    { 'W', 'E' }, // 04
    { 'T', 'H' }, // 05
    { 'F', 'R' }, // 06
    { 'S', 'A' }  // 07
                       },
  // FRONTCOVER_FR → Index 4
  {
    { ' ', ' ' }, // 00
    { 'D', 'I' }, // 01
    { 'L', 'U' }, // 02
    { 'M', 'A' }, // 03
    { 'M', 'E' }, // 04
    { 'J', 'E' }, // 05
    { 'V', 'E' }, // 06
    { 'S', 'A' }  // 07
                       },
  // FRONTCOVER_IT  → Index 5
  {
    { ' ', ' ' }, // 00
    { 'D', 'O' }, // 01
    { 'L', 'U' }, // 02
    { 'M', 'A' }, // 03
    { 'M', 'E' }, // 04
    { 'G', 'I' }, // 05
    { 'V', 'E' }, // 06
    { 'S', 'A' }  // 07
                       },
  // FRONTCOVER_ES  → Index 6
  {
    { ' ', ' ' }, // 00
    { 'D', 'O' }, // 01
    { 'L', 'U' }, // 02
    { 'M', 'A' }, // 03
    { 'M', 'I' }, // 04
    { 'J', 'U' }, // 05
    { 'V', 'I' }, // 06
    { 'S', 'A' }  // 07
                     },
  //FRONTCOVER_NL  → Index 7
  {
    { ' ', ' ' }, // 00
    { 'Z', 'O' }, // 01
    { 'M', 'A' }, // 02
    { 'D', 'I' }, // 03
    { 'W', 'O' }, // 04
    { 'D', 'O' }, // 05
    { 'V', 'R' }, // 06
    { 'Z', 'A' }  // 07
                     }
   };

// 🔹 Funktionsdeklaration
uint8_t getWeekdayTableIndex(eFrontCover cover);

#ifdef LANGUAGE_EN
const char sColorStr[][15] PROGMEM =
{
  "White",
  "Red",
  "Red 75%",
  "Red 20%",
  "Orange",
  "Yellow",
  "Yellow 25%",
  "Yellow 50%",
  "Green-Yellow",
  "Green",
  "Green 25%",
  "Green 50%",
  "Mintgreen",
  "Cyan",
  "Cyan 25%",
  "Cyan 50%",
  "Light Blue",
  "Blue",
  "Blue 25%",
  "Blue 50%",
  "Purple",
  "Magenta",
  "Magenta 25%",
  "Magenta 50%",
  "Pink",
  "Mood"
};
#define LANGSTR "en"
#define TXT_404 "404 – There's nothing to see here."
#define TXT_SETTINGS "Settings"
#define TXT_ALARM "Alarm"
#define TXT_ON "on"
#define TXT_OFF "off"
#define TXT_HOURBEEP "Hourly beep"
#define TXT_TIMER "Timer"
#define TXT_MINUTES "minutes"
#define TXT_COLOR "Color"
#define TXT_COLORCHANGE "Color change"
#define TXT_BRIGHTNESS "Brightness"
#define TXT_SHOW_TEMP "Show temperature"
#define TXT_AUTO_BRIGHTNESS "Auto brightness"
#define TXT_TRANSITION "Transition animation"
#define TXT_TIMEOUT "Back to clock timeout"
#define TXT_NIGHT_OFF "Switch off at"
#define TXT_DAY_ON "Switch on at"
#define TXT_PURIST_MODE "Purist Mode" 
#define TXT_SHOW_GSI "Show \"GSI\""
#define TXT_SET_DATE_TIME "Set date/time"
#define TXT_ACTIVE "Active"
#define TXT_DATE "Date"
#define TXT_TEXT "Text"
#define TXT_ANIMATION "Animation"
#define TXT_REP_RATE "Repetition rate"
#define TXT_ADMIN "Admin"
#define TXT_TIME_SERVER "Time Server URL"
#define TXT_OW_API_KEY "OpenWeather API Key"
#define TXT_OW_LOCATION "OpenWeather Location"
#define TXT_NOTHING "off"
#define TXT_COVER_LANGUAGE "Language/Dialect"
#define TXT_EVENT "Event"
#define TXT_COLOR_EVENT "ticker color"
#define TXT_EVENT_CONFIRM "Changes have been saved."
#define TXT_EVENT_REDIRECT "You will be redirected to the homepage shortly…"
#define TXT_LDR_COLUMN "Light Sensor Column No."
#define TXT_LDR_ROW "Light Sensor Row No."
#endif

#ifdef LANGUAGE_DE
const char sColorStr[][15] PROGMEM =
{
  "Weiss",
  "Rot",
  "Rot 75%",
  "Rot 20%",
  "Orange",
  "Gelb",
  "Gelb 25%",
  "Gelb 50%",
  "Gr&uuml;n-Gelb",
  "Gr&uuml;n",
  "Gr&uuml;n 25%",
  "Gr&uuml;n 50%",
  "Mintgr&uuml;n",
  "Cyan",
  "Cyan 25%",
  "Cyan 50%",
  "Hellblau",
  "Blau",
  "Blau 25%",
  "Blau 50%",
  "Violett",
  "Magenta",
  "Magenta 25%",
  "Magenta 50%",
  "Pink",
  "Mood"
};
#define LANGSTR "de"
#define TXT_404 "404 – Hier gibt’s leider nichts zu sehen."
#define TXT_SETTINGS "Einstellungen"
#define TXT_ALARM "Wecker"
#define TXT_ON "ein"
#define TXT_OFF "aus"
#define TXT_HOURBEEP "Stundenalarm"
#define TXT_TIMER "Timer"
#define TXT_MINUTES "Minuten"
#define TXT_COLOR "Farbe"
#define TXT_COLORCHANGE "Farbwechsel"
#define TXT_BRIGHTNESS "Helligkeit"
#define TXT_SHOW_TEMP "Temperaturanzeige"
#define TXT_AUTO_BRIGHTNESS "Auto. Helligkeit"
#define TXT_TRANSITION "Animation für Übergänge"
#define TXT_TIMEOUT "Zurück zur Zeitanzeige nach"
#define TXT_NIGHT_OFF "Ausschalten um"
#define TXT_DAY_ON "Einschalten um"
#define TXT_PURIST_MODE " \"ES IST\" Anzeigen" 
#define TXT_SHOW_GSI "\"GSI\" anzeigen"
#define TXT_SET_DATE_TIME "Datum/Zeit setzen"
#define TXT_ACTIVE "Aktiv"
#define TXT_DATE "Datum"
#define TXT_TEXT "Text"
#define TXT_ANIMATION "Animation"
#define TXT_REP_RATE "Wiederholrate"
#define TXT_ADMIN "Admin"
#define TXT_TIME_SERVER "Zeitserver"
#define TXT_OW_API_KEY "OpenWeather API Key"
#define TXT_OW_LOCATION "OpenWeather Standort"
#define TXT_COVER_LANGUAGE "Sprache/Dialekt"
#define TXT_NOTHING "aus"
#define TXT_NOTHING_TR "aus"
#define TXT_EVENT "Event"
#define TXT_COLOR_EVENT "Farbe Laufschrift"
#define TXT_EVENT_CONFIRM "Die Änderungen wurden gespeichert."
#define TXT_EVENT_REDIRECT "Du wirst in Kürze zur Startseite weitergeleitet…"
#define TXT_MOOD "Mood"
#define TXT_FADING "Fading"
#define TXT_MOVE "Move"
#define TXT_MATRIX "Matrix"
#define TXT_LDR_COLUMN "Spalte"
#define TXT_LDR_ROW "Reihe"
#endif

#ifdef LANGUAGE_RM
const char sColorStr[][15] PROGMEM =
{
  "alv",
  "tgietschen",
  "tgietschen 75%",
  "tgietschen 20%",
  "oransch",
  "mellen",
  "mellen 25%",
  "mellen 50%",
  "mellen-verd",
  "verd",
  "verd 25%",
  "verd 50%",
  "menta",
  "cyan",
  "cyan 25%",
  "cyan 50%",
  "clarblau",
  "blau",
  "blau 25%",
  "blau 50%",
  "violett",
  "magenta",
  "magenta 25%",
  "magenta 50%",
  "rosa",
  "Mood"
};
#define LANGSTR "RM"
#define TXT_404 "404 - Cheu ei buca quei che ti encueras"
#define TXT_SETTINGS "Drizzar"
#define TXT_ALARM "svegliarin"
#define TXT_ON "gie"
#define TXT_OFF "na"
#define TXT_HOURBEEP "Stundenalarm"
#define TXT_TIMER "Timer"
#define TXT_MINUTES "minutas"
#define TXT_COLOR "colur:"
#define TXT_COLORCHANGE "interval da midar colur:"
#define TXT_BRIGHTNESS "clarezia manual:"
#define TXT_SHOW_TEMP "indicaziun temperatura:"
#define TXT_AUTO_BRIGHTNESS "clarezia automatic:"
#define TXT_TRANSITION "transiziun:"
#define TXT_TIMEOUT "mussar puspei il temps suenter:"
#define TXT_NIGHT_OFF "tschentar ora:"
#define TXT_DAY_ON "tschentar en:"
#define TXT_PURIST_MODE "mussar \"IGL EI\":" 
#define TXT_SHOW_GSI "\"GSI\" anzeigen"
#define TXT_SET_DATE_TIME "drizzar manualmein datum e temps:"
#define TXT_ACTIVE "activau:"
#define TXT_DATE "datum:"
#define TXT_TEXT "text:"
#define TXT_ANIMATION "animaziun:"
#define TXT_REP_RATE "repeter mintga:"
#define TXT_ADMIN "administraziun"
#define TXT_TIME_SERVER "NTP Server"
#define TXT_OW_API_KEY "OpenWeather API Key"
#define TXT_OW_LOCATION "OpenWeather Standort"
#define TXT_COVER_LANGUAGE "variaziun lungatg"
#define TXT_NOTHING "negin"
#define TXT_NOTHING_TR "negina"
#define TXT_EVENT "Eveniment"
#define TXT_COLOR_EVENT "colur text current"
#define TXT_EVENT_CONFIRM "Las midadas ein vegnidas arcunau."
#define TXT_EVENT_REDIRECT "Ti vegns gleiti menaus sin la pagina principala..."
#define TXT_MOOD "dinamic"
#define TXT_FADING "surpustar"
#define TXT_MOVE "muentar"
#define TXT_MATRIX "matrix"
#define TXT_LDR_COLUMN "Retscha"
#define TXT_LDR_ROW "Lingia"
#endif

#ifdef LANGUAGE_FR
const char sColorStr[][15] PROGMEM =
{
  "White",
  "Red",
  "Red 75%",
  "Red 20%",
  "Orange",
  "Yellow",
  "Yellow 25%",
  "Yellow 50%",
  "Green-Yellow",
  "Green",
  "Green 25%",
  "Green 50%",
  "Mintgreen",
  "Cyan",
  "Cyan 25%",
  "Cyan 50%",
  "Light Blue",
  "Blue",
  "Blue 25%",
  "Blue 50%",
  "Purple",
  "Magenta",
  "Magenta 25%",
  "Magenta 50%",
  "Pink",
  "Mood"
};
#define LANGSTR "fr"
#define TXT_SETTINGS "Param�tres"
#define TXT_ALARM "R�veil"
#define TXT_ON "on"
#define TXT_OFF "off"
#define TXT_HOURBEEP "Alarme heure"
#define TXT_TIMER "Minuteur"
#define TXT_MINUTES "Minutes"
#define TXT_COLOR "Coleur"
#define TXT_COLORCHANGE "Color change"
#define TXT_BRIGHTNESS "Brightness"
#define TXT_SHOW_TEMP "Show temperature"
#define TXT_AUTO_BRIGHTNESS "Auto brightness"
#define TXT_TRANSITION "Transition animation"
#define TXT_TIMEOUT "Back to clock timeout"
#define TXT_NIGHT_OFF "Switch off at"
#define TXT_DAY_ON "Switch on at"
#define TXT_PURIST_MODE "Purist Mode"
#define TXT_SHOW_GSI "Show \"GSI\""
#define TXT_SET_DATE_TIME "Set date/time"
#define TXT_ACTIVE "Active"
#define TXT_DATE "Date"
#define TXT_TEXT "Text"
#define TXT_ANIMATION "Animation"
#define TXT_REP_RATE "Repetition rate"
#define TXT_ADMIN "Admin"
#define TXT_TIME_SERVER "Time Server URL"
#define TXT_OW_API_KEY "OpenWeather API Key"
#define TXT_OW_LOCATION "OpenWeather Location"
#define TXT_COVER_LANGUAGE "Language/Dialect"
#define TXT_LDR_COLUMN "Light Sensor Column No."
#define TXT_LDR_ROW "Light Sensor Row No."
#endif

#ifdef LANGUAGE_IT
const char sColorStr[][15] PROGMEM =
{
  "White",
  "Red",
  "Red 75%",
  "Red 20%",
  "Orange",
  "Yellow",
  "Yellow 25%",
  "Yellow 50%",
  "Green-Yellow",
  "Green",
  "Green 25%",
  "Green 50%",
  "Mintgreen",
  "Cyan",
  "Cyan 25%",
  "Cyan 50%",
  "Light Blue",
  "Blue",
  "Blue 25%",
  "Blue 50%",
  "Purple",
  "Magenta",
  "Magenta 25%",
  "Magenta 50%",
  "Pink",
  "Mood"
};

#define LANGSTR "it"
#define TXT_SETTINGS "Settings"
#define TXT_ALARM "Alarm"
#define TXT_ON "on"
#define TXT_OFF "off"
#define TXT_HOURBEEP "Hourly beep"
#define TXT_TIMER "Timer"
#define TXT_MINUTES "minutes"
#define TXT_COLOR "Colori"
#define TXT_COLORCHANGE "Color Change"
#define TXT_BRIGHTNESS "Brightness"
#define TXT_SHOW_TEMP "Show temperature"
#define TXT_AUTO_BRIGHTNESS "Auto brightness"
#define TXT_TRANSITION "Transition animation"
#define TXT_TIMEOUT "Back to clock timeout"
#define TXT_NIGHT_OFF "Switch off at"
#define TXT_DAY_ON "Switch on at"
#define TXT_PURIST_MODE "Purist Mode" 
#define TXT_SHOW_GSI "Show \"GSI\""
#define TXT_SET_DATE_TIME "Set date/time"
#define TXT_ACTIVE "Active"
#define TXT_DATE "Date"
#define TXT_TEXT "Text"
#define TXT_ANIMATION "Animation"
#define TXT_REP_RATE "Repetition rate"
#define TXT_ADMIN "Admin"
#define TXT_TIME_SERVER "Time Server URL"
#define TXT_OW_API_KEY "OpenWeather API Key"
#define TXT_OW_LOCATION "OpenWeather Location"
#define TXT_COVER_LANGUAGE "Language/Dialect"
#define TXT_LDR_COLUMN "Light Sensor Column No."
#define TXT_LDR_ROW "Light Sensor Row No."
#endif

#ifdef LANGUAGE_ES
const char sColorStr[][15] PROGMEM =
{
  "White",
  "Red",
  "Red 75%",
  "Red 20%",
  "Orange",
  "Yellow",
  "Yellow 25%",
  "Yellow 50%",
  "Green-Yellow",
  "Green",
  "Green 25%",
  "Green 50%",
  "Mintgreen",
  "Cyan",
  "Cyan 25%",
  "Cyan 50%",
  "Light Blue",
  "Blue",
  "Blue 25%",
  "Blue 50%",
  "Purple",
  "Magenta",
  "Magenta 25%",
  "Magenta 50%",
  "Pink",
  "Mood"
};
#define LANGSTR "es"
#define TXT_SETTINGS "Settings"
#define TXT_ALARM "Alarm"
#define TXT_ON "on"
#define TXT_OFF "off"
#define TXT_HOURBEEP "Hourly beep"
#define TXT_TIMER "Timer"
#define TXT_MINUTES "minutes"
#define TXT_COLOR "Color"
#define TXT_COLORCHANGE "Color Change"
#define TXT_BRIGHTNESS "Brightness"
#define TXT_SHOW_TEMP "Show temperature"
#define TXT_AUTO_BRIGHTNESS "Auto brightness"
#define TXT_TRANSITION "Transition animation"
#define TXT_TIMEOUT "Back to clock timeout"
#define TXT_NIGHT_OFF "Switch off at"
#define TXT_DAY_ON "Switch on at"
#define TXT_PURIST_MODE "Purist Mode"
#define TXT_SHOW_GSI "Show \"GSI\""
#define TXT_SET_DATE_TIME "Set date/time"
#define TXT_ACTIVE "Active"
#define TXT_DATE "Date"
#define TXT_TEXT "Text"
#define TXT_ANIMATION "Animation"
#define TXT_REP_RATE "Repetition rate"
#define TXT_ADMIN "Admin"
#define TXT_TIME_SERVER "Time Server URL"
#define TXT_OW_API_KEY "OpenWeather API Key"
#define TXT_OW_LOCATION "OpenWeather Location"
#define TXT_COVER_LANGUAGE "Language/Dialect"
#define TXT_LDR_COLUMN "Light Sensor Column No."
#define TXT_LDR_ROW "Light Sensor Row No."
#endif

#ifdef LANGUAGE_NL
const char sColorStr[][15] PROGMEM =
{
  "White",
  "Red",
  "Red 75%",
  "Red 20%",
  "Orange",
  "Yellow",
  "Yellow 25%",
  "Yellow 50%",
  "Green-Yellow",
  "Green",
  "Green 25%",
  "Green 50%",
  "Mintgreen",
  "Cyan",
  "Cyan 25%",
  "Cyan 50%",
  "Light Blue",
  "Blue",
  "Blue 25%",
  "Blue 50%",
  "Purple",
  "Magenta",
  "Magenta 25%",
  "Magenta 50%",
  "Pink",
  "Mood"
};
#define LANGSTR "nl"
#define TXT_SETTINGS "Settings"
#define TXT_ALARM "Alarm"
#define TXT_ON "on"
#define TXT_OFF "off"
#define TXT_HOURBEEP "Hourly beep"
#define TXT_TIMER "Timer"
#define TXT_MINUTES "minutes"
#define TXT_COLOR "Color"
#define TXT_COLORCHANGE "Color Change"
#define TXT_BRIGHTNESS "Brightness"
#define TXT_SHOW_TEMP "Show temperature"
#define TXT_AUTO_BRIGHTNESS "Auto brightness"
#define TXT_TRANSITION "Transition animation"
#define TXT_TIMEOUT "Back to clock timeout"
#define TXT_NIGHT_OFF "Switch off at"
#define TXT_DAY_ON "Switch on at"
#define TXT_PURIST_MODE "Purist Mode"
#define TXT_SHOW_GSI "Show \"GSI\""
#define TXT_SET_DATE_TIME "Set date/time"
#define TXT_ACTIVE "Active"
#define TXT_DATE "Date"
#define TXT_TEXT "Text"
#define TXT_ANIMATION "Animation"
#define TXT_REP_RATE "Repetition rate"
#define TXT_ADMIN "Admin"
#define TXT_TIME_SERVER "Time Server URL"
#define TXT_OW_API_KEY "OpenWeather API Key"
#define TXT_OW_LOCATION "OpenWeather Location"
#define TXT_COVER_LANGUAGE "Language/Dialect"
#define TXT_LDR_COLUMN "Light Sensor Column No."
#define TXT_LDR_ROW "Light Sensor Row No."
#define TXT_NOTHING "negin"
#define TXT_NOT "negina"
#endif

//*****************************************************************************
// Ende des Header Guards
//*****************************************************************************
#endif // LANGUAGES_H
