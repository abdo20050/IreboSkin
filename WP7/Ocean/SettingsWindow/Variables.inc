[Variables]


; Shorthand bangs and abbreviations
A=!ActivateConfig
S=!SetOptionGroup
SO=!SetOption
SV=!SetVariable
U=!UpdateMeasureGroup
UM=!UpdateMeasure
W=!WriteKeyValue

MA=MatchActions
WV=WriteVariableRounded
V=Variables


; Default audio settings
DefAverageSize=0
DefLoudnessEqualization=1
DefFFTSize=10240
DefFFTOverlap=(#**FFTSize**#-256)
DefFFTAttack=0
DefFFTDecay=300
DefFreqMin=20
DefFreqMax=20000
DefSensitivity=17


; Substitute patterns based on the active type of Setting

StateSubstitute="1":"Display","2":"Audio","3":"Extras","4":"","5":""
SetHeaderTabNames=[#SO# HeaderTab1 Text "Display"][#SO# HeaderTab2 Text "Audio"][#SO# HeaderTab3 Text "Extras"][#SO# HeaderTab4 Text " "][#SO# HeaderTab5 Text " "]

; Name of variable written to file
Var///1="Display":"Bands","Audio":"-1","Extras":"-1"
Var///2="Display":"Width","Audio":"Sensitivity","Extras":"-1"
Var///3="Display":"Height","Audio":"FFTAttack","Extras":"-1"
Var///4="Display":"-1","Audio":"FFTDecay","Extras":"-1"
Var///5="Display":"Angle","Audio":"AverageSize","Extras":"-1"
Var///6="Display":"-1","Audio":"FreqMin","Extras":"-1"
Var///7="Display":"-1","Audio":"FreqMax","Extras":"-1"
Var///8="Display":"LineWidth","Audio":"-1","Extras":"-1"
Var///9="Display":"-1","Audio":"-1","Extras":"-1"
Var///10="Display":"-1","Audio":"-1","Extras":"-1"
Var///11="Display":"-1","Audio":"-1","Extras":"-1"
Var///12="Display":"-1","Audio":"-1","Extras":"-1"
Var///13="Display":"-1","Audio":"-1","Extras":"-1"

; Calc measure MaxValue for Bar meters
CalcMV///1="Display":"128","Audio":"-1","Extras":"-1"
CalcMV///2="Display":"#WORKAREAWIDTH#","Audio":"60","Extras":"-1"
CalcMV///3="Display":"#WORKAREAHEIGHT#","Audio":"500","Extras":"-1"
CalcMV///4="Display":"-1","Audio":"500","Extras":"-1"
CalcMV///5="Display":"360","Audio":"8","Extras":"-1"
CalcMV///6="Display":"-1","Audio":"320","Extras":"-1"
CalcMV///7="Display":"-1","Audio":"24000","Extras":"-1"
CalcMV///8="Display":"32","Audio":"-1","Extras":"-1"
CalcMV///9="Display":"-1","Audio":"-1","Extras":"-1"
CalcMV///10="Display":"-1","Audio":"-1","Extras":"-1"
CalcMV///11="Display":"-1","Audio":"-1","Extras":"-1"
CalcMV///12="Display":"-1","Audio":"-1","Extras":"-1"
CalcMV///13="Display":"-1","Audio":"-1","Extras":"-1"

; LeftMouseDownAction for String meters
StringLMDA///1="Audio":'[#W# #V# LoudnessEqualization "(#LoudnessEqualization# = 0 ? 1 : 0)" "#@##V#.inc"]',"Extras":'[#A# "#ROOTCONFIG#\Ocean\Clone"]'
StringLMDA///2="Extras":'[#A# "#ROOTCONFIG#\Ocean\Clone_2"]'
StringLMDA///3=
StringLMDA///4=
StringLMDA///5=
StringLMDA///6="Display":'[#W# #V# Invert "(#Invert# = 0 ? 1 : 0)" "#@##V#.inc"][#W# #V# Invert "(#Invert# = 0 ? 1 : 0)" "#ConfigPath#"]'
StringLMDA///7="Display":'[#W# #V# LineOnly "(#LineOnly# = 0 ? 1 : 0)" "#@##V#.inc"][#W# #V# LineOnly "(#LineOnly# = 0 ? 1 : 0)" "#ConfigPath#"]'
StringLMDA///8="Audio":'[#A# "#ROOTCONFIG#\Ocean\SettingsMisc" "AudioFFTSize.ini"]'
StringLMDA///9="Audio":'[#A# "#ROOTCONFIG#\Ocean\SettingsMisc" "AudioChannel.ini"]'
StringLMDA///10="Audio":'[#A# "#ROOTCONFIG#\Ocean\SettingsMisc" "AudioMusicPlayer.ini"]'
StringLMDA///11="Audio":'[#W# #V# Port #*PortVariable*# "#@##V#.inc"][#W# #V# Port #*PortVariable*# "#ConfigPath#"]'
StringLMDA///12="Audio":'[#A# "#ROOTCONFIG#\Ocean\SettingsMisc" "AudioDeviceList.ini"]'
StringLMDA///13="Audio":'[#W# #V# AverageSize #DefAverageSize# "#@##V#.inc"][#W# #V# LoudnessEqualization #DefLoudnessEqualization# "#@##V#.inc"][#W# #V# FFTSize #DefFFTSize# "#@##V#.inc"][#W# #V# FFTOverlap """"#DefFFTOverlap#"""" "#@##V#.inc"][#W# #V# FFTAttack #DefFFTAttack# "#@##V#.inc"][#W# #V# FFTDecay #DefFFTDecay# "#@##V#.inc"][#W# #V# FreqMin #DefFreqMin# "#@##V#.inc"][#W# #V# FreqMax #DefFreqMax# "#@##V#.inc"][#W# #V# Sensitivity #DefSensitivity# "#@##V#.inc"]'

; Display text
Text///1="Display":"Number of peaks: #Bands#","Audio":"#LoudnessEqualization#  Loudness equalization","Extras":"Show duplicate skin...","1  Loudness equalization":"☑  Loudness equalization","#LoudnessEqualization#  Loudness equalization":"☐  Loudness equalization"
Text///2="Display":"Width: #Width# px","Audio":"Sensitivity: #Sensitivity# dB","Extras":"Show duplicate skin (2)..."
Text///3="Display":"Height: #Height# px","Audio":"Attack speed: #FFTAttack# ms","Extras":""
Text///4="Display":"Color:","Audio":"Decay speed: #FFTDecay# ms","Extras":""
Text///5="Display":"Rotation angle: #Angle#°","Audio":"Smoothness: #AverageSize# past values","Extras":"","1 past values":"1 past value"
Text///6="Display":"#Invert#  Invert spectrum","Audio":"Min frequency: #FreqMin# Hz","Extras":"","1  Invert spectrum":"☑  Invert spectrum","#Invert#  Invert spectrum":"☐  Invert spectrum"
Text///7="Display":"#LineOnly#  Line only","Audio":"Max frequency: #FreqMax# Hz","Extras":"","1  Line only":"☑  Line only","#LineOnly#  Line only":"☐  Line only"
Text///8="Display":"Line width: #LineWidth# px","Audio":"Resolution: #FFTSize# points  ▼","Extras":""
Text///9="Display":"","Audio":"Channel: #Channel#  ▼","Extras":""
Text///10="Display":"","Audio":"Music player: #MusicPlayer#  ▼","Extras":""
Text///11="Display":"","Audio":"Switch to #Port#...","Extras":"","Output":"input","Input":"output"
Text///12="Display":"","Audio":"Set audio device...","Extras":""
Text///13="Display":"","Audio":"Reset audio settings...","Extras":""

; Help text
HelpText///1="Display":"Number of audio bands. Higher values increases precision.","Audio":"Increases visibility for quiet audio sources when applicable.","Extras":"Show a skin clone with separate source options."
HelpText///2="Display":"Spectrum width.","Audio":"Spectrum visibility based on sound level threshold.","Extras":"Show another skin clone with separate source options."
HelpText///3="Display":"Spectrum height.","Audio":"Determines how fast the peaks rise.","Extras":" "
HelpText///4="Display":"Change skin color.","Audio":"Determines how fast the peaks fall.","Extras":" "
HelpText///5="Display":"Spectrum rotation angle. Use scroll-wheel for precision.","Audio":"Average sound levels over time to provide continuity.","Extras":" "
HelpText///6="Display":"Reverses the order of the peaks.","Audio":"Threshold for lowest pitched sounds.","Extras":" "
HelpText///7="Display":"Hides the body below the curve.","Audio":"Threshold for highest pitched sounds.","Extras":" "
HelpText///8="Display":"Thickness of the curve. Note: '0' can cause visible pixelation.","Audio":"Spectrum accuracy. Note: Higher values will increase delay.","Extras":" "
HelpText///9="Display":" ","Audio":"Speaker source.","Extras":" "
HelpText///10="Display":" ","Audio":"Note: When the player is open, all sounds will be displayed.","Extras":" "
HelpText///11="Display":" ","Audio":"Switch between your microphone or speakers.","Extras":" "
HelpText///12="Display":" ","Audio":"Select another audio device.","Extras":" "
HelpText///13="Display":" ","Audio":"Reset audio settings to the default values.","Extras":" "


; Rounding options based on the active type of Setting and Section
RoundDisplay0.1=[#SO# #WV# IfCondition "(#***Section***# = 5)"]
RoundDisplayWidthHeight=[#SO# #WV# IfCondition2 "((#***Section***# = 2) || (#***Section***# = 3))"][#SO# #WV# IfTrueAction2 """[#SO# WriteVariable Formula "Round([****#WV#****] / 10) * 10"]"""]
RoundDisplayAngle=[#SO# #WV# IfCondition3 "(#***Section***# = 5)"][#SO# #WV# IfTrueAction3 """[#SO# WriteVariable OnChangeAction """[#W# #V# [///#****Section****#] [****WriteVariable****] "#@##V#.inc"][#W# #V# [///#****Section****#] [****WriteVariable****] "#ConfigPath#"]"""]"""]
RoundDisplayBands=[#SO# #WV# IfCondition4 "(#***Section***# = 1)"][#SO# #WV# IfTrueAction4 """[#SO# WriteVariable OnChangeAction """[#W# #V# [///#****Section****#] [****WriteVariable****] "#@##V#.inc"][#A# "#ROOTCONFIG#\Ocean\GenerateBands"]"""]"""]
RoundDisplayFinal=[#SO# #WV# IfCondition5 "(#WV# >= 0)"][#SO# #WV# IfTrueAction5 """[#UM# WriteVariable]"""]

RoundDisplay=#RoundDisplay0.1##RoundDisplayWidthHeight##RoundDisplayAngle##RoundDisplayBands##RoundDisplayFinal#


; Extra bangs to modify the Settings window based on the active type of Setting

DisplayBangs=#RoundDisplay##DisplayBangsRotation#[#SO# "4" X 16R][#SO# "4" Y 2r][#SO# "4" W 16][#SO# "4" H 16][#SO# "4" SolidColor #Color#][#SO# "4" LeftMouseUpAction """[!WriteKeyValue Variables WriteVariable Color "#@#Variables.inc"][!ActivateConfig "#ROOTCONFIG#\Ocean\RGBCode"][!Move "(#**CURRENTCONFIGX**# + [#***CURRENTSECTION***#:X])" "(#**CURRENTCONFIGY**# + [#***CURRENTSECTION***#:Y] + 24)" "#ROOTCONFIG#\Ocean\RGBCode"]"""]

DisplayBangsRotation=[#SO# "5" MouseScrollDownAction """#DisplayBangsRotationMSDA#"""][#SO# "5" MouseScrollUpAction """#DisplayBangsRotationMSUA#"""]
DisplayBangsRotationMSDA=[#W# #V# Angle "(#Angle# - 0.1 < 0 ? 360 : #Angle# - 0.1)" "#@##V#.inc"][#W# #V# Angle "(#Angle# - 0.1 < 0 ? 360 : #Angle# - 0.1)" "#ConfigPath#"][!Refresh]
DisplayBangsRotationMSUA=[#W# #V# Angle "(#Angle# + 0.1 > 360 ? 0 : #Angle# + 0.1)" "#@##V#.inc"][#W# #V# Angle "(#Angle# + 0.1 > 360 ? 0 : #Angle# + 0.1)" "#ConfigPath#"][!Refresh]

AudioBangs=[#SO# #MA# String "#Port#"][#UM# #MA#][#SO# #MA# IfMatch "Output"][#SO# #MA# IfMatchAction """[#SV# PortVariable "Input"]"""][#SO# #MA# IfMatch2 "Input"][#SO# #MA# IfMatchAction2 """[#SV# PortVariable "Output"]"""][#UM# #MA#]

ExtrasBangs=

IfMatchDisplay=[#SO# #MA# IfMatch "Display"][#SO# #MA# IfMatchAction """#DisplayBangs#"""]
IfMatchAudio=[#SO# #MA# IfMatch2 "Audio"][#SO# #MA# IfMatchAction2 """#AudioBangs#"""]
IfMatchExtras=[#SO# #MA# IfMatch3 "Extras"][#SO# #MA# IfMatchAction3 """#ExtrasBangs#"""]
SetOptionsByState=[#SO# #MA# String [StateReference]][#UM# #MA#]#IfMatchDisplay##IfMatchAudio##IfMatchExtras#[#UM# #MA#]
