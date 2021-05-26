modded class LandMineTrap
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionPlaceObject);
	}
}
