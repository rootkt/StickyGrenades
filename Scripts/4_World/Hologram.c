modded class Hologram
{	
	override void EvaluateCollision(ItemBase action_item = null)
	{
		ItemBase item_in_hands = ItemBase.Cast(m_Player.GetHumanInventory().GetEntityInHands());
		if (item_in_hands && item_in_hands.IsInherited(ItemBase) && !item_in_hands.IsInherited(Shovel) && !item_in_hands.IsInherited(Pickaxe) )
		{
			SetIsColliding(false);
			return;
		}
		
		super.EvaluateCollision(action_item);
	}
}
