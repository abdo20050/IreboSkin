; =================================================
; @Include template file to populate all
; Current day Weather information from Weather.com
;==================================================


[@MeasureLocation]
Measure=WebParser
Url=#URL#
RegExp=#Location#
UpdateRate=600
LogSubstringErrors=0
DecodeCharacterReference=1
FinishAction=[!EnableMeasureGroup Location][!UpdateMeasureGroup Location][!UpdateMeterGroup Location][!Redraw]

[@MeasureCountry]
Measure=WebParser
Url=[@MeasureLocation]
StringIndex=1
Group=Location
Disabled=1

[@MeasureCity]
Measure=WebParser
Url=[@MeasureLocation]
StringIndex=2
Group=Location
Disabled=1

[@MeasureCurrentWeather]
Measure=WebParser
Url=#URL#
RegExp=#CurrentWeather#
UpdateRate=600
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup Current][!UpdateMeasureGroup Current][!UpdateMeterGroup Current][!Redraw]

[MeasurePress]
Measure=WebParser
Url=[@MeasureCurrentWeather]
StringIndex=1
Group=Current
Disabled=1

[@MeasurePressMbar]
Measure=Calc
Formula=(MeasurePress/0.029530)
Group=Current
Disabled=1

[MeasureTemp]
Measure=WebParser
Url=[@MeasureCurrentWeather]
StringIndex=4
Group=Current
Disabled=1

[@MeasureTempCelsius]
Measure=Calc
Formula=#TempMode#=0?((5/9)*(MeasureTemp-32)):MeasureTemp
Group=Current
Disabled=1

[MeasureFeelsLike]
Measure=WebParser
Url=[@MeasureCurrentWeather]
StringIndex=7
Group=Current
Disabled=1

[@MeasureFeelsLikeCelsius]
Measure=Calc
Formula=Round((5/9)*(MeasureFeelsLike-32))
Group=Current
Disabled=1

[@MeasureHumid]
Measure=WebParser
Url=[@MeasureCurrentWeather]
StringIndex=8
Group=Current
Disabled=1

[@MeasurePP]
Measure=WebParser
Url=[@MeasureCurrentWeather]
StringIndex=9
Group=Current
Disabled=1

[@MeasureUV]
Measure=WebParser
Url=[@MeasureCurrentWeather]
StringIndex=10
;Substitute=#UVLevel#
Group=Current
Disabled=1

[@MeasureUVindex]
Measure=WebParser
Url=[@MeasureCurrentWeather]
StringIndex=11
Group=Current
Disabled=1

[MeasureVisib]
Measure=WebParser
Url=[@MeasureCurrentWeather]
StringIndex=12
Group=Current
Disabled=1

[@MeasureVisibKm]
Measure=Calc
Formula=(MeasureVisib*1.609344)
Group=Current
Disabled=1

[@MeasureWindDir]
Measure=WebParser
Url=[@MeasureCurrentWeather]
StringIndex=13
RegExpSubstitute=1
Substitute=#windDir#
Group=Current
Disabled=1

[MeasureWindSpeed]
Measure=WebParser
Url=[@MeasureCurrentWeather]
StringIndex=14
Group=Current
Disabled=1

[@MeasureWindSpeedKmh]
Measure=Calc
Formula=(MeasureWindSpeed*1.609344)
Group=Current
Disabled=1

[@MeasureCurrentCond]
Measure=WebParser
Url=#URL#
RegExp=#CurrentCondition#
UpdateRate=600
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup CurrentCond][!UpdateMeasureGroup CurrentCond][!UpdateMeterGroup CurrentCond][!Redraw]

[@MeasureIcon]
Measure=WebParser
Url=[@MeasureCurrentCond]
StringIndex=2
Group=CurrentCond
Disabled=1

[@MeasureCond]
Measure=WebParser
Url=[@MeasureCurrentCond]
StringIndex=1
Substitute=#Conditions#
Group=CurrentCond
Disabled=1

[@MeasureSUN]
Measure=WebParser
Url=#URL#
RegExp=#SUN#
UpdateRate=600
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup SUN][!UpdateMeasureGroup SUN]

[@MeasureSunrise]
Group=SUN
Measure=WebParser
Url=[@MeasureSUN]
StringIndex=1
Disabled=1

[@MeasureSunrise24H]
Group=SUN
Measure=Time
TimeStamp=[@MeasureSunrise]
Format=%#I:%M %p
DynamicVariables=1
Disabled=1

[@MeasureSunset]
Group=SUN
Measure=WebParser
Url=[@MeasureSUN]
StringIndex=2
Disabled=1

[@MeasureSunset24H]
Group=SUN
Measure=Time
TimeStamp=[@MeasureSunset]
Format=%#I:%M %p
DynamicVariables=1
Disabled=1

[@MeasureForecast]
Measure=WebParser
Url=#URL#
RegExp=#Forecast#
UpdateRate=600
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup Forecast][!UpdateMeasureGroup Forecast][!UpdateMeterGroup Forecast][!Redraw]

[MeasureFTmax1]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=3
Disabled=1

[@MeasureFTmax1Celsius]
Group=Forecast
Measure=Calc
Formula=#TempMode#=0?Round((5/9)*(MeasureFTmax1-32)):MeasureFTmax1
Disabled=1

[MeasureFTmin1]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=4
Disabled=1

[@MeasureFTmin1Celsius]
Group=Forecast
Measure=Calc
Formula=#TempMode#=0?Round((5/9)*(MeasureFTmin1-32)):MeasureFTmin1
Disabled=1

[@MeasureFDay1]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=5
RegExpSubstitute=1
Substitute="^(.*)T.*$":"\1"
Disabled=1

[@MeasureFDay1Format]
Group=Forecast
Measure=Time
TimeStamp=[@MeasureFDay1]
TimeStampFormat=%Y-%m-%d
Format=%a
DynamicVariables=1
;Substitute=#Date#
Disabled=1

[@MeasureFPP1]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=7
Disabled=1

[MeasureFTmax2]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=10
Disabled=1

[@MeasureFTmax2Celsius]
Group=Forecast
Measure=Calc
Formula=#TempMode#=0?Round((5/9)*(MeasureFTmax2-32)):MeasureFTmax2
Disabled=1

[MeasureFTmin2]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=11
Disabled=1

[@MeasureFTmin2Celsius]
Group=Forecast
Measure=Calc
Formula=#TempMode#=0?Round((5/9)*(MeasureFTmin2-32)):MeasureFTmin2
Disabled=1

[@MeasureFDay2]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=12
RegExpSubstitute=1
Substitute="^(.*)T.*$":"\1"
Disabled=1

[@MeasureFDay2Format]
Group=Forecast
Measure=Time
TimeStamp=[@MeasureFDay2]
TimeStampFormat=%Y-%m-%d
Format=%a
DynamicVariables=1
;Substitute=#Date#
Disabled=1

[@MeasureFPP2]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=14
Disabled=1

[MeasureFTmax3]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=17
Disabled=1

[@MeasureFTmax3Celsius]
Group=Forecast
Measure=Calc
Formula=#TempMode#=0?Round((5/9)*(MeasureFTmax3-32)):MeasureFTmax3
Disabled=1

[MeasureFTmin3]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=18
Disabled=1

[@MeasureFTmin3Celsius]
Group=Forecast
Measure=Calc
Formula=#TempMode#=0?Round((5/9)*(MeasureFTmin3-32)):MeasureFTmin3
Disabled=1

[@MeasureFDay3]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=19
RegExpSubstitute=1
Substitute="^(.*)T.*$":"\1"
Disabled=1

[@MeasureFDay3Format]
Group=Forecast
Measure=Time
TimeStamp=[@MeasureFDay3]
TimeStampFormat=%Y-%m-%d
Format=%a
DynamicVariables=1
;Substitute=#Date#
Disabled=1

[@MeasureFPP3]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=21
Disabled=1

[MeasureFTmax4]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=24
Disabled=1

[@MeasureFTmax4Celsius]
Group=Forecast
Measure=Calc
Formula=#TempMode#=0?Round((5/9)*(MeasureFTmax4-32)):MeasureFTmax4
Disabled=1

[MeasureFTmin4]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=25
Disabled=1

[@MeasureFTmin4Celsius]
Group=Forecast
Measure=Calc
Formula=#TempMode#=0?Round((5/9)*(MeasureFTmin4-32)):MeasureFTmin4
Disabled=1

[@MeasureFDay4]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=26
RegExpSubstitute=1
Substitute="^(.*)T.*$":"\1"
Disabled=1

[@MeasureFDay4Format]
Group=Forecast
Measure=Time
TimeStamp=[@MeasureFDay4]
TimeStampFormat=%Y-%m-%d
Format=%a
DynamicVariables=1
;Substitute=#Date#
Disabled=1

[@MeasureFPP4]
Group=Forecast
Measure=WebParser
Url=[@MeasureForecast]
StringIndex=28
Disabled=1

[@MeasureForecastConditions]
Measure=WebParser
Url=#URL#
RegExp=#ForecastConditions#
UpdateRate=600
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup ForecastCond][!UpdateMeasureGroup ForecastCond][!UpdateMeterGroup ForecastCond][!Redraw]

[@MeasureFCond1]
Group=ForecastCond
Measure=WebParser
Url=[@MeasureForecastConditions]
StringIndex=1
Substitute=#Conditions#
Disabled=1

[@MeasureFIcon1]
Group=ForecastCond
Measure=WebParser
Url=[@MeasureForecastConditions]
StringIndex=2
Disabled=1

[@MeasureFCond2]
Group=ForecastCond
Measure=WebParser
Url=[@MeasureForecastConditions]
StringIndex=3
Substitute=#Conditions#
Disabled=1

[@MeasureFIcon2]
Group=ForecastCond
Measure=WebParser
Url=[@MeasureForecastConditions]
StringIndex=4
Disabled=1

[@MeasureFCond3]
Group=ForecastCond
Measure=WebParser
Url=[@MeasureForecastConditions]
StringIndex=5
Substitute=#Conditions#
Disabled=1

[@MeasureFIcon3]
Group=ForecastCond
Measure=WebParser
Url=[@MeasureForecastConditions]
StringIndex=6
Disabled=1

[@MeasureFCond4]
Group=ForecastCond
Measure=WebParser
Url=[@MeasureForecastConditions]
StringIndex=7
Substitute=#Conditions#
Disabled=1

[@MeasureFIcon4]
Group=ForecastCond
Measure=WebParser
Url=[@MeasureForecastConditions]
StringIndex=8
Disabled=1


