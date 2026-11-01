
/* ==== FUN_00416d30 @ 00416d30 ==== 
 * signature: undefined __register FUN_00416d30(int * param_1, undefined4 param_2)
 * body: 00416d30-00416d53
 */

void FUN_00416d30(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte abStack_18 [8];
  undefined4 local_10;
  
  puVar2 = &DAT_00446584;
  pbVar3 = abStack_18;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pbVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    pbVar3 = (byte *)((int)pbVar3 + 4);
  }
  local_10 = param_2;
  FUN_00416ce0(param_1,abStack_18);
  return;
}


