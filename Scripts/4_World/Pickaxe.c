modded class Pickaxe
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionTogglePlaceObject);
		RemoveAction(ActionPlaceObject);
	}
}