
/* ==== FUN_00446774 @ 00446774 ==== 
 * signature: undefined FUN_00446774(void)
 * body: 00446774-00446777
 */

void FUN_00446774(byte *param_1)

{
  *param_1 = *param_1 ^ (byte)param_1;
  *param_1 = *param_1 + (byte)param_1;
  return;
}


