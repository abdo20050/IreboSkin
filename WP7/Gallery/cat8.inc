

[cat8Bg]
Meter=Image
SolidColor=0,255,0,1
W=(#galleryW#-320)*#ScaleDpi#
h=(950*#ScaleDpi#)
x=(320*#ScaleDpi#)
Y=0
Group=cat8 | Bye
DynamicVariables=1
Hidden=1
[cat8BgBottom]
Meter=Image
SolidColor=0,255,0,50
W=(#galleryW#-320)*#ScaleDpi#
h=(700*#ScaleDpi#)
x=(320*#ScaleDpi#)
Y=R
Group=cat8 | Bye
DynamicVariables=1
Hidden=1
[cat8Title]
Meter=String
Text="#secretstylesettings#"
Group=cat8 | Bye
MeterStyle=CatHeaderTitle
Y=(-1600*#ScaleDpi#)R



[cat8Subtitle2]
Meter=String
Text=" #NormalColorTR#"
Group=cat8 | Bye
MeterStyle=CatSubTitle
Y=(20*#ScaleDpi#)R



[Hcat8Subtitle2]
Meter=String
Text=" #HoverColorTR#"
Group=cat8 | Bye
MeterStyle=CatSubTitle
Y=r
x=(-80*#ScaleDpi#)R




[Tcat8Subtitle2]
Meter=String
Text=" #TextcolorTR#"
Group=cat8 | Bye
MeterStyle=CatSubTitle
Y=r
x=(-80*#ScaleDpi#)R

[Alphastyl]
H=(25*#ScaleDpi#)
W=(50*#ScaleDpi#)
SolidColor=128,128,128,100

fontcolor=#ttextcolor#
stringalign=centerCenter
antialias=1

[color1]
Meter=Image
SolidColor=#colorskin#
W=(50*#ScaleDpi#)
LeftMouseUpAction=["#ADDONSPATH#RainRGB\RainRGB.exe" "VarName=colorskin" "FileName=#@#Common\Color\color.inc"]
x=(365*#ScaleDpi#)
Y=(125*#ScaleDpi#)
H=(25*#ScaleDpi#)
MouseActionCursor=1
[color1E]
Meter=String
MeterStyle=Alphastyl
Text=#opacity#
x=(440*#ScaleDpi#)
Y=(137*#ScaleDpi#)
LeftMouseUpAction=!CommandMeasure Input "ExecuteBatch 1"
ToolTipText=#opacityTR# 0-255
MouseActionCursor=1
[Input]
Measure=Plugin
Plugin=InputText.dll
x=(415*#ScaleDpi#)
Y=(125*#ScaleDpi#)
H=(25*#ScaleDpi#)
W=(50*#ScaleDpi#)
fontsize=(10*#ScaleDpi#)
FocusDismiss=1
stringalign=center
Command1=[!WriteKeyValue Variables opacity $UserInput$ "#@#Common\Color\color.inc"][!RefreshGroup Panel][!Refresh #CURRENTCONFIG#]
DefaultValue="255"
InputLimit=3
InputNumber=1

[color2]
Meter=Image
SolidColor=#colorskin2#

LeftMouseUpAction=["#ADDONSPATH#RainRGB\RainRGB.exe" "VarName=colorskin2" "FileName=#@#Common\Color\color.inc"]
x=(535*#ScaleDpi#)
Y=(125*#ScaleDpi#)
H=(25*#ScaleDpi#)
W=(50*#ScaleDpi#)
DynamicVariables=1
MouseActionCursor=1

[color2E]
Meter=String
MeterStyle=Alphastyl
Text=#opacity2#
x=(610*#ScaleDpi#)
Y=(137*#ScaleDpi#)
LeftMouseUpAction=!CommandMeasure Input2 "ExecuteBatch 1"
ToolTipText=#opacityTR# 0-255
MouseActionCursor=1
[Input2]
Measure=Plugin
Plugin=InputText.dll
x=(585*#ScaleDpi#)
Y=(125*#ScaleDpi#)
H=(25*#ScaleDpi#)
W=(50*#ScaleDpi#)
fontsize=(10*#ScaleDpi#)
FocusDismiss=1
stringalign=center
Command1=[!WriteKeyValue Variables opacity2 $UserInput$ "#@#Common\Color\color.inc"][!RefreshGroup Panel][!Refresh #CURRENTCONFIG#]
DefaultValue="255"

InputLimit=3
InputNumber=1

[disablehover]
Meter=Image
ImageName=#@#Graphics\Gallery\Color\off.png
x=(635*#ScaleDpi#)
Y=(125*#ScaleDpi#)
LeftMouseUpAction=[!WriteKeyValue Variables colorskin2 #colorskin# "#@#Common\Color\color.inc"][!RefreshGroup Panel][!Refresh #CURRENTCONFIG#]
h=(25*#ScaleDpi#)
DynamicVariables=1
ToolTipText=Disable Hover Color




[Tcolor2]
Meter=Image
SolidColor=#textcolor2#,#paneltitleopacity#
W=(50*#ScaleDpi#)
LeftMouseUpAction=["#ADDONSPATH#RainRGB\RainRGB.exe" "VarName=textcolor2" "FileName=#@#Common\Color\color.inc"]
x=(710*#ScaleDpi#)
Y=(125*#ScaleDpi#)
H=(25*#ScaleDpi#)
MouseActionCursor=1
[Tcolor2E]
Meter=String
MeterStyle=Alphastyl
Text=#PanelTitleOpacity#
x=(785*#ScaleDpi#)
Y=(137*#ScaleDpi#)
LeftMouseUpAction=!CommandMeasure Input3 "ExecuteBatch 1"
ToolTipText=#opacityTR# 0-255
MouseActionCursor=1
[Input3]
Measure=Plugin
Plugin=InputText.dll
x=(760*#ScaleDpi#)
Y=(125*#ScaleDpi#)
H=(25*#ScaleDpi#)
W=(50*#ScaleDpi#)
fontsize=(10*#ScaleDpi#)
FocusDismiss=1
stringalign=center
Command1=[!WriteKeyValue Variables PanelTitleOpacity $UserInput$ "#@#Common\Color\color.inc"][!RefreshGroup Panel][!Refresh #CURRENTCONFIG#]
DefaultValue="255"
InputLimit=3
InputNumber=1




[TEcat8Subtitle2]
Meter=String
Text=" #CenterText#"
Group=cat8 | Bye
MeterStyle=CatSubTitle
Y=(30*#ScaleDpi#)R




[Pcat8Subtitle6]
Meter=String
Text=" Padding"
Group=cat8 | Bye
MeterStyle=CatSubTitle
Y=r
x=(-80*#ScaleDpi#)R



[Pcat8Subtitle9]
Meter=String
Text=" Gradient Angle"
Group=cat8 | Bye
MeterStyle=CatSubTitle
Y=r
x=(-80*#ScaleDpi#)R




[Glass1E]
Meter=Image
solidcolor=#colorskin#
w=(50*#ScaleDpi#)
h=(25*#ScaleDpi#)
x=(365*#ScaleDpi#)
Y=(220*#ScaleDpi#)
Group=Cat6 | Bye
[Glass2E]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#OnOff##centertextOn##ttgallerystyle#.png
Group=Cat6 | Bye
x=(365*#ScaleDpi#)
y=(-25*#ScaleDpi#)R
w=(85*#ScaleDpi#)
LeftMouseUpAction=[!WriteKeyValue Variables xposition 10 "#@#Common\Color\color.inc"][!WriteKeyValue Variables align left "#@#Common\Color\color.inc"][!WriteKeyValue Variables centertextOn 0 "#@#Common\Color\color.inc"][!RefreshGroup Panel][!Refresh #CURRENTCONFIG#]

[Glass3E]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#OnOff##centertextOn##ttgallerystyle#.png
Group=Cat6 | Bye
x=(365*#ScaleDpi#)
y=R
w=(85*#ScaleDpi#)
LeftMouseUpAction=[!WriteKeyValue Variables xposition 2 "#@#Common\Color\color.inc"][!WriteKeyValue Variables align center "#@#Common\Color\color.inc"][!WriteKeyValue Variables centertextOn 1 "#@#Common\Color\color.inc"][!RefreshGroup Panel][!Refresh #CURRENTCONFIG#]






[PaddingE]
Meter=String
MeterStyle=Alphastyl
Text=#Padding#
x=(560*#ScaleDpi#)
Y=(232*#ScaleDpi#)
LeftMouseUpAction=!CommandMeasure Input5 "ExecuteBatch 1"
ToolTipText=0-9
MouseActionCursor=1
[Input5]
Measure=Plugin
Plugin=InputText.dll
x=(535*#ScaleDpi#)
Y=(220*#ScaleDpi#)
H=(25*#ScaleDpi#)
W=(50*#ScaleDpi#)
fontsize=(10*#ScaleDpi#)
FocusDismiss=1
stringalign=center
Command1=[!WriteKeyValue Variables Padding $UserInput$ "#@#Common\Color\color.inc"][!RefreshGroup Panel][!Refresh #CURRENTCONFIG#]
DefaultValue="0"
InputLimit=1
InputNumber=1

[angleE]
Meter=String
MeterStyle=Alphastyl
Text=#Angle#
x=(735*#ScaleDpi#)
Y=(232*#ScaleDpi#)
LeftMouseUpAction=!CommandMeasure Input6 "ExecuteBatch 1"
ToolTipText=0-270
MouseActionCursor=1
[Input6]
Measure=Plugin
Plugin=InputText.dll
x=(710*#ScaleDpi#)
Y=(220*#ScaleDpi#)
H=(25*#ScaleDpi#)
W=(50*#ScaleDpi#)
fontsize=(10*#ScaleDpi#)
FocusDismiss=1
stringalign=center
Command1=[!WriteKeyValue Variables Angle $UserInput$ "#@#Common\Color\color.inc"][!RefreshGroup Panel][!Refresh #CURRENTCONFIG#]
DefaultValue="0"
InputLimit=3
InputNumber=1

[Cat8Subtitle17]
Meter=String
Text=" Panel Shapes (BETA)"
Group=Cat8 | Bye
MeterStyle=CatSubTitle
Y=(280*#ScaleDpi#)

[SolidStyl]
w=(80*#ScaleDpi#)
H=(80*#ScaleDpi#)
Text="  #currentsection#"
x=1R
y=r

solidcolor=0,0,255,1
LeftMouseUpAction=[!WriteKeyValue Variables centertextOn 0 "#@#Common\Color\color.inc"][!WriteKeyValue Variables xposition 10 "#@#Common\Color\color.inc"][!WriteKeyValue Variables align left "#@#Common\Color\color.inc"][!WriteKeyValue Variables PanelTitleOpacity2 "255" "#@#Common\Color\color.inc"][!WriteKeyValue Variables ItemShadowColor "0,0,0,20" "#@#Common\Color\color.inc"][!WriteKeyValue Variables yposition "1.2" "#@#Common\Color\color.inc"][!WriteKeyValue Variables PanelLabels 0 "#@#Common\Color\color.inc"][!WriteKeyValue Variables Structure Structure "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Imagedir #@#Common\Panel\#currentsection# "#@#Common\Color\color.inc"][!RefreshGroup Panel][!Refresh #currentconfig#]

ImageName=#@#\Common\Panel\#currentsection#\btn3.png
imagetint=#colorskin#
MouseOverAction=[!SetOption #CURRENTSECTION# imagetint #colorskin2#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# imagetint #colorskin#][!Update]
MouseActionCursor=1

[Default]
Meter=Image
MeterStyle=SolidStyl
Y=(300*#ScaleDpi#)
x=(360*#ScaleDpi#)


[Blank]
Meter=Image
MeterStyle=SolidStyl
LeftMouseUpAction=[!WriteKeyValue Variables centertextOn 0 "#@#Common\Color\color.inc"][!WriteKeyValue Variables xposition 10 "#@#Common\Color\color.inc"][!WriteKeyValue Variables align left "#@#Common\Color\color.inc"][!WriteKeyValue Variables PanelTitleOpacity2 "1" "#@#Common\Color\color.inc"][!WriteKeyValue Variables ItemShadowColor "0,0,0,1" "#@#Common\Color\color.inc"][!WriteKeyValue Variables yposition "5" "#@#Common\Color\color.inc"][!WriteKeyValue Variables PanelLabels 1 "#@#Common\Color\color.inc"][!WriteKeyValue Variables Imagedir #@#Common\Panel\#currentsection# "#@#Common\Color\color.inc"][!WriteKeyValue Variables globalblurenable 0 "#@#Common\Color\color.inc"][!WriteKeyValue Variables win10blur none "#@#Common\Color\color.inc"][!WriteKeyValue Variables Structure Structure "#@#Common\Variables\UserVariables.inc"][!RefreshGroup Panel][!Refresh #currentconfig#]



[Gradient]
Meter=Image
MeterStyle=SolidStyl
LeftMouseUpAction=[!WriteKeyValue Variables centertextOn 0 "#@#Common\Color\color.inc"][!WriteKeyValue Variables xposition 10 "#@#Common\Color\color.inc"][!WriteKeyValue Variables align left "#@#Common\Color\color.inc"][!WriteKeyValue Variables PanelTitleOpacity2 "255" "#@#Common\Color\color.inc"][!WriteKeyValue Variables ItemShadowColor "0,0,0,20" "#@#Common\Color\color.inc"][!WriteKeyValue Variables yposition "1.2" "#@#Common\Color\color.inc"][!WriteKeyValue Variables PanelLabels 0 "#@#Common\Color\color.inc"][!WriteKeyValue Variables Imagedir #@#Common\Panel\Default "#@#Common\Color\color.inc"][!WriteKeyValue Variables Structure Gradient "#@#Common\Variables\UserVariables.inc"][!RefreshGroup Panel][!Refresh #currentconfig#]
solidcolor=#colorskin#
solidcolor2=#colorskin2#
GradientAngle=#angle#


[Rounded]
Meter=Image
MeterStyle=SolidStyl

[Circle]
Meter=Image
MeterStyle=SolidStyl
LeftMouseUpAction=[!WriteKeyValue Variables centertextOn 1 "#@#Common\Color\color.inc"][!WriteKeyValue Variables xposition 2 "#@#Common\Color\color.inc"][!WriteKeyValue Variables align center "#@#Common\Color\color.inc"][!WriteKeyValue Variables PanelTitleOpacity2 "1" "#@#Common\Color\color.inc"][!WriteKeyValue Variables ItemShadowColor "0,0,0,1" "#@#Common\Color\color.inc"][!WriteKeyValue Variables yposition "5" "#@#Common\Color\color.inc"][!WriteKeyValue Variables PanelLabels 1 "#@#Common\Color\color.inc"][!WriteKeyValue Variables Structure Structure "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Imagedir #@#Common\Panel\#currentsection# "#@#Common\Color\color.inc"][!RefreshGroup Panel][!Refresh #currentconfig#]


[Hexagon]
Meter=Image
MeterStyle=SolidStyl
LeftMouseUpAction=[!WriteKeyValue Variables centertextOn 1 "#@#Common\Color\color.inc"][!WriteKeyValue Variables xposition 2 "#@#Common\Color\color.inc"][!WriteKeyValue Variables align center "#@#Common\Color\color.inc"][!WriteKeyValue Variables PanelTitleOpacity2 "1" "#@#Common\Color\color.inc"][!WriteKeyValue Variables ItemShadowColor "0,0,0,1" "#@#Common\Color\color.inc"][!WriteKeyValue Variables yposition "5" "#@#Common\Color\color.inc"][!WriteKeyValue Variables PanelLabels 1 "#@#Common\Color\color.inc"][!WriteKeyValue Variables Structure Structure "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Imagedir #@#Common\Panel\#currentsection# "#@#Common\Color\color.inc"][!RefreshGroup Panel][!Refresh #currentconfig#]

[Cat8Subtitle9Back]
Meter=String
Text="  #default#"
Group=Cat8 | Bye
stringcase=upper
MeterStyle=CatSubTitle
Y=(40*#ScaleDpi#)R

fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#,200][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables centertextOn 0 "#@#Common\Color\color.inc"][!WriteKeyValue Variables xposition 10 "#@#Common\Color\color.inc"][!WriteKeyValue Variables align left "#@#Common\Color\color.inc"][!WriteKeyValue Variables paneltitleopacity "255" "#@#Common\Color\color.inc"][!WriteKeyValue Variables opacity2 "240" "#@#Common\Color\color.inc"][!WriteKeyValue Variables opacity "240" "#@#Common\Color\color.inc"][!WriteKeyValue Variables colorskin2 "60,60,60" "#@#Common\Color\color.inc"][!WriteKeyValue Variables colorskin "40,40,40" "#@#Common\Color\color.inc"][!WriteKeyValue Variables textcolor2 "240,240,240" "#@#Common\Color\color.inc"][!WriteKeyValue Variables Padding "0" "#@#Common\Color\color.inc"][!WriteKeyValue Variables Angle "0" "#@#Common\Color\color.inc"][!WriteKeyValue Variables PanelTitleOpacity2 "255" "#@#Common\Color\color.inc"][!WriteKeyValue Variables ItemShadowColor "0,0,0,20" "#@#Common\Color\color.inc"][!WriteKeyValue Variables yposition "1.2" "#@#Common\Color\color.inc"][!WriteKeyValue Variables PanelLabels 0 "#@#Common\Color\color.inc"][!WriteKeyValue Variables Structure Structure "#@#Common\Variables\UserVariables.inc"][!WriteKeyValue Variables Imagedir #@#Common\Panel\Default "#@#Common\Color\color.inc"][!RefreshGroup Panel][!Refresh #currentconfig#]

MouseActionCursor=1



[Cat8Subtitle7Back]
Meter=String
Text="  ◀ #ColorsandInterface#"
Group=Cat8 | Bye
MeterStyle=CatSubTitle
Y=(20*#ScaleDpi#)R

fontsize=(10*#ScaleDpi#)
MouseOverAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# fontcolor #TTtextcolor#,200][!Update]
LeftMouseUpAction=[!WriteKeyValue Variables LastCat "cat6" "scroll.inc"][!Refresh]
MouseActionCursor=1




[Mask]
Meter=Image
imagename=#@#\Graphics\Gallery\secret#centertextOn#.png
Y=(300*#ScaleDpi#)
x=(360*#ScaleDpi#)
H=(81*#ScaleDpi#)
imagetint=#textcolor2#,#paneltitleopacity#


