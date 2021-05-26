class SGItemWhiteList
{
	static ref TStringArray  M_ALLOWED_ITEMS = {
		"grenade",
		"stove",
		"trap", 
		"canister",
		"tent",
		"shovel",
		"farminghoe",
		"woodencrate",
		"barrel",
		"powergenerator",
		"fireplace",
		"fencekit",
		"watchtowerkit",
		"sheltersite",
		"batterycharger",
		"cablereel",
		"pickaxe",
		"spotlight",
		"container_base",
		"territoryflagkit"};

	static ref TStringArray  M_EXPLOSIVE_ITEMS = {
		"grenade",
		"stove",
		"trap",
		"canister"};

	
	static bool SGIsValidType(string ItemType, string itemName) 
	{
		TStringArray items;
		
		if 		(ItemType == "allowed")		{items = M_ALLOWED_ITEMS}
		else if (ItemType == "explosive")	{items = M_EXPLOSIVE_ITEMS}
		
		if (items && items.Count() > 0) {
			for (int i = 0; i < items.Count(); i++) {
				itemName.ToLower();
				if (itemName.Contains(items.Get(i))) {
					return true;
				}
			}
		}
		return false;
	}
	
}