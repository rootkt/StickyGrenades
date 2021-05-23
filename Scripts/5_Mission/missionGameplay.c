modded class MissionGameplay
{
    override void OnKeyPress(int key)
	{
		//Print("[STICKY] Apertou tecla");
		super.OnKeyPress(key);
			
		if ( key == KeyCode.KC_K )
		{
			//Print("[STICKY] Apertou K");
			toggleStickyGrenades();
        }
    }
}
