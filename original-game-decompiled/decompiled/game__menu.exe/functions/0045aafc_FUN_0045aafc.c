
/* ==== FUN_0045aafc @ 0045aafc ==== 
 * signature: undefined __register FUN_0045aafc(undefined4 param_1, byte * param_2, undefined4 param_3, byte * param_4)
 * body: 0045aafc-0045ab8c
 */

void FUN_0045aafc(undefined4 param_1,byte *param_2,int param_3,byte *param_4)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  uint *local_10;
  uint *local_c;
  byte *local_8;
  
  local_c = (uint *)0x0;
  local_10 = (uint *)0x0;
  pcStack_18 = (code *)0x45ab13;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_18 = (code *)0x45ab1b;
  FUN_00404090((int)param_4);
  uVar2 = 1;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_18 = (code *)&stack0xfffffffc;
  FUN_0040822c(local_8,(int *)&local_c);
  puVar1 = local_c;
  FUN_0040822c(param_4,(int *)&local_10);
  FUN_00403fec(puVar1,local_10);
  if ((bool)uVar2) {
    FUN_0040873c(param_4);
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0045ab94;
  pcStack_1c = (code *)0x45ab7c;
  FUN_00403c80((int *)&local_10,2);
  pcStack_1c = (code *)0x45ab84;
  FUN_00403c5c((int *)&local_8);
  pcStack_1c = (code *)0x45ab8c;
  FUN_00403c5c((int *)&param_4);
  return;
}


