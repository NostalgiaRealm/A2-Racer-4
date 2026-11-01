
/* ==== FUN_0046ff5c @ 0046ff5c ==== 
 * signature: undefined __register FUN_0046ff5c(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 * body: 0046ff5c-0046ff9c
 */

void FUN_0046ff5c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = param_1[3];
  if (iVar2 != 0) {
    bVar1 = false;
    pbVar3 = (byte *)(param_1 + 4);
    do {
      if (((*pbVar3 < 2) && (*pbVar3 != 1)) && (!bVar1)) {
        param_3 = *(undefined4 *)(pbVar3 + 4);
        bVar1 = true;
      }
      pbVar3 = pbVar3 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (*(code *)*param_1)(param_1[1],param_1[2],param_3);
  return;
}


