class CfgAmmo {
	class BulletBase;
	class B_556x45_Ball_Tracer_Red;
	class B_762x51_Tracer_Red;
	class B_127x99_Ball_Tracer_Red;
	class B_127x99_Ball;
	class B_56x15_dual;
	class B_9x21_Ball;
	class HLC_9x19_Ball;
	class B_12Gauge_Pellets;
	class B_65x39_Caseless : BulletBase 
	{
		airFriction=-0.000785;
        typicalSpeed=800;
        ACE_caliber=6.706;
        ACE_bulletLength=32.893;
        ACE_bulletMass=7.9704;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.263};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={730, 760, 788, 800, 810, 830};
        ACE_barrelLengths[]={254.0, 406.4, 508.0, 609.6, 660.4, 762.0};
		hit = 9.94;
		//airFriction = -0.0004643088;
	};
	class BL_65x39_Speer_TNT: BulletBase
	{
		hit = 9.94;
		airFriction=-0.000785;
        typicalSpeed=800;
        ACE_caliber=6.706;
        ACE_bulletLength=32.893;
        ACE_bulletMass=5.8;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.281};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={730, 760, 788, 800, 810, 830};
        ACE_barrelLengths[]={254.0, 406.4, 508.0, 609.6, 660.4, 762.0};
	};
	class BL_65x39_Scenar: BulletBase
	{
		hit = 10.73;
		airFriction=-0.000785;
        typicalSpeed=850;
        ACE_caliber=6.706;
        ACE_bulletLength=32.893;
        ACE_bulletMass=7.9704;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.263};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={730, 760, 788, 800, 810, 830};
        ACE_barrelLengths[]={254.0, 406.4, 508.0, 609.6, 660.4, 762.0};
	};
	class RH_B_6x35: BulletBase
	{
		hit = 8.47993;
		typicalSpeed = 739.14;
		airFriction = -0.0015027605;
		caliber = 0.625;
		deflecting = 19;
		visibleFire = 2.2;
		audibleFire = 4.8;
		ACE_caliber=5.69;
        ACE_bulletLength=11.303;
        ACE_bulletMass=4.212;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.26};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={730, 750, 760};
        ACE_barrelLengths[]={203.2, 254.0, 304.8};
	};
	class B_545x39_Ball: BulletBase
	{
		airFriction=-0.001162;
        caliber=0.5;
        deflecting=18;
        hit=7.28;
        typicalSpeed=880;
        ACE_caliber=5.588;
        ACE_bulletLength=21.59;
        ACE_bulletMass=3.42792;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.168};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={780, 880, 920};
        ACE_barrelLengths[]={254.0, 414.02, 508.0};
	};
	class B_545x39_Ball_T: B_545x39_Ball
	{
        hit=7.3;
		
	};
	class BL_545x39_7N10 : B_545x39_Ball {
        airFriction = -0.0011501;
        typicalSpeed = 879.9;
        caliber = 1.424;
        hit = 7.5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        nvgonly = 0;
        tracerendtime = 1.14;
        tracerscale = 1;
        tracerstarttime = 0.07;
        deflecting = 25;
        visibleFire = 3;
        audibleFire = 7;
		ACE_bulletMass= 3.62;
		ACE_dragModel=7;
		ACE_ballisticCoefficients[]={0.176};
		ACE_muzzleVelocities[]={738, 880, 918};
        ACE_barrelLengths[]={254.0, 414.02, 508.0};
    };
	class BL_545x39_AP_7N22: B_545x39_Ball
	{
		hit = 7.7;
		typicalSpeed = 890;
		caliber = 1.0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		airFriction=-0.0015168;
        ACE_bulletMass= 3.69;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.180};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={812, 840, 890, 932};
        ACE_barrelLengths[]={210.82, 254.0, 414.02, 508.0};
	};
	class B_762x39_Ball: BulletBase
	{
		airFriction= -0.0015168;
        hit=12;
        typicalSpeed=716;
		caliber = 1;
        ACE_caliber=7.823;
        ACE_bulletLength=28.956;
        ACE_bulletMass=7.9704;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.275};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={650, 716, 750};
        ACE_barrelLengths[]={254.0, 414.02, 508.0};
	};
	class BL_762x39_SP_Spitzer: B_762x39_Ball
	{
		airFriction= -0.0007399922;
        hit=12.7;
        typicalSpeed=667;
		caliber = 0.7;
        ACE_caliber=7.823;
        ACE_bulletLength=26.9;
        ACE_bulletMass= 10.05;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.32};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={650, 716, 723};
        ACE_barrelLengths[]={254.0, 414.02, 508.0};
	};
	class B_762x51_Tracer_Yellow;
	class BL_762x39_AP_7N23: B_762x51_Tracer_Yellow 
	{
		airFriction=-0.0015168;
        hit=12;
        typicalSpeed=732;
        ACE_caliber=7.823;
        ACE_bulletLength=28.956;
        ACE_bulletMass=7.9;
		caliber = 1.09;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.275};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={650, 732, 750};
        ACE_barrelLengths[]={254.0, 414.02, 508.0};
	};
	class B_762x54_Ball: BulletBase
	{
		 airFriction=-0.001023;
        typicalSpeed=820;
		hit = 14.5;
		ACE_caliber=7.925;
        ACE_bulletLength=28.956;
        ACE_bulletMass=9.8496;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.4};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={700, 800, 820, 833, 865};
        ACE_barrelLengths[]={406.4, 508.0, 609.6, 660.4, 730};
	};
	class BL_762x54_FMJ_7N1: BulletBase
	{
		airFriction=-0.001023;
        caliber=0.95;
        hit=15;
        typicalSpeed=820;
        ACE_caliber=7.925;
        ACE_bulletLength=28.956;
        ACE_bulletMass=9.8496;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.498};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={700, 790, 820, 833, 837, 852};
        ACE_barrelLengths[]={406.4, 508.0, 609.6, 660.4, 685, 730};
	};
	class BL_762x54_AP_7N13: BulletBase
	{
		airFriction=-0.001023;
        caliber=1.2;
        hit=15;
        typicalSpeed=827;
        ACE_caliber=7.925;
        ACE_bulletLength=28.956;
        ACE_bulletMass=9.8496;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.4};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={700, 800, 827, 833, 848};
        ACE_barrelLengths[]={406.4, 508.0, 609.6, 660.4, 730};
	};
	class B_556x45_Ball : BulletBase // Data by Spartan0536
	{
		airFriction= -0.001265;
        hit=8;
        typicalSpeed=750;
        ACE_caliber=5.69;
		caliber = 0.7;
        ACE_bulletLength=23.012;
        ACE_bulletMass=4.0176;
        ACE_ammoTempMuzzleVelocityShifts[]={-27.20, -26.44, -23.76, -21.00, -17.54, -13.10, -7.95, -1.62, 6.24, 15.48, 27.75};
        ACE_ballisticCoefficients[]={0.151};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
        ACE_barrelLengths[]={210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508.0, 609.6};
	};
	class B_56x45_GP90_Ball: B_556x45_Ball
	{
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		typicalSpeed = 960;
		airFriction = -0.0012;
		waterFriction = -0.01413;
		caliber = 0.9;
		deflecting = 30;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 5;
		visibleFire = 4;
		audibleFire = 6;
	};
	class B_56x45_GP90_Tracer_Yellow: B_56x45_GP90_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		nvgOnly = 0;
	};
	class B_56x45_GP90_Armour_Piercing: B_56x45_GP90_Ball
	{
		caliber = 1.8;
	};
	class B_56x45_GP90_SD: BulletBase
	{
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 0.1;
		audibleFire = 0.1;
		visibleFireTime = 2;
		cost = 1;
		tracerColor[] = {0,0,0,0};
		tracerColorR[] = {0,0,0,0};
		typicalSpeed = 320;
		airFriction = -0.001425;
		waterFriction = -0.01413;
	};
	class BL_556x45_B_Mk262: B_556x45_Ball // Data by Spartan0536
	{
		hit = 11.5702505;
		typicalSpeed = 868.68;
		airFriction = -0.0010867938;
		caliber = 0.615;
		deflecting = 16;
		visibleFire = 2.5;
		audibleFire = 5;
		ACE_caliber=5.69;
        ACE_bulletLength=23.012;
        ACE_bulletMass=4.9896;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.361};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={624, 816, 832, 838};
        ACE_barrelLengths[]={190.5, 368.3, 457.2, 508.0};
	};
	class BL_556x45_M855A1: B_556x45_Ball // Data by Spartan0536
	{
		hit = 8.606374;
		typicalSpeed = 960.12;
		airFriction = -0.0011336141;
		caliber = 0.901;
		deflecting = 21;
		visibleFire = 3;
		audibleFire = 6;
		ACE_caliber=5.69;
        ACE_bulletLength=23.012;
        ACE_bulletMass=4.0176;
        ACE_ammoTempMuzzleVelocityShifts[]={-27.20, -26.44, -23.76, -21.00, -17.54, -13.10, -7.95, -1.62, 6.24, 15.48, 27.75};
        ACE_ballisticCoefficients[]={0.152};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
        ACE_barrelLengths[]={210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508.0, 609.6};
	};
	class BL_556x45_M855A1_green: BL_556x45_M855A1 
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		nvgonly = 0;
	};
	class BL_556x45_M855A1_red: BL_556x45_M855A1 
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgonly = 0;
	};
	class BL_556x45_M855A1_yellow: BL_556x45_M855A1 
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		nvgonly = 0;
	};
	class rhs_ammo_556x45_Mk318_Ball: B_556x45_Ball
	{
		hit = 10.073716;
		typicalSpeed = 950;
		airFriction = -0.0011487255;
		caliber = 1.64;
		deflecting = 17;
		visibleFire = 3;
		audibleFire = 5.5;
		ACE_caliber=5.69;
        ACE_bulletLength=23.012;
        ACE_bulletMass=4.0176;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.307};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={780, 886, 950};
        ACE_barrelLengths[]={254.0, 393.7, 508.0};
	};
	class B_762x51_Ball: BulletBase {
		airFriction = -0.00100899;
		caliber = 1.0;
		hit = 14.5;
		typicalspeed = 793;
		ACE_caliber=7.823;
        ACE_bulletLength=28.956;
        ACE_bulletMass=9.4608;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.2};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={700, 800, 820, 833, 845};
        ACE_barrelLengths[]={254.0, 406.4, 508.0, 609.6, 660.4};
	};
	class BL_762x63_Ball: B_762x51_Ball {
	
		hit = 16.2;
		airFriction = -0.00096;
        typicalSpeed=800;
		ACE_caliber = 7.823;
		caliber=1.4;
			ACE_bulletLength = 37.821;
			ACE_bulletMass = 13.0;
			ACE_ammoTempMuzzleVelocityShifts[] = { -5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2 };
			ACE_ballisticCoefficients[] = { 0.250 };
			ACE_velocityBoundaries[] = {};
			ACE_standardAtmosphere = "ICAO";
			ACE_dragModel = 7;
			ACE_muzzleVelocities[] = { 690, 783 };
			ACE_barrelLengths[] = { 305 , 610 };
	};
	class BL_762x33_Ball: B_762x51_Ball //.30 Carbine
	{
		
		
		cartridge = "FxCartridge_762";
		hit = 11.6;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		airFriction=-0.001330323;
        typicalSpeed=800;
        caliber=0.8;
		ACE_caliber=7.62;
        ACE_bulletLength=18.161;
        ACE_bulletMass=7;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.154};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={700, 606.5};
        ACE_barrelLengths[]={254.0, 458};
	};
	class ACE_762x51_Ball_M118LR;
	class BL_762x51_M118LR : ACE_762x51_Ball_M118LR {
		
		hit = 16.5;
		
	};
	class ACE_762x51_Ball_Mk316_Mod_0;
	class BL_762x51_MK316 : ACE_762x51_Ball_Mk316_Mod_0 {
		
		hit = 15.6;
		caliber = 1.9;
		
	};
	class C1987_B_46x30_Ball: BulletBase // Data by Spartan0536
	{
		typicalSpeed = 650;
		airfriction = -0.0022978794;
		hit = 7;
		caliber = 0.5;
		ACE_caliber=4.902;
        ACE_bulletLength=13.005;
        ACE_bulletMass=2.0088;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.1455};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={680, 720, 730, 740};
        ACE_barrelLengths[]={101.6, 177.8, 228.6, 304.8};
	};
	class BL_46x30_AP_DM11: BulletBase // Data by Spartan0536
	{
		cartridge = "FxCartridge_Mp7";
		cost = 5;
		typicalSpeed = 654;
		airfriction = -0.0026624051;
		hit = 10.6;
		caliber = 1;
		ACE_caliber=4.902;
        ACE_bulletLength=13.005;
        ACE_bulletMass=2.0088;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.195};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={680, 720, 730, 740};
        ACE_barrelLengths[]={101.6, 177.8, 228.6, 304.8};
	};
	class B_68x43: BulletBase
	{
		hit = 12;
		typicalSpeed = 806;
		caliber = 1.1;
		deflecting = 23;
		airFriction = -0.001338856;
		ACE_caliber=7.036;
        ACE_bulletLength=24.359;
        ACE_bulletMass=7.452;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.162};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={713, 785, 810, 850};
        ACE_barrelLengths[]={304.8, 406.4, 508.0, 609.6};

	};
	class BL_68x43_HP: BulletBase
	{
		hit = 13.2;
		typicalSpeed = 715;
		caliber = 0.359;
		airFriction = -0.000839079;
		deflecting = 18;
		ACE_caliber=7.036;
        ACE_bulletLength=31.75;
        ACE_bulletMass=8.748;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.253};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={700, 732, 750, 780};
        ACE_barrelLengths[]={304.8, 406.4, 508.0, 609.6};

	};
	class B_68x43_AP: BulletBase
	{
		hit = 11.8;
		airFriction = -0.00105458;
		ACE_caliber=7.036;
        ACE_bulletLength=24.359;
        ACE_bulletMass=7.452;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.162};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={713, 785, 810, 850};
        ACE_barrelLengths[]={304.8, 406.4, 508.0, 609.6};
	};
	class B_9x19_Ball : B_9x21_Ball //DATA by Spartan
	{
		typicalSpeed = 304.7;
		hit = 10;
		caliber = 1;
		airfriction = -0.0011839775;
		deflecting = 37;
		visibleFire = 2.6;
		audibleFire = 4.85;
        ACE_caliber=9.017;
        ACE_bulletLength=15.494;
        ACE_bulletMass=8.0352;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.165};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={340, 370, 375, 400};
        ACE_barrelLengths[]={101.6, 127.0, 196, 228.6};
	};
	class BL_9x19_JHP : B_9x21_Ball 
	{
		typicalSpeed = 350;
		hit = 11.2;
		caliber = 0.8;
		airfriction = -0.00157647;
		deflecting = 34;
		visibleFire = 3;
		audibleFire = 5.1;
		ACE_caliber=9.017;
        ACE_bulletLength=15.494;
        ACE_bulletMass=7.5;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.165};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={350, 377, 420};
        ACE_barrelLengths[]={101.6, 127.0, 228.6};
		

	};
	class BL_9x19_PP : B_9x21_Ball 
	{
		typicalSpeed = 394;
		hit = 10.4;
		caliber = 0.8;
		airFriction = -0.0017671555;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.6;
		ACE_caliber=9.017;
        ACE_bulletLength=15.494;
        ACE_bulletMass=7.4;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.165};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={394, 426, 440};
        ACE_barrelLengths[]={101.6, 127.0, 228.6};


	};
	class BL_9x19_AP : B_9x19_Ball 
	{
		typicalSpeed = 460;
		hit = 10.2;
		caliber = 1.8;
		airFriction = -0.0017671455;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.6;
AB_caliber=0.355;
AB_bulletLength=0.610;
AB_bulletMass=124;
AB_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
AB_ballisticCoefficients[]={0.165};
AB_velocityBoundaries[]={};
AB_standardAtmosphere="ASM";
AB_dragModel=1;
AB_muzzleVelocities[]={334, 360, 410};
AB_barrelLengths[]={4, 5, 9};
	};
	class B_45ACP_Ball: BulletBase 
	{
		typicalSpeed = 254;
		hit = 12;
		caliber = 0.6;
		airfriction = -0.0007838944;
		ACE_caliber=11.481;
        ACE_bulletLength=17.272;
        ACE_bulletMass=14.904;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.195};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={230, 250, 285, 300};
        ACE_barrelLengths[]={101.6, 127.0, 228.6, 270};
	};
	class B_45ACP_BL_HP: BulletBase 
	{
		typicalSpeed = 200;
		hit = 12.4;
		caliber = 0.4;
		airfriction = -0.0014095089;
		ACE_caliber=11.481;
        ACE_bulletLength=17.272;
        ACE_bulletMass=14.904;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.195};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={250, 270, 295};
        ACE_barrelLengths[]={101.6, 127.0, 228.6};

	};
	class BL_455_webley : BulletBase //.455 Webley
	{
        airFriction=-0.00081221;
        typicalSpeed=250;
        tracerScale = 1.6;
		caliber = 0.7;
		hit = 12;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        ACE_caliber=11.5;
        ACE_bulletLength=14.9;
        ACE_bulletMass=17;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.195};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={757, 767, 785};
        ACE_barrelLengths[]={106, 127.0, 228.6};
	};
	class BL_50_AE_Ball: BulletBase
	{
		hit = 14;
		typicalSpeed = 340;
		airFriction = -0.0014011686;
		caliber = 0.5;
		ACE_caliber=12.7;
        ACE_bulletLength=28.194;
        ACE_bulletMass=21.06;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.228};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={360, 398, 420};
        ACE_barrelLengths[]={101.6, 152.4, 228.6};
	};
	class BL_50_AE_JHP: BL_50_AE_Ball
	{
		hit = 15;
		typicalSpeed = 370;
		airFriction = -0.0016011686;
		caliber = 0.2;
	};
	class BL_32ACP: BulletBase
	{
		hit = 6;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 266;
		airFriction = -0.0021527045;
		caliber = 0.1;
		ACE_caliber=7.938;
        ACE_bulletLength=15.494;
        ACE_bulletMass=4.212;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.118};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={282, 300, 320};
        ACE_barrelLengths[]={101.6, 127.0, 228.6};
	};
	class BL_32ACP_JHP: BL_32ACP
	{
		hit = 7.2;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 270;
		airFriction = -0.0020067585;
		caliber = 0.1;
	};
	class BL_357SIG_JHP: BulletBase
	{
		hit = 11.2;
		cost = 1;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 384;
		airFriction = -0.0022223;
		caliber = 0.306;
		ACE_ballisticCoefficients[] = {0.165};
		ACE_barrelLengths[] = {101.6,127,228.6};
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 8.0352;
		ACE_caliber = 9.017;
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {350,380,420};
		ACE_standardAtmosphere = "ASM";
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
	};
	class HLC_357SIG_FMJ;
	class BL_357SIG_FMJ: HLC_357SIG_FMJ
	{
		hit = 9.9;
		caliber = 0.406;
	};
	class BL_B_40SW: BulletBase
	{
		cartridge = "FxCartridge_Small";
		cost = 1;
		typicalSpeed = 320;
		airFriction = -0.0016559266;
		hit = 9.0;
		caliber = 0.7;
		ACE_caliber=10.16;
        ACE_bulletLength=11.354;
        ACE_bulletMass=8.748;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.105, 0.115, 0.120, 0.105};
        ACE_velocityBoundaries[]={365, 305, 259};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={340, 370, 400};
        ACE_barrelLengths[]={101.6, 152.4, 228.6};

	};
	class BL_B_40SW_JHP: BulletBase
	{
		airFriction = -0.002529;
        caliber = 0.322;
        deflecting = 22;
		hit = 10;
		ACE_caliber=10.16;
        ACE_bulletLength=11.354;
        ACE_bulletMass=8.748;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.105, 0.115, 0.120, 0.105};
        ACE_velocityBoundaries[]={365, 305, 259};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
       	ACE_muzzleVelocities[] = { 350, 380, 420 };
		ACE_barrelLengths[]={101.6, 152.4, 228.6};
	};
	class BL_B_40SW_SS:  B_12Gauge_Pellets
	{
		deflecting = 60;
		cartridge = "FxCartridge_Small";
		hit = 2;
		indirecthit = 1;
		indirecthitrange = 0.2;
		typicalspeed = 280;
		visiblefire = 4;
		airFriction = -0.02367975;
	};
	class BL_44mag_ball: BulletBase
	{
		hit = 13;
		cost = 1;
		cartridge = "FxCartridge_Small";
	    typicalSpeed = 391;
		airFriction = -0.0014987184;
		caliber = 0.4;
		ACE_caliber=10.897;
        ACE_bulletLength=20.422;
        ACE_bulletMass=12.96;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.172};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={360, 364, 390, 420};
        ACE_barrelLengths[]={101.6, 152, 190.5, 228.6};
	};
	class BL_44mag_JHP: BulletBase
	{
		hit = 14;
		cost = 1;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 416;
		airfriction = -0.0019;
		deflecting = 20;
		caliber = 0.4;
		ACE_caliber=10.897;
        ACE_bulletLength=20.422;
        ACE_bulletMass=12.96;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.172};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={360, 364, 390, 420};
        ACE_barrelLengths[]={101.6, 152, 190.5, 228.6};
	};
	class BL_454mag_ball: BulletBase
	{
		hit = 15;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 396;
		airFriction = -0.0008085925;
		caliber = 0.48;
		ACE_caliber=11.481;
        ACE_bulletLength=22.733;
        ACE_bulletMass=21.06;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.171};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={450, 490, 500};
        ACE_barrelLengths[]={101.6, 190.5, 228.6};
	};
	class BL_357mag_ball: BulletBase
	{
		hit = 13;
		cost = 1;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 320;
		airFriction = -0.00157865;
		caliber = 0.7;
		ACE_caliber=9.1;
        ACE_bulletLength=17.78;
        ACE_bulletMass=8.0;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.199};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={490, 499, 510, 523, 535};
        ACE_barrelLengths[]={101.6, 127.0, 152.4, 190.0, 228.6};

	};
	class BL_38spec_ball: BulletBase
	{
		hit = 11;
		cost = 1;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 320;
		airFriction = -0.00157665;
		caliber = 0.6;
		ACE_caliber=9.1;
        ACE_bulletLength=16.50;
        ACE_bulletMass=7.12;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.135};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={308, 307, 311, 333, 354};
        ACE_barrelLengths[]={101.6, 127.0, 152.4, 190.0, 228.6};
	};
	
	class BL_762x25: BulletBase
	{
		hit = 8;
		cost = 1;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 480;
		airFriction = -0.00157865;
		caliber = 0.2;
		ACE_caliber=7.874;
        ACE_bulletLength=13.856;
        ACE_bulletMass=5.5728;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.17};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={360, 450, 488};
        ACE_barrelLengths[]={101.6, 116, 269};
	};
	class BL_762x25_JHP: BL_762x25
	{
		hit = 8.7;
		cost = 1;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 467;
		airFriction = -0.0016108673;
		caliber = 0.28;
	};
	class BL_9x18_Ball: BulletBase
	{
		hit = 5;
		cartridge = "FxCartridge_Small";
		cost = 5;
		typicalSpeed = 303;
		airFriction = -0.0017671455;
		caliber = 0.1;
		ACE_caliber=9.271;
        ACE_bulletLength=15.494;
        ACE_bulletMass=6.00048;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.125};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={298, 330, 350};
        ACE_barrelLengths[]={96.52, 127.0, 228.6};

	};
	class BL_9x18_JHP: BL_9x18_Ball
	{
		hit = 5.7;
		typicalSpeed = 295;
		airFriction = -0.0017411581;
		caliber = 0.1;

	};
	class BL_9x18_PP: BL_9x18_Ball
	{
		hit = 7.6;
		typicalSpeed = 320;
		airFriction = -0.0017411581;
		caliber = 0.16;
	};
	class BL_B_22LR_SD: BulletBase
	{
		cartridge = "FxCartridge_Small";
		typicalSpeed = 300;
		airFriction = -0.0016330862;
		hit = 4.2;
		caliber = 0.1;
		ACE_caliber=5.73;
        ACE_bulletLength=13.2;
        ACE_bulletMass=2.0;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.084};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={330, 340, 360};
        ACE_barrelLengths[]={101.6, 152.4, 228.6};
	};
	class BL_57x28mm: BulletBase
	{
		hit = 8;
		typicalSpeed = 634;
		airFriction = -0.0011839875;
		caliber = 0.5;
		ACE_caliber=5.69;
        ACE_bulletLength=12.573;
        ACE_bulletMass=1.8144;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.144};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={550, 650, 625, 720};
        ACE_barrelLengths[]={101.6, 122, 152.4, 262.89};
	};
	class BL_57x28mm_AP: BL_57x28mm
	{
		hit = 7.6;
		typicalSpeed = 744;
		airFriction = -0.0012939875;
		caliber = 0.7;
	};
	class HLC_10mm_FMJ: HLC_9x19_Ball
	{
		airFriction = -0.00194781;
		caliber = 0.531;
		cost = 1;
		deflecting = 20;
		typicalSpeed = 408.8;
		hit = 10.95;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_caliber = 12.7;
        ACE_bulletLength = 19.406;
        ACE_bulletMass = 10.692;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.189 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 360, 400, 430 };
        ACE_barrelLengths[] = { 101.6, 117.094, 228.6 };
	};
	class HLC_10mm_JHP: HLC_10mm_FMJ
	{
		airfriction = -0.000846257;
		caliber = 0.33;
		typicalSpeed = 313.944;
		hit = "13.862517804";
	};
	class BL_842x40_Brignel_Ball: BulletBase
	{
		hit = 18;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		typicalSpeed = 960;
		airFriction = -0.0012;
		waterFriction = -0.01413;
		caliber = 0.9;
		deflecting = 30;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 5;
		visibleFire = 4;
		audibleFire = 6;
	};
	
	class BL_792x61_Norway: B_762x54_Ball
	{
		hit = 16;
		caliber = 2;
		typicalSpeed = 730;
		ACE_caliber = 8.08;
		ACE_bulletLength = 35;
		ACE_bulletMass = 13.8;
		ACE_ammoTempMuzzleVelocityShifts[] = {-5.3,-5.1,-4.6,-4.2,-3.4,-2.6,-1.4,-0.3,1.4,3,5.2};
		ACE_ballisticCoefficients[] = {0.251};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {750};
		ACE_barrelLengths[] = {565};

	};
	class BL_303B_Ball: B_762x51_Ball
	{
		hit = 15.55;
		typicalSpeed = 702;
		caliber = 1.17;
		airFriction = -0.0004670562;
		visibleFire = 10;
		audibleFire = 30;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerendtime = 1.4;
		tracerscale = 1.2;
		ACE_caliber=7.899;
        ACE_bulletLength=31.166;
        ACE_bulletMass=11.2752;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.499, 0.493, 0.48};
        ACE_velocityBoundaries[]={671, 549};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={728, 741, 765};
        ACE_barrelLengths[]={508.0, 640, 767};
	};
	class BL_280B_Ball: B_762x51_Ball
	{
		hit = 11.31;
		typicalSpeed = 702;
		caliber = 0.97;
		airFriction = -0.0005761496;
		visibleFire = 10;
		audibleFire = 20;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_caliber=7.2;
        ACE_bulletLength=24.3;
        ACE_bulletMass=9.08;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.411};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={670, 704, 735, 760, 771, 789};
        ACE_barrelLengths[]={270.8, 508.0, 533, 583, 623, 640};
	};
	class BL_300Blackout_Ball: B_556x45_Ball
	{
		airfriction = -0.0006824136;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		hit = 12;
        ACE_caliber=7.823;
        ACE_bulletLength=28.397;
        ACE_bulletMass=9.5256;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.398};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={559, 609, 625};
        ACE_barrelLengths[]={152.4, 406.4, 508.0};

	};
	class BL_300WINMAG: B_556x45_Ball
	{
		airfriction = -0.0005571706;
		caliber = 1.25;
		typicalSpeed = 858;
		maxspeed = 900;
		hit = 17;
		ACE_caliber=7.823;
        ACE_bulletLength=37.821;
        ACE_bulletMass=14.256;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.310};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={847, 867, 877};
        ACE_barrelLengths[]={508.0, 609.6, 660.4};
	};
	class BL_338_Lapua: B_556x45_Ball
	{
		airfriction = -0.0003083301;
		caliber = 3.2;
		typicalSpeed = 871;
		maxspeed = 1000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge = "FxCartridge_762";
		timeToLive = 7;
		deflecting = 20;
		hit = 20;
		ACE_caliber=8.585;
        ACE_bulletLength=39.573;
        ACE_bulletMass=16.2;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.322};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={880, 915, 925};
        ACE_barrelLengths[]={508.0, 686, 711.2};
	};
	class BL_792x33_Kurz: BL_300Blackout_Ball
	{
		airfriction = -0.0009625915;
		caliber = 0.7;
		cartridge = "FxCartridge_762";
		hit = 11.5;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		typicalspeed = 589;
		ACE_caliber = 8.08;
		ACE_bulletLength = 35;
		ACE_bulletMass = 12.8;
		ACE_ammoTempMuzzleVelocityShifts[] = {-5.3,-5.1,-4.6,-4.2,-3.4,-2.6,-1.4,-0.3,1.4,3,5.2};
		ACE_ballisticCoefficients[] = {0.251};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {685};
		ACE_barrelLengths[] = {420};
	};
	class BL_792x57_Mauser: BL_300Blackout_Ball
	{
		airfriction = -0.0009625915;
		caliber = 1.1;
		cartridge = "FxCartridge_762";
		hit = 16.5;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		typicalspeed = 783;
		ACE_caliber = 8.08;
		ACE_bulletLength = 35;
		ACE_bulletMass = 12.8;
		ACE_ammoTempMuzzleVelocityShifts[] = {-5.3,-5.1,-4.6,-4.2,-3.4,-2.6,-1.4,-0.3,1.4,3,5.2};
		ACE_ballisticCoefficients[] = {0.251};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {740, 800};
		ACE_barrelLengths[] = {500, 600};

	};
	class B_580x42_Ball_F: BulletBase
	{
		hit = 8;
		airFriction = -0.001425;
		caliber = 0.9;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		ACE_caliber=6.00;
        ACE_bulletLength = 24.2;
        ACE_bulletMass=4.0176;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.156};
		ACE_barrelLengths[] = {369,463,600};
		ACE_muzzleVelocities[] = {790,930,950};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        
	};
	class B_93x62_Ball: BL_300WINMAG
	{
		hit = 24;
		timeToLive = 7;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 5;
	};
	class BL_762x40WT: BulletBase
	{
		hit = 11;
		caliber = 0.7;
	    ACE_caliber=7.823;
        ACE_bulletLength=24.536;
        ACE_bulletMass=7.0;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.505, 0.496, 0.485, 0.485, 0.485};
        ACE_velocityBoundaries[]={853, 549, 549, 549};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={750, 730, 790, 794};
        ACE_barrelLengths[]={406.4, 508.0, 609.6, 660.4};
		airFriction = -0.0005949687;
	};
	class BL_762x40WT_NBT: BL_762x40WT
	{
		hit = 11.4;
		typicalSpeed = 695;
		caliber = 0.9;
		airFriction = -0.0005999687;
 		ACE_caliber=7.823;
        ACE_bulletLength=24.536;
        ACE_bulletMass=7.0;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.505, 0.496, 0.485, 0.485, 0.485};
        ACE_velocityBoundaries[]={853, 549, 549, 549};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={750, 710, 790, 794};
        ACE_barrelLengths[]={406.4, 508.0, 609.6, 660.4};
	};
	class BL_145x114_Ball: BulletBase {
		airfriction = -0.00055;
		airlock = 1;
		audiblefire = 48;
		caliber = 3.1;
		cartridge = "FxCartridge_127";
		cost = 5;
		hit = 32;
		indirecthit = 0;
		indirecthitrange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerendtime = 2;
		tracerscale = 1.9;
		tracerstarttime = 0.075;
		typicalspeed = 1000;
		visiblefire = 48;
		visiblefiretime = 3;
		class CamShakeExplode {
			distance = "((13^0.5)*3)";
			duration = "((round (13^0.5))*0.2 max 0.2)";
			frequency = 20;
			power = "(13^0.5)";
		};
		class CamShakeHit {
			distance = 1;
			duration = "((round (13^0.25))*0.2 max 0.2)";
			frequency = 20;
			power = 13;
		};
	};
	class BL_10G_Pellet: BulletBase
	{
		hit = 4;
		typicalSpeed = 200;
		indirectHit = 0;
		indirectHitRange = 0;
		simulation = "shotSpread";
		cartridge = "FxCartridge_slug";
		fireSpreadAngle = 1;
		cost = 5;
		visibleFire = 10;
		audibleFire = 15;
		airFriction = -0.023;
		caliber = 0;
		waterEffectOffset = -0.8;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		model = "\A3\Weapons_f\ammo\shell";
	};
	class BL_10G_Slug: BulletBase
	{
		hit = 42;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 600;
		airFriction = -0.007;
		caliber = 3;
		deflecting = 30;
		ACE_caliber=19.7;
        ACE_bulletLength=40;
        ACE_bulletMass=49.6;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.7057};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={390};
        ACE_barrelLengths[]={508.0};
	};
	class HLC_GP11_FMJ;
	class BL_75x55_GP11_220: HLC_GP11_FMJ
	{
		airFriction = -0.000376467;
		ACE_bulletMass = 14.255;
		ACE_bulletLength = ‪35.0012‬;
		ACE_barrelLengths[] = {254, 583};
		ACE_muzzleVelocities[] = {680, 731};
		caliber = 1.33;
		ACE_ballisticCoefficients[] = {0.629};
	}

};