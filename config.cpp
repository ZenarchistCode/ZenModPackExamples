class CfgPatches
{
	class ZenNotificationAudioExample
	{
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Scripts",
			"ZenModPack"
		};
	};
};

class CfgMods
{
	class ZenNotificationAudioExample
	{
		dir = "ZenNotificationAudioExample";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ZenNotificationAudioExample";
		credits = "Zenarchist";
		author = "Zenarchist";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = { "Game", "World", "Mission" };
	};
};

class CfgSoundShaders
{
	class Zen_NotificationAudio_SoundShader_Base;

	// Generic
	class Zen_MissionStart_SoundShader		: Zen_NotificationAudio_SoundShader_Base { samples[] = { { "ZenNotificationAudioExample\data\sounds\generic\missionstart", 1 } }; };
	class Zen_MissionFail_SoundShader		: Zen_NotificationAudio_SoundShader_Base { samples[] = { { "ZenNotificationAudioExample\data\sounds\generic\missionfail",	1 } }; };
	class Zen_MissionSuccess_SoundShader	: Zen_NotificationAudio_SoundShader_Base { samples[] = { { "ZenNotificationAudioExample\data\sounds\generic\missionsuccess",	1 } }; };
	class Zen_MissionAirdrop_SoundShader	: Zen_NotificationAudio_SoundShader_Base { samples[] = { { "ZenNotificationAudioExample\data\sounds\generic\airdropreward", 1 } }; };

	// Helicrash mission
	class Zen_HeliMission1_SoundShader : Zen_NotificationAudio_SoundShader_Base { samples[] = { { "ZenNotificationAudioExample\data\sounds\mission\heli\heli1", 1 } }; };
	class Zen_HeliMission2_SoundShader : Zen_NotificationAudio_SoundShader_Base { samples[] = { { "ZenNotificationAudioExample\data\sounds\mission\heli\heli2", 1 } }; };
	class Zen_HeliMission3_SoundShader : Zen_NotificationAudio_SoundShader_Base { samples[] = { { "ZenNotificationAudioExample\data\sounds\mission\heli\heli3", 1 } }; };
	class Zen_HeliMission4_SoundShader : Zen_NotificationAudio_SoundShader_Base { samples[] = { { "ZenNotificationAudioExample\data\sounds\mission\heli\heli4", 1 } }; };
}

class CfgSoundSets
{
	class Zen_BaseMissionRadio_SoundSet;

	// Generic
	class Zen_MissionStart_SoundSet : Zen_BaseMissionRadio_SoundSet
	{ 
		soundKeywords = "Can anybody hear me? Over!";
		soundShaders[] = { "Zen_MissionStart_SoundShader" };
	};
	class Zen_MissionFail_SoundSet : Zen_BaseMissionRadio_SoundSet
	{ 
		soundKeywords = "The mission is failed.";
		soundShaders[] = { "Zen_MissionFail_SoundShader" };
	};
	class Zen_MissionSuccess_SoundSet : Zen_BaseMissionRadio_SoundSet
	{ 
		soundKeywords = "Stay tuned to this radio channel if you're willing to help us.";
		soundShaders[] = { "Zen_MissionSuccess_SoundShader" };
	};
	class Zen_MissionAirdrop_SoundSet : Zen_BaseMissionRadio_SoundSet
	{ 
		soundKeywords = "Hold your position - we're sending in an airdrop full of valuable supplies.";
		soundShaders[] = { "Zen_MissionAirdrop_SoundShader" };
	};
	class Zen_MissionStartBad_SoundSet : Zen_BaseMissionRadio_SoundSet
	{ 
		soundKeywords = "Can anybody read me? Over?";
		soundShaders[] = { "Zen_MissionStartBad_SoundShader" }; 
	};

	// Heli mission
	class Zen_HeliMission1_SoundSet : Zen_BaseMissionRadio_SoundSet
	{ 
		soundKeywords = "The military helicopter you sent to scout our location has been destroyed";
		soundShaders[] = { "Zen_HeliMission1_SoundShader" }; 
	};
	class Zen_HeliMission2_SoundSet : Zen_BaseMissionRadio_SoundSet
	{ 
		soundKeywords = "The pilot was alive, but we were able to remedy that situation rather quickly";
		soundShaders[] = { "Zen_HeliMission2_SoundShader" }; 
	};
	class Zen_HeliMission3_SoundSet : Zen_BaseMissionRadio_SoundSet
	{ 
		soundKeywords = "The crash site is swarming with infected";
		soundShaders[] = { "Zen_HeliMission3_SoundShader" }; 
	};
	class Zen_HeliMission4_SoundSet : Zen_BaseMissionRadio_SoundSet
	{ 
		soundKeywords = "Thank you for trying to help rescue our pilot, survivor";
		soundShaders[] = { "Zen_HeliMission4_SoundShader" }; 
	};
}
