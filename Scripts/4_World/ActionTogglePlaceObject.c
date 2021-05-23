modded class ActionTogglePlaceObject: ActionSingleUseBase {
    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item) {
		if (item.IsDeployable()){
			return true;
		}

		if (IsInWhiteList(item.GetType())){
			if (StickyGrenadesEnabled){
				return true;
			}
		}
		return false;
	}

    bool IsInWhiteList(string itemName) {

	    TStringArray allowedItems = new TStringArray;
	    allowedItems.Insert("grenade");
	    allowedItems.Insert("stove");
	    allowedItems.Insert("pot");
	    allowedItems.Insert("trap");
		
        if (allowedItems && allowedItems.Count() > 0) {
            for (int i = 0; i < allowedItems.Count(); i++) {
                itemName.ToLower();
                string wItem = allowedItems.Get(i);
                wItem.ToLower();
                if (itemName.Contains(wItem)) {
                    return true;
                }
            }
        }
        return false;
    }

};