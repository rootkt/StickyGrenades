modded class FarmingHoe
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionTogglePlaceObject);
		RemoveAction(ActionPlaceObject);
	}
}