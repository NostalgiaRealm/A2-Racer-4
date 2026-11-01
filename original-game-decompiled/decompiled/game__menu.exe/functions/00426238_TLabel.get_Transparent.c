
/* ==== TLabel.get_Transparent @ 00426238 ==== 
 * signature: uint __register TLabel.get_Transparent(int param_1)
 * body: 00426238-00426241
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

uint TLabel_get_Transparent(int param_1)

{
  return CONCAT31((int3)((uint)param_1 >> 8),(*(byte *)(param_1 + 0x40) & 0x40) != 0) ^ 1;
}


