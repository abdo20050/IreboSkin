


[solide]
meter=string
w=(200)*#scaledpi#
h=(80)*#scaledpi#
x=(350)*#scaledpi#
y=(70)*#scaledpi#
solidcolor=0,0,0,1
MouseOverAction=[!ShowMeterGroup SecretSetting][!Redraw]
MouseLeaveAction=[!HideMeterGroup SecretSetting][!Redraw]




[cat7Bg]
Meter=Image
SolidColor=0,255,0,1
W=(#galleryW#-320)*#ScaleDpi#
h=(950*#ScaleDpi#)
x=(320*#ScaleDpi#)
Y=0
Group=cat7 | Bye
DynamicVariables=1
Hidden=1
[cat7BgBottom]
Meter=Image
SolidColor=0,255,0,50
W=(#galleryW#-320)
h=(700*#ScaleDpi#)
x=(320*#ScaleDpi#)
Y=R
Group=cat7 | Bye
DynamicVariables=1
Hidden=1

[cat7Title]
Meter=String
Text="#UnitsDisplayandFonts#"
Group=cat7 | Bye
MeterStyle=CatHeaderTitle
Y=(-1600*#ScaleDpi#)R

[cat7Subtitle1]
Meter=String
Text=" Use C\F Temp unit and 24h\12h Time code"
Group=cat7 | Bye
MeterStyle=CatSubTitle
Y=R

[Metric1]
Meter=Image
solidcolor=#colorskin#
w=(50*#ScaleDpi#)
h=(25*#ScaleDpi#)
x=(360*#ScaleDpi#)
y=R
Group=Cat7 | Bye

[Metric2]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#24mode##ttgallerystyle#.png
Group=Cat7 | Bye
x=(360*#ScaleDpi#)
y=(-25*#ScaleDpi#)R
w=(85*#ScaleDpi#)
LeftMouseUpAction=[!WriteKeyValue Variables 24mode 0 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables DisplayAMPM 1 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables timeformatH 24h "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables timeformatsetting24 off "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables TimeFormat %H:%M "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables ampmextra "0" "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup Time]


[Metric3]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#24mode##ttgallerystyle#.png
Group=Cat7 | Bye
x=(360*#ScaleDpi#)
y=R
w=(85*#ScaleDpi#)
LeftMouseUpAction=[!WriteKeyValue Variables 24mode 1 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables DisplayAMPM 0 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables timeformatH 12h "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables TimeFormat "%I:%M" "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables ampmextra "%p" "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables timeformatsetting24 on "#@#Common\Variables\UserVariables.inc"][!Refresh #CURRENTCONFIG#][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!RefreshGroup Time]

[Metric4]
Meter=Image
solidcolor=#colorskin#
w=(50*#ScaleDpi#)
h=(25*#ScaleDpi#)
x=(360*#ScaleDpi#)
y=R
Group=Cat7 | Bye

[Metric5]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#TempMode##ttgallerystyle#.png
Group=Cat7 | Bye
x=(360*#ScaleDpi#)
y=(-25*#ScaleDpi#)R
w=(85*#ScaleDpi#)
LeftMouseUpAction=[!WriteKeyValue Variables Language "en-GB" "#@#Common\Weather\WeatherComVariables.inc"][!WriteKeyValue Variables TempMode 1 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables TemperatureFormat F "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup Weather]

[Metric6]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#TempMode##ttgallerystyle#.png
Group=Cat7 | Bye
x=(360*#ScaleDpi#)
y=R
w=(85*#ScaleDpi#)
LeftMouseUpAction=[!WriteKeyValue Variables Language "en-GB" "#@#Common\Weather\WeatherComVariables.inc"][!WriteKeyValue Variables TempMode 0 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables TemperatureFormat C "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup Weather]

[cat7Subtitle2]
Meter=String
Text=" #LanguageText#"
Group=cat7 | Bye
MeterStyle=CatSubTitle
Y=(20*#ScaleDpi#)R
[Cat7Subtitle9]
Meter=String
Text="  English"
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=(10*#ScaleDpi#)R
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables MainLanguage English "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Language English "#@#Common\Settings\UserVariables.inc"][!WriteKeyValue Variables Language English "#@#Common\Background\Varrar.inc"][!Delay 1000][!Refresh *][!Refresh #currentconfig#]
MouseActionCursor=1
[Cat7Subtitle10]
Meter=String
Text="  Deutsch"
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=r
X=R
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables MainLanguage German "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Language German "#@#Common\Settings\UserVariables.inc"][!WriteKeyValue Variables Language German "#@#Common\Background\Varrar.inc"][!Delay 1000][!Refresh *][!Refresh #currentconfig#]
MouseActionCursor=1

[Cat7Subtitle11]
Meter=String
Text="  Español"
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=r
X=R
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables MainLanguage Spanish "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Language Spanish "#@#Common\Settings\UserVariables.inc"][!WriteKeyValue Variables Language Spanish "#@#Common\Background\Varrar.inc"][!Delay 1000][!Refresh *][!Refresh #currentconfig#]
MouseActionCursor=1

[Cat7Subtitle12]
Meter=String
Text="  Pусский "
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=r
X=R
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables MainLanguage Russian "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Language Russian "#@#Common\Settings\UserVariables.inc"][!WriteKeyValue Variables Language Russian "#@#Common\Background\Varrar.inc"][!Delay 1000][!Refresh *][!Refresh #currentconfig#]
MouseActionCursor=1


[Cat7Subtitle13]
Meter=String
Text="  Nederlands "
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=(10*#ScaleDpi#)R
X=(360*#ScaleDpi#)
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables MainLanguage Dutch "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Language Dutch "#@#Common\Settings\UserVariables.inc"][!WriteKeyValue Variables Language Dutch "#@#Common\Background\Varrar.inc"][!Delay 1000][!Refresh *][!Refresh #currentconfig#]
MouseActionCursor=1

[Cat7Subtitle14]
Meter=String
Text="  Français "
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=r
X=R
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables MainLanguage French "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Language French "#@#Common\Settings\UserVariables.inc"][!WriteKeyValue Variables Language French "#@#Common\Background\Varrar.inc"][!Delay 1000][!Refresh *][!Refresh #currentconfig#]
MouseActionCursor=1

[Cat7Subtitle15]
Meter=String
Text="  Português "
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=r
X=R
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables MainLanguage Portuguese "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Language Portuguese "#@#Common\Settings\UserVariables.inc"][!WriteKeyValue Variables Language Portuguese "#@#Common\Background\Varrar.inc"][!Delay 1000][!Refresh *][!Refresh #currentconfig#]
MouseActionCursor=1


[Cat7Subtitle16]
Meter=String
Text="  [Help Translate] "
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=r
X=R
W=(80*#ScaleDpi#)
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=["https://poeditor.com/join/project/upp0dfbsjj"]
MouseActionCursor=1
ToolTipTitle=Help Translate
ToolTipText=If you help us translate Omnimo to a new language, we'll give you the Contributor Pack :)
ToolTipWidth=180
[cat7Subtitle3]
Meter=String
Text=" #WeatherCode#"
Group=cat7 | Bye
MeterStyle=CatSubTitle
Y=(23*#ScaleDpi#)R




[WeatherCode1]
Measure=Plugin
Plugin=InputText
SolidColor=255,255,255
SolidColor=240,240,240
FontColor=0,0,0
FontSize=(12*#ScaleDpi#)
FontFace=Seqoe UI
StringStyle=Italic
FontSize=#FontSize#
stringalign=center
x=(365*#ScaleDpi#)
y=(300*#ScaleDpi#)
W=(165*#ScaleDpi#)
H=(30*#ScaleDpi#)
FocusDismiss=1
Command1=[!WriteKeyValue Variables LocationCode $UserInput$ "#@#Common\Weather\WeatherComVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh #CURRENTCONFIG#]
DefaultValue=#LocationCode#
DynamicVariables=1
Group=Cat7 | Bye
[WeatherCode2]
Meter=String
x=(365*#ScaleDpi#)
y=(300*#ScaleDpi#)
W=(165*#ScaleDpi#)
H=(30*#ScaleDpi#)
Group=cat7 | Bye
StringAlign=left
SolidColor=220,220,220
FontColor=0,0,0
fontsize=(12*#ScaleDpi#)
FontFace=#FontTypeWP#
Antialias=1
Text=#LocationCode#
LeftMouseUpAction=!CommandMeasure "WeatherCode1" "ExecuteBatch 1"
Group=Cat7 | Bye
Hidden=1
[Cat7Subtitle4]
Meter=String
Text="  #HowToFindWeather#"
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=(15*#ScaleDpi#)R
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=[https://www.yahoo.com/news/weather]["https://i.imgur.com/JwwXetb.png"]
MouseActionCursor=1

[cat7Subtitle5]
Meter=String
Text=" #DPIScalingText#"
Group=cat7 | Bye
MeterStyle=CatSubTitle
Y=(20*#ScaleDpi#)R
[100percent]
Meter=String
MeterStyle=WebShortcut
Group=Cat7 | Bye
x=(360*#ScaleDpi#)
Y=(20*#ScaleDpi#)R
w=(50*#ScaleDpi#)
Text="  100%"
fontsize=(10*#ScaleDpi#)
stringalign=leftcenter
fontcolor=#ttextcolor#
LeftMouseUpAction=[!WriteKeyValue Variables ScaleDpi 1 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh *]
[150percent]
Meter=String
MeterStyle=WebShortcut
Group=Cat7 | Bye
w=(75*#ScaleDpi#)
X=1R
Text="   150%"
fontsize=(14*#ScaleDpi#)
stringalign=leftcenter
fontcolor=#ttextcolor#
LeftMouseUpAction=[!WriteKeyValue Variables ScaleDpi "1.5" "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh *]
ToolTipText=WARNING: Selecting this option on a small display may ruin the Omnimo configuration
[200percent]
Meter=String
MeterStyle=WebShortcut
Group=Cat7 | Bye
w=(100*#ScaleDpi#)
X=1R
fontsize=(18*#ScaleDpi#)
Text="   200%"
stringalign=leftcenter
fontcolor=#ttextcolor#
LeftMouseUpAction=[!WriteKeyValue Variables ScaleDpi 2 "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables LastCat "cat7" "scroll.inc"][!Refresh *]
ToolTipText=WARNING: Selecting this option on a small display may ruin the Omnimo configuration




[Cat7Subtitle7]
Meter=String
Text="  #ChangeFontStyles#"
Group=Cat7 | Bye
MeterStyle=CatSubTitle
Y=5R
fontcolor=#lighttextcolor#
fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
LeftMouseUpAction=!ToggleConfig "#ROOTCONFIG#\Gallery\Color\TT" "font.ini"
MouseActionCursor=1

@Include7=#@#Common\Weather\WeatherComVariables.inc



[SecretSetting1]
Group=SecretSetting
Meter=String
Text=#timeformatH#
MeterStyle=CatSubTitle
x=(475)*#scaledpi#
y=(120)*#scaledpi#
MouseActionCursor=1
Hidden=1
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]

[SecretSetting2]
Group=SecretSetting
Meter=String
Text=" #TemperatureFormat#"
MeterStyle=CatSubTitle
x=(475)*#scaledpi#
y=(10*#scaledpi#)R
MouseActionCursor=1
Hidden=1
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #lighttextcolor#][!Update]
