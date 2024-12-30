@ECHO OFF
SET DXC="D:\Program Files\UE_5.4\Engine\Binaries\ThirdParty\ShaderConductor\Win64\dxc.exe"
IF NOT EXIST %DXC% (
	ECHO Couldn't find dxc.exe under "D:\Program Files\UE_5.4\Engine\Binaries\ThirdParty\ShaderConductor\Win64"
	GOTO :END
)
%DXC% -HV 2018 -Zpr -O3 -auto-binding-space 0 -Wno-parentheses-equality -disable-lifetime-markers -T cs_6_6 -E RayTracingDynamicGeometryConverterCS -Fc RayTracingDynamicMesh.d3dasm -Fo RayTracingDynamicMesh.dxil RayTracingDynamicMesh.usf
:END
PAUSE
