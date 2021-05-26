modded class Shovel
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionTogglePlaceObject);
		RemoveAction(ActionPlaceObject);
	}
}
