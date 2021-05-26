modded class TentBase
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionPlaceObject);
	}
};
