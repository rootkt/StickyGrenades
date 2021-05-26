modded class ItemBase
{
	ItemBase PlacedItem;
	#ifdef DAYZ_1_09
	override void OnPlacementComplete( Man player )
	{		
		super.OnPlacementComplete( player );
	}
	#else
	override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
	{		
		super.OnPlacementComplete( player, position, orientation );
	}
	#endif
	override void SetActions()
	{
		super.SetActions();
		bool IsItemAllowed = SGItemWhiteList.SGIsValidType("allowed", super.GetType());
		
		if (IsItemAllowed)
		{
			
			AddAction(ActionTogglePlaceObject);
			AddAction(ActionPlaceObject);
		}
		
	}

};