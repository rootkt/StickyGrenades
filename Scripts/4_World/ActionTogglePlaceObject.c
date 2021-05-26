modded class ActionTogglePlaceObject: ActionSingleUseBase
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		// not placeable if liquid is present; exception for barrels, for now
		//if ( !item.IsKindOf("Barrel_ColorBase") && item.IsLiquidPresent() )
		if (SGItemWhiteList.SGIsValidType("allowed", item.GetType())
		{
			if (STICKY_GRENADES_ENABLED)
			{
				if (!SGItemWhiteList.SGIsValidType("explosive", item.GetType()))
				{
					return true;	
				}
				else
				{
					return false;
				}
			}
		}
		return true;
	}
};
