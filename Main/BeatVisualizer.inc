[MeasureBeat]
Measure = Plugin
Group = AudioGroup
Plugin = AudioLevel
Port = Output
Bands = 1
FFTSize = 512
FFTOverlap = 256
FFTAttack = 5
FFTDecay = 100
FreqMin = 16
FreqMax = 60
Sensitivity = 20

[MeasureBPM]
Measure = Plugin
Group = AudioGroup
Plugin = AudioLevel
Parent = MeasureBeat
Channel = Avg
Type = Band
AverageSize = 0
BandIdx = 0

[MeterForgeHot]
Meter = Image
ImageAlpha = ([MeasureBPM]*255)
W = 220
H = 220
X = 0
Y = 0
DynamicVariables = 1
ImageName = ../BeatOn.png