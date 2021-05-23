modded class MissionGameplay
{
    override void OnKeyPress(int key)
	{
		super.OnKeyPress(key);
			
		if ( key == KeyCode.KC_K )
		{
			toggleStickyGrenades();
        }
    }
}
