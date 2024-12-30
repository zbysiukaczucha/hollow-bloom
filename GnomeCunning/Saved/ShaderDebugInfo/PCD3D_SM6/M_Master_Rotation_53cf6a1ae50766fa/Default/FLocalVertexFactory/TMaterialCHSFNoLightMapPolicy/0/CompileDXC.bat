@ECHO OFF
SET DXC="D:\Program Files\UE_5.4\Engine\Binaries\ThirdParty\ShaderConductor\Win64\dxc.exe"
IF NOT EXIST %DXC% (
	ECHO Couldn't find dxc.exe under "D:\Program Files\UE_5.4\Engine\Binaries\ThirdParty\ShaderConductor\Win64"
	GOTO :END
)
%DXC% -HV 2021 -Zpr -O3 -auto-binding-space 0 -exports MaterialCHS -enable-16bit-types -Wno-parentheses-equality -disable-lifetime-markers -T lib_6_6 -Fc RayTracingMaterialHitShaders.d3dasm -Fo RayTracingMaterialHitShaders.dxil RayTracingMaterialHitShaders.usf
:END
PAUSE
