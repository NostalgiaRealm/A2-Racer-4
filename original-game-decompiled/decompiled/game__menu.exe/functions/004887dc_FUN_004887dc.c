
/* ==== FUN_004887dc @ 004887dc ==== 
 * signature: undefined FUN_004887dc(void)
 * body: 004887dc-00488805
 */

undefined4 * FUN_004887dc(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)FUN_0040277c(0x10);
    puVar3 = puVar1;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
  }
  return puVar1;
}


