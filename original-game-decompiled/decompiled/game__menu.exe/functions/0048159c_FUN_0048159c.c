
/* ==== FUN_0048159c @ 0048159c ==== 
 * signature: undefined __register FUN_0048159c(byte * param_1)
 * body: 0048159c-00481622
 */

void FUN_0048159c(byte *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  uint *local_14;
  byte *local_10;
  uint *local_c;
  byte *local_8;
  
  local_c = (uint *)0x0;
  local_10 = (byte *)0x0;
  local_14 = (uint *)0x0;
  pcStack_24 = (code *)0x4815b3;
  local_8 = param_1;
  FUN_00404090((int)param_1);
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcStack_24 = (code *)&stack0xfffffffc;
  iVar2 = FUN_00402990();
  if (0 < iVar2) {
    iVar3 = 1;
    do {
      FUN_004029f0(iVar3,(int *)&local_10);
      FUN_004081f0(local_10,(int *)&local_c);
      puVar1 = local_c;
      FUN_004081f0(local_8,(int *)&local_14);
      FUN_00403fec(puVar1,local_14);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_0048162a;
  pcStack_28 = (code *)0x481622;
  FUN_00403c80((int *)&local_14,4);
  return;
}


