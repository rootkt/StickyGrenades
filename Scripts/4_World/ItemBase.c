modded class ItemBase
{
	ItemBase PlacedItem;
	#ifdef DAYZ_1_09
	override void OnPlacementComplete( Man player )
	{		
		super.OnPlacementComplete( player );
		if  (PlacedItem )
		{
			PlacedItem.SetLifetime(3888000);
		}
	}
	#else
	override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
	{		
		super.OnPlacementComplete( player, position, orientation );
		if  (PlacedItem )
		{
			PlacedItem.SetLifetime(3888000);
		}
	}
	#endif
	
	override void SetActions()
    {
        super.SetActions();
        AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
    }
}
