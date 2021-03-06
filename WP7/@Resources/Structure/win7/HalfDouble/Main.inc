[Variables]
TypeW=2
TypeH=0.5
PaddingW=15
PaddingH=0



[bg]
Meter=Image
ImageName=#Imagedir#\btn3.png
X=(5-#Padding#)
Y=(5-#Padding#)
W=(#Height#*2+10+(#Padding#*2))*#ScaleDpi#
H=(#Height#/2-(5-#Padding#)+(#Padding#))*#ScaleDpi#
ImageTint=#colorskin#,#opacity#
ScaleMargins=10,10,10,10

[btn]
Meter=Image
ImageName=#Imagedir#\btn3.png
X=(5-#Padding#)
Y=(5-#Padding#)
W=(#Height#*2+10+(#Padding#*2))*#ScaleDpi#
H=(#Height#/2-(5-#Padding#)+(#Padding#))*#ScaleDpi#
ImageTint=#colorskin2#,#opacity2#
ScaleMargins=10,10,10,10
Hidden=1

[overlay]
Meter=Image
ImageName=#@#Common\OverlayBorder\#overlay##padding#.png
W=(#Height#*2+20)*#ScaleDpi#
H=(#Height#/2+5)*#ScaleDpi#
x=0
y=0
ScaleMargins=10,10,10,10

[TextStyle]
X=(#Height#+(#Height#/12+5))*#ScaleDpi#
Y=(#Height#/10+5)*#ScaleDpi#
StringAlign=CENTER
FontFace=#fonttype#
FontColor=#textcolor2#,#PanelTitleOpacity#
FontSize=(#height#/7)*#ScaleDpi#
StringEffect=#Shadow#
FontEffectColor=#ItemShadowColor#,#ItemShadowOpacity#
AntiAlias=1
LeftMouseUpAction=["#PanelAction#"]
solidcolor=0,0,0,1

[FullTextStyle]
X=(#Height#/30+5)
StringAlign=LEFT
Y=(#Height#/30+5)
W=(#Height#*2)*#ScaleDpi#
ClipString=1
H=(#Height#/3)*#ScaleDpi#
MeterStyle=DriveText
FontColor=#TextColor2#,#paneltitleopacity#
FontSize=(#Height#/15-#Height#/150)
FontFace=#fonttype#
Antialias=1

[IconStyle]
X=(#Height#/12+5)*#ScaleDpi#
Y=(#Height#/12)*#ScaleDpi#+5
W=(#Height#/3)*#ScaleDpi#
ImageTint=#textcolor2#,#paneltitleopacity#
AntiAlias=1

[IconStyle2]
ImageTint=#textcolor2#,#paneltitleopacity#
[FullStyle]
X=(5-#Padding#)
Y=(5-#Padding#)
W=(#Height#*2+10+(#Padding#*2))*#ScaleDpi#
H=(#Height#/2-(5-#Padding#)+(#Padding#))*#ScaleDpi#
AntiAlias=1