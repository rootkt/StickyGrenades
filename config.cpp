class CfgPatches
{
	class StickyGrenades
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class StickyGrenades
	{
		dir="stickygrenades";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Sticky Grenades";
		credits="";
		author="rootkt";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World",
			"Mission"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"stickygrenades/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"stickygrenades/scripts/5_Mission"
				};
			};
		};
	};
};
