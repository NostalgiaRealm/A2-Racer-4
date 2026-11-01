
/* ==== FUN_0048b2ec @ 0048b2ec ==== 
 * signature: undefined __register FUN_0048b2ec(int param_1, byte * param_2)
 * body: 0048b2ec-0048b34e
 */

void FUN_0048b2ec(int param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  byte local_4c [39];
  byte local_25;
  byte abStack_24 [32];
  
  local_25 = *param_2;
  if (0x1f < local_25) {
    local_25 = 0x20;
  }
  pbVar1 = abStack_24;
  for (uVar2 = (uint)local_25; param_2 = param_2 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar1 = *param_2;
    pbVar1 = pbVar1 + 1;
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 8) + 8);
  uVar2 = *pbVar1 + 1;
  bVar3 = uVar2 == 0;
  FUN_00402bc0((int *)pbVar1,(int *)&local_25,uVar2);
  if (!bVar3) {
    FUN_0040287c(&local_25,1,0xc,local_4c);
    FUN_00402b0c((byte *)(*(int *)(param_1 + 8) + 8),local_4c,0x20);
  }
  return;
}


