class CfgPatches
{
	class NoUnpackedPaper
	{

		requiredAddons[] = {};
	};
};
class CfgMods
{
	class NoUnpackedPaper
	{
		author = "FOG";
		dir = "FOG";
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"FOG/NoUnpackedPaper/scripts/4_World"};
			};
		};
	};
};

