class CfgPatches
{
	class ZenMusicExample
	{
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"ZenModPack"
		};
	};
};

class CfgVehicles
{
	class Zen_Cassette_Base;

    // Welcome to server tape
    class Zen_Cassette_WelcomeGuide : Zen_Cassette_Base
    {
        scope = 2;
        displayName = "Mysterious Tape";
        descriptionShort = "A mysterious tape. I'd better listen to it...";
        playSeconds = 60;
		isMusic = 0;
		isCopyright = 0; // 0 by default - set this to 1 to mark a track as copyrighted for streamers
    };
	// Zenarchist tapes
	class Zen_Cassette_Zen1 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Zenarchist Tape (1/11)";
		descriptionShort = "Wasted. A song performed and recorded by Zenarchist, long before the apocalypse...";
		playSeconds = 205;
	};
	class Zen_Cassette_Zen2 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Zenarchist Tape (2/11)";
		descriptionShort = "Flow. A song performed and recorded by Zenarchist, long before the apocalypse...";
		playSeconds = 140;
	};
	class Zen_Cassette_Zen3 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Zenarchist Tape (3/11)";
		descriptionShort = "Elise, Part II. A song performed and recorded by Zenarchist, long before the apocalypse...";
		playSeconds = 116;
	};
	class Zen_Cassette_Zen4 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Zenarchist Tape (4/11)";
		descriptionShort = "Haunted. A song performed and recorded by Zenarchist, long before the apocalypse...";
		playSeconds = 215;
	};
	class Zen_Cassette_Zen5 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Zenarchist Tape (5/11)";
		descriptionShort = "Heartbreaker. A song performed and recorded by Zenarchist, long before the apocalypse...";
		playSeconds = 260;
	};
	class Zen_Cassette_Zen6 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Jayde's Tape";
		descriptionShort = "Save Tonight. A song performed and recorded by Jayde, long before the apocalypse...";
		playSeconds = 189;
	};
	class Zen_Cassette_Zen7 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Myrtle Place Tape (1/2)";
		descriptionShort = "Police State. A song performed and recorded by a band called Myrtle Place, long before the apocalypse...";
		playSeconds = 170;
	};
	class Zen_Cassette_Zen8 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Myrtle Place Tape (2/2)";
		descriptionShort = "Watch Your Back. A song performed and recorded by a band called Myrtle Place, long before the apocalypse...";
		playSeconds = 118;
	};
	class Zen_Cassette_Zen9 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Zenarchist Tape (6/11)";
		descriptionShort = "The Resistance ft. J-Rim. A song performed and recorded by Zenarchist & J-Rim, long before the apocalypse...";
		playSeconds = 192;
	};
	class Zen_Cassette_Zen10 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Survivor Recording";
		descriptionShort = "A recording made by a survivor of the apocalypse. It seems it was recorded somewhere in Chernarus...";
		playSeconds = 91;
		isMusic = 0;
	};
	class Zen_Cassette_Zen11 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Zenarchist Tape (7/11)";
		descriptionShort = "Irie. A song performed and recorded by Zenarchist, long before the apocalypse...";
		playSeconds = 278;
	};
	class Zen_Cassette_Zen12 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Zenarchist Tape (8/11)";
		descriptionShort = "Dissent. A song performed and recorded by Zenarchist, long before the apocalypse...";
		playSeconds = 151;
	};
	class Zen_Cassette_Zen13 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Zenarchist Tape (9/11)";
		descriptionShort = "Untitled. A song performed and recorded by Zenarchist, long before the apocalypse...";
		playSeconds = 85;
	};
	class Zen_Cassette_Zen14 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Zenarchist Tape (10/11)";
		descriptionShort = "Slow & Weird. A song performed and recorded by Zenarchist, long before the apocalypse...";
		playSeconds = 180;
	};
	class Zen_Cassette_Zen15 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Zenarchist Tape (11/11)";
		descriptionShort = "Victim of Reality Radio Recording on 4ZZZ. A song performed and recorded by Zenarchist's band, long before the apocalypse...";
		playSeconds = 232;
	};
	// Classical
	class Zen_Cassette_Classical1 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (1/?)";
		descriptionShort = "Fur Elise (by Beethoven)";
		playSeconds = 138;
	};
	class Zen_Cassette_Classical2 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (2/?)";
		descriptionShort = "Gymnopedie No. 3 (by Wahneta Meixsell)";
		playSeconds = 133;
	};
	class Zen_Cassette_Classical3 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (3/?)";
		descriptionShort = "Les Toreadors from Carmen (by Bizet)";
		playSeconds = 132;
	};
	class Zen_Cassette_Classical4 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (4/?)";
		descriptionShort = "Messiah (by Handel)";
		playSeconds = 208;
	};
	class Zen_Cassette_Classical5 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (5/?)";
		descriptionShort = "Morning Mood (by Grieg)";
		soundSet = "Zen_SoundSet_Classical5";
		playSeconds = 190;
	};
	class Zen_Cassette_Classical6 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (6/?)";
		descriptionShort = "Ride of the Valkyries (by Wagner)";
		soundSet = "Zen_SoundSet_Classical6";
		playSeconds = 316;
	};
	class Zen_Cassette_Classical7 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (7/?)";
		descriptionShort = "Toccata in D Minor (by Bach)";
		playSeconds = 183;
	};
	class Zen_Cassette_Classical8 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (8/?)";
		descriptionShort = "Moonlight Sonata (by Beethoven)";
		playSeconds = 309;
	};
	class Zen_Cassette_Classical9 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (9/9)";
		descriptionShort = "Canon in D Major (by Kevin MacLeod)";
		playSeconds = 333;
	};
	// Alan
	class Zen_Cassette_Alan1 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Lecture Tape (1/?)";
		descriptionShort = "The World As A Drama Pt. 1 (by Alan W. Watts)";
		playSeconds = 527;
		isMusic = 0;
	};
	class Zen_Cassette_Alan2 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Lecture Tape (2/?)";
		descriptionShort = "The World As A Drama Pt. 2 (by Alan W. Watts)";
		playSeconds = 256;
		isMusic = 0;
	};
	class Zen_Cassette_Alan3 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Lecture Tape (3/?)";
		descriptionShort = "Fear Of Enlightenment (by Alan W. Watts)";
		playSeconds = 258;
		isMusic = 0;
	};
	class Zen_Cassette_Alan4 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Lecture Tape (4/?)";
		descriptionShort = "A Spontaneous Life (by Alan W. Watts)";
		playSeconds = 275;
		isMusic = 0;
	};
	class Zen_Cassette_Alan5 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Lecture Tape (5/?)";
		descriptionShort = "Must Life Go On And On? (by Alan W. Watts)";
		playSeconds = 241;
		isMusic = 0;
	};
	class Zen_Cassette_Alan6 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Lecture Tape (6/?)";
		descriptionShort = "A Natural Satori (by Alan W. Watts)";
		playSeconds = 254;
		isMusic = 0;
	};
	class Zen_Cassette_Alan7 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Lecture Tape (7/?)";
		descriptionShort = "To Say What Can't Be Said (by Alan W. Watts)";
		playSeconds = 248;
		isMusic = 0;
	};
	class Zen_Cassette_Alan8 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Lecture Tape (8/?)";
		descriptionShort = "Every Incarnation Is This One (by Alan W. Watts)";
		playSeconds = 267;
		isMusic = 0;
	};
	class Zen_Cassette_Alan9 : Zen_Cassette_Base
	{
		scope = 2;
		displayName = "Lecture Tape (9/9)";
		descriptionShort = "Consider Death Now (by Alan W. Watts)";
		playSeconds = 310;
		isMusic = 0;
	};
};

class CfgSoundShaders
{
    class Zen_Cassette_SoundShader_Base;

    // Server intro guide
    class Zen_SoundShader_WelcomeGuide : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Welcome", 1 } }; };
	// Zen music
	class Zen_Cassette_Zen1_SoundShader  : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Zenarchist1", 1 } }; };
	class Zen_Cassette_Zen2_SoundShader  : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Zenarchist2", 1 } }; };
	class Zen_Cassette_Zen3_SoundShader  : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Zenarchist3", 1 } }; };
	class Zen_Cassette_Zen4_SoundShader  : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Zenarchist4", 1 } }; };
	class Zen_Cassette_Zen5_SoundShader  : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Zenarchist5", 1 } }; };
	class Zen_Cassette_Zen6_SoundShader  : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Zenarchist6", 1 } }; };
	class Zen_Cassette_Zen7_SoundShader  : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Zenarchist7", 1 } }; };
	class Zen_Cassette_Zen8_SoundShader  : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Zenarchist8", 1 } }; };
	class Zen_Cassette_Zen9_SoundShader  : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Zenarchist9", 1 } }; };
	class Zen_Cassette_Zen10_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Zenarchist10", 1 } }; };
	class Zen_Cassette_Zen11_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Zenarchist11", 1 } }; };
	class Zen_Cassette_Zen12_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Zenarchist12", 1 } }; };
	class Zen_Cassette_Zen13_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Zenarchist13", 1 } }; };
	class Zen_Cassette_Zen14_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Zenarchist14", 1 } }; };
	class Zen_Cassette_Zen15_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\Zenarchist15", 1 } }; };
	// Classical music
	class Zen_Cassette_Classical1_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\classical1", 1 } }; };
	class Zen_Cassette_Classical2_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\classical2", 1 } }; };
	class Zen_Cassette_Classical3_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\classical3", 1 } }; };
	class Zen_Cassette_Classical4_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\classical4", 1 } }; };
	class Zen_Cassette_Classical5_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\classical5", 1 } }; };
	class Zen_Cassette_Classical6_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\classical6", 1 } }; };
	class Zen_Cassette_Classical7_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\classical7", 1 } }; };
	class Zen_Cassette_Classical8_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\classical8", 1 } }; };
	class Zen_Cassette_Classical9_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\classical9", 1 } }; };
	// Alan lectures
	class Zen_Cassette_Alan1_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\alan1", 1 } }; };
	class Zen_Cassette_Alan2_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\alan2", 1 } }; };
	class Zen_Cassette_Alan3_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\alan3", 1 } }; };
	class Zen_Cassette_Alan4_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\alan4", 1 } }; };
	class Zen_Cassette_Alan5_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\alan5", 1 } }; };
	class Zen_Cassette_Alan6_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\alan6", 1 } }; };
	class Zen_Cassette_Alan7_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\alan7", 1 } }; };
	class Zen_Cassette_Alan8_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\alan8", 1 } }; };
	class Zen_Cassette_Alan9_SoundShader : Zen_Cassette_SoundShader_Base { samples[] = { { "ZenMusicExample\data\sounds\alan9", 1 } }; };
}

class CfgSoundSets
{
    // Server intro tape
    class Zen_Cassette_WelcomeGuide_SoundSet { soundShaders[] = { "Zen_SoundShader_WelcomeGuide" }; volumeFactor = 1.0; };
	// My & friends music
	class Zen_Cassette_Zen1_SoundSet  { soundShaders[] = { "Zen_Cassette_Zen1_SoundShader" }; volumeFactor = 0.75; };
	class Zen_Cassette_Zen2_SoundSet  { soundShaders[] = { "Zen_Cassette_Zen2_SoundShader" }; volumeFactor = 0.75; };
	class Zen_Cassette_Zen3_SoundSet  { soundShaders[] = { "Zen_Cassette_Zen3_SoundShader" }; volumeFactor = 0.75; };
	class Zen_Cassette_Zen4_SoundSet  { soundShaders[] = { "Zen_Cassette_Zen4_SoundShader" }; volumeFactor = 0.75; };
	class Zen_Cassette_Zen5_SoundSet  { soundShaders[] = { "Zen_Cassette_Zen5_SoundShader" }; volumeFactor = 0.75; };
	class Zen_Cassette_Zen6_SoundSet  { soundShaders[] = { "Zen_Cassette_Zen6_SoundShader" }; volumeFactor = 0.75; };
	class Zen_Cassette_Zen7_SoundSet  { soundShaders[] = { "Zen_Cassette_Zen7_SoundShader" }; volumeFactor = 0.75; };
	class Zen_Cassette_Zen8_SoundSet  { soundShaders[] = { "Zen_Cassette_Zen8_SoundShader" }; volumeFactor = 1.0; };
	class Zen_Cassette_Zen9_SoundSet  { soundShaders[] = { "Zen_Cassette_Zen9_SoundShader" }; volumeFactor = 0.75; };
	class Zen_Cassette_Zen10_SoundSet { soundShaders[] = { "Zen_Cassette_Zen10_SoundShader" }; volumeFactor = 0.75; };
	class Zen_Cassette_Zen11_SoundSet { soundShaders[] = { "Zen_Cassette_Zen11_SoundShader" }; volumeFactor = 0.75; };
	class Zen_Cassette_Zen12_SoundSet { soundShaders[] = { "Zen_Cassette_Zen12_SoundShader" }; volumeFactor = 0.75; };
	class Zen_Cassette_Zen13_SoundSet { soundShaders[] = { "Zen_Cassette_Zen13_SoundShader" }; volumeFactor = 0.75; };
	class Zen_Cassette_Zen14_SoundSet { soundShaders[] = { "Zen_Cassette_Zen14_SoundShader" }; volumeFactor = 0.75; };
	class Zen_Cassette_Zen15_SoundSet { soundShaders[] = { "Zen_Cassette_Zen15_SoundShader" }; volumeFactor = 0.75; };
	// Classical music
	class Zen_Cassette_Classical1_SoundSet { soundShaders[] = { "Zen_Cassette_Classical1_SoundShader" }; };
	class Zen_Cassette_Classical2_SoundSet { soundShaders[] = { "Zen_Cassette_Classical2_SoundShader" }; };
	class Zen_Cassette_Classical3_SoundSet { soundShaders[] = { "Zen_Cassette_Classical3_SoundShader" }; };
	class Zen_Cassette_Classical4_SoundSet { soundShaders[] = { "Zen_Cassette_Classical4_SoundShader" }; };
	class Zen_Cassette_Classical5_SoundSet { soundShaders[] = { "Zen_Cassette_Classical5_SoundShader" }; };
	class Zen_Cassette_Classical6_SoundSet { soundShaders[] = { "Zen_Cassette_Classical6_SoundShader" }; };
	class Zen_Cassette_Classical7_SoundSet { soundShaders[] = { "Zen_Cassette_Classical7_SoundShader" }; };
	class Zen_Cassette_Classical8_SoundSet { soundShaders[] = { "Zen_Cassette_Classical8_SoundShader" }; };
	class Zen_Cassette_Classical9_SoundSet { soundShaders[] = { "Zen_Cassette_Classical9_SoundShader" }; };
	// Alan Watts
	class Zen_Cassette_Alan1_SoundSet { soundShaders[] = { "Zen_Cassette_Alan1_SoundShader" }; volumeFactor = 1.5; };
	class Zen_Cassette_Alan2_SoundSet { soundShaders[] = { "Zen_Cassette_Alan2_SoundShader" }; volumeFactor = 1.5; };
	class Zen_Cassette_Alan3_SoundSet { soundShaders[] = { "Zen_Cassette_Alan3_SoundShader" }; volumeFactor = 1.5; };
	class Zen_Cassette_Alan4_SoundSet { soundShaders[] = { "Zen_Cassette_Alan4_SoundShader" }; volumeFactor = 1.5; };
	class Zen_Cassette_Alan5_SoundSet { soundShaders[] = { "Zen_Cassette_Alan5_SoundShader" }; volumeFactor = 1.5; };
	class Zen_Cassette_Alan6_SoundSet { soundShaders[] = { "Zen_Cassette_Alan6_SoundShader" }; volumeFactor = 1.5; };
	class Zen_Cassette_Alan7_SoundSet { soundShaders[] = { "Zen_Cassette_Alan7_SoundShader" }; volumeFactor = 1.5; };
	class Zen_Cassette_Alan8_SoundSet { soundShaders[] = { "Zen_Cassette_Alan8_SoundShader" }; volumeFactor = 1.5; };
	class Zen_Cassette_Alan9_SoundSet { soundShaders[] = { "Zen_Cassette_Alan9_SoundShader" }; volumeFactor = 1.5; };
}
