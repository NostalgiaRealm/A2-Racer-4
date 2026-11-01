
/* ==== FUN_0040287c @ 0040287c ==== 
 * signature: undefined __register FUN_0040287c(byte * param_1, int param_2, int param_3, byte * param_4)
 * body: 0040287c-004028bb
 */

void FUN_0040287c(byte *param_1,int param_2,int param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  bVar1 = *param_1;
  if (bVar1 == 0) {
    *param_4 = 0;
    return;
  }
  if (param_2 < 1) {
    param_2 = 1;
LAB_00402892:
    iVar2 = ((uint)bVar1 - param_2) + 1;
    if (-1 < param_3) {
      if (iVar2 < param_3) {
        param_3 = iVar2;
      }
      goto LAB_0040289d;
    }
  }
  else if (param_2 <= (int)(uint)bVar1) goto LAB_00402892;
  param_3 = 0;
LAB_0040289d:
  *param_4 = (byte)param_3;
  pbVar3 = param_1 + param_2;
  for (; param_4 = param_4 + 1, param_3 != 0; param_3 = param_3 + -1) {
    *param_4 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  }
  return;
}


